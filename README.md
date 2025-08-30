🎥 Flex Sensor with LED Indicator 

This project demonstrates how to use a Flex Sensor with an Arduino to control an LED. When the sensor bends beyond a certain threshold, the LED turns ON, otherwise it stays OFF. Additionally, the sensor readings and LED state are displayed on the Serial Monitor.

Perfect for beginners in Arduino, IoT, and sensor interfacing 🚀

🔧 Components Required

Arduino Uno (or any compatible board)

Flex Sensor

Resistor (10kΩ recommended for voltage divider)

LED

Breadboard & Jumper Wires

⚡ Circuit Connections

Connect one end of the flex sensor to 5V and the other end to A0 (through a 10kΩ resistor to GND).

Connect LED to digital pin 13 (with a resistor if required).

Common ground for all connections.

circuit diagram:
[!flex sensor](flex20%sensor.jpg)
 
Simple Flow:
Flex Sensor ➝ Arduino Analog Input ➝ Compare Value ➝ LED ON/OFF

✅ How It Works:

The flex sensor changes resistance when bent.

Arduino reads the analog value from the sensor.

If the sensor value is less than threshold (170) → LED turns ON.

Otherwise, the LED stays OFF.

Serial Monitor shows sensor values and LED status in real-time.

📝 Notes

Adjust the threshold value depending on your sensor and circuit setup.
