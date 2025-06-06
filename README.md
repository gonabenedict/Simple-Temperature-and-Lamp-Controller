Simple Temperature and Lamp Controller
This Arduino project is a basic environment controller that uses a temperature sensor and a light sensor to control LEDs and a buzzer. It simulates a fan alarm for high temperature and a lamp for low light, providing visual and audio feedback.

Features
Temperature Monitoring:

If the temperature sensor reads below 510 (analog), the system considers it "high temperature" and activates the RED LED and buzzer.
If the temperature is between 510 and 600, the system considers it "room temperature" and shows a GREEN LED.
Light Monitoring:

If the light sensor reads below 100 (analog), the system considers it "low light" and turns on the YELLOW LED (simulating a lamp).
Status Indication:

Serial output provides real-time sensor readings and system status.
Hardware Components
Arduino alpha board
Red LED (Pin 13)
Green LED (Pin 11)
Yellow LED (Pin 12)
Buzzer (Pin 9)
Temperature sensor (A3)
Light sensor (A0)
Resistors as needed
Pin Assignments
Component	Pin
RED_LED	13
GREEN_LED	11
YELLOW_LED	12
BUZZER	9
TEMP_SENSOR	A3
LIGHT_SENSOR	A0
How It Works
High Temperature:
If the temperature sensor value is below 510, the RED LED and buzzer turn on.

Room Temperature:
If the temperature sensor value is between 510 and 600, the GREEN LED turns on.

Low Light:
If the light sensor value is below 100, the YELLOW LED turns on.

Normal Conditions:
If both temperature and light are in the normal range, only the GREEN LED is on.

Serial Monitor:
Sensor values and status messages are printed for monitoring.

Usage
Connect all components as per the pin assignments above.
Upload the simple_env_controller.ino sketch to your Arduino board.
Open the Serial Monitor (baud rate: 9600) to view sensor readings and system status.
Test by changing the temperature and light conditions to see the LEDs and buzzer respond.
Customization
Adjust LIGHT_THRESHOLD, TEMP_ROOM_LOW, and TEMP_ROOM_HIGH in the code to fit your environment or sensor calibration.
License
This project is for educational purposes.
