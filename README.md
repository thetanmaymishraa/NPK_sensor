# NPK Sensor Monitoring System

## Overview
This project is an **Arduino-based NPK sensor monitoring system** that measures the nitrogen (N), phosphorus (P), and potassium (K) levels in the soil and displays the values on an **LCD screen**. It helps farmers and researchers analyze soil fertility.

## Features
- **Real-time NPK readings** using analog sensors.
- **LCD Display (16x2, I2C)** to show NPK values.
- **Serial Monitor Output** for debugging and data logging.
- **Simple and Efficient Mapping** of sensor values to percentages.

## Components Required
```markdown
- Arduino Uno (or compatible board)
- NPK Soil Sensor (Analog Output)
- 16x2 LCD with I2C module
- Jumper Wires
```

## Circuit Connections
```markdown
| Component | Arduino Pin |
|-----------|------------|
| NPK Sensor (Nitrogen)   | A0 |
| NPK Sensor (Phosphorus) | A1 |
| NPK Sensor (Potassium)  | A2 |
| LCD SDA                 | A4 |
| LCD SCL                 | A5 |
```

## Installation & Setup
```cpp
#include <Wire.h>               // For I2C communication
#include <LiquidCrystal_I2C.h>  // Library for LCD with I2C module
```
1. **Upload the Code** to the Arduino board.
2. **Connect the Components** as per the circuit diagram.
3. **Open Serial Monitor** (9600 baud rate) to see real-time NPK values.

## Code Explanation
```markdown
- Reads nitrogen, phosphorus, and potassium values from the sensor.
- Converts the analog values to a percentage range (0-100%).
- Displays the values on the LCD.
- Prints the values to the Serial Monitor.
```

## Future Enhancements
```markdown
- Integrate with IoT to send real-time data to a cloud platform.
- Add a wireless module (ESP8266/ESP32) for remote monitoring.
- Store historical data for trend analysis.
```

## License
```markdown
This project is open-source under the MIT License.
```

## Contribution
```markdown
Feel free to fork this repository, make improvements, and create pull requests!
```

## Author
```markdown
Developed by Tanmay Mishra
