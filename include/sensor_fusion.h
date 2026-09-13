#ifndef SENSOR_FUSION_H
#define SENSOR_FUSION_H

class ComplementaryFilter {
private:
    float alpha; // Filter coefficient weighting gyro vs accel
    float pitch;
    float roll;

public:
    ComplementaryFilter(float alpha_val = 0.98f);
    void update(float accel_x, float accel_y, float accel_z, 
                 float gyro_x, float gyro_y, float dt);
    float getPitch() const { return pitch; }
    float getRoll() const { return roll; }
};

#endif // SENSOR_FUSION_H
