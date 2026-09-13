# Embedded Sensor Fusion & Motor Driver Firmware

Bare-metal C++ embedded modules for IMU signal filtering, closed-loop encoder integration, and PWM motor driver control.

### 🛠 Tech Stack
- **Language:** Embedded C++17
- **Hardware Targets:** STM32 / ESP32 microcontrollers
- **Algorithms:** Complementary Sensor Fusion, Quadrature Encoder Decoding

### 📡 Features
- **6-DOF Complementary Filter:** Fuses accelerometer and gyroscope readings to suppress high-frequency noise and low-frequency drift.
- **Low-Latency Orientation Tracking:** Computes real-time pitch and roll estimates for balancing platforms and mobile robots.
