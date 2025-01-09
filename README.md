# Temperature-and-Humidity-Monitoring-System-with-LED-Indicators

This project tracks the temperature and humidity using a DHT11 sensor and provides feedback via LEDs. It reads the temperature and humidity values, and based on the temperature, it lights up one of the two LEDs. The RED LED lights up when the temperature exceeds 24°C, and the GREEN LED lights up when the temperature is 24°C or lower.

## Components Required:
- Arduino (e.g., Arduino Uno or similar)
- DHT11 Temperature and Humidity Sensor
- 2x LEDs (Red and Green)
- 2x 220Ω Resistors (for LED current limiting)
- Jumper wires
- Breadboard (optional)

## Circuit Diagram:
- **DHT11 Sensor:**
  - VCC to 5V
  - GND to GND
  - DATA to digital pin 2 (connected to the Arduino)

- **LEDs:**
  - Connect the RED LED to pin 4 (through a current-limiting resistor)
  - Connect the GREEN LED to pin 7 (through a current-limiting resistor)

## Code Explanation:
1. **DHT11 Sensor Initialization:**
   The sensor is connected to pin 2 on the Arduino, and the library `DHT11.h` is used to interface with the sensor.

2. **LED Control:**
   Two LEDs are used to provide visual feedback about the temperature:
   - **RED LED** lights up when the temperature exceeds 24°C.
   - **GREEN LED** lights up when the temperature is less than or equal to 24°C.

3. **Serial Monitor Output:**
   The Arduino continuously reads the temperature and humidity values from the DHT11 sensor and outputs them to the Serial Monitor.

4. **Temperature Threshold:**
   If the temperature exceeds 24°C, the RED LED turns on, indicating a high temperature. If the temperature is lower or equal to 24°C, the GREEN LED turns on.

## How to Use:
1. Connect the DHT11 sensor and LEDs to your Arduino as described in the **Components Required** section.
2. Upload the provided code to your Arduino using the Arduino IDE.
3. Open the Serial Monitor to view the temperature and humidity readings.
4. Observe the LED indicators to know if the temperature exceeds 24°C or not.

## License:
This project is open-source. Feel free to modify and share it. Attribution is appreciated.

## Troubleshooting:
- **Error in reading DHT11 sensor:** Ensure that the wiring is correct and the DHT11 sensor is not damaged.
- **LED not lighting up:** Check the wiring and ensure the LEDs are connected with appropriate current-limiting resistors.

## Author:
- Vinay kumar k deshpande

