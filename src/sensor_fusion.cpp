#include "../include/sensor_fusion.h"
#include <cmath>

ComplementaryFilter::ComplementaryFilter(float alpha_val) 
    : alpha(alpha_val), pitch(0.0f), roll(0.0f) {}

void ComplementaryFilter::update(float accel_x, float accel_y, float accel_z, 
                                 float gyro_x, float gyro_y, float dt) {
    // Calculate pitch and roll angles from accelerometer data
    float accel_pitch = atan2(-accel_x, sqrt(accel_y * accel_y + accel_z * accel_z)) * (180.0f / M_PI);
    float accel_roll  = atan2(accel_y, accel_z) * (180.0f / M_PI);

    // Complementary Filter equation combining gyroscope integration and accelerometer orientation
    pitch = alpha * (pitch + gyro_x * dt) + (1.0f - alpha) * accel_pitch;
    roll  = alpha * (roll + gyro_y * dt)  + (1.0f - alpha) * accel_roll;
}
