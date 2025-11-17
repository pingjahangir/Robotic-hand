### *All original codes provided by Mohammed Jahangir (GitHub: `pingjahangir`)*

This directory contains all Arduino sketches used during the development and testing of the robotic hand prototype.
Each sketch serves a different purpose: testing, calibration, sensor reading, and full-hand control.

---

# 📌 **1. Servo Reset Code (All Servos to 0 Degrees)**

### *Purpose:*

Used to reset a servo to **0° position** before assembly or calibration.

```cpp
#include <Servo.h> // Include the Servo library

Servo myServo; // Create a Servo object

void setup() {
  myServo.attach(6); // Attach the servo to pin 9
  myServo.write(0);  // Set the servo to 0 degrees
}

void loop() {
  // No action needed for this simple setup
}
```

---

# 📌 **2. Flex Sensor + Servo (Single Finger Test)**

### *Purpose:*

To test **one flex sensor + one servo**.
Helps verify the mapping before moving to full-hand integration.

```cpp
#include <Servo.h> // Include the Servo library
 
Servo finger1; // Create a servo object
int flexSensorValue;
int flexPin = A0; // Pin where the flex sensor is connected
int servoPin = 5; // Pin where the servo motor is connected
 
void setup() {
  finger1.attach(servoPin); // Attach the servo to the specified pin
  Serial.begin(9600); // Start serial communication for debugging
}
 
void loop() {
  // Read the value from the flex sensor
  flexSensorValue = analogRead(flexPin);
 
  // Map the sensor value to a range of 0 to 180 degrees
  int pos = map(flexSensorValue, 1010, 1012, 0,180);
  pos = constrain(pos, 0,180); // Constrain the value to ensure it stays within bounds
 
  // Move the servo to the mapped position
  finger1.write(pos);
 
  // Output for debugging
  Serial.print("Flex sensor value: ");
  Serial.print(flexSensorValue);
  Serial.print(" -> Servo position: ");
  Serial.println(pos);
 
  delay(100); // Delay to allow smooth servo movement
}
```

---

# 📌 **3. Flex Sensor Voltage Output Reader**

### *Purpose:*

To check flex sensor **raw analog values and voltage output**.
Useful for understanding calibration ranges.

```cpp
const int flexPin = A0;  // Flex sensor connected to analog pin A0

void setup() {
  Serial.begin(9600);   // Start serial communication at 9600 baud
}

void loop() {
  int sensorValue = analogRead(flexPin);  // Read the analog value (0-1023)
  float voltage = sensorValue * (5.0 / 1023.0);  // Convert to voltage (0-5V)

  // Print the raw sensor value and voltage
  Serial.print("Raw Value: ");
  Serial.print(sensorValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 3);  // Print voltage with 3 decimal places
  Serial.println(" V");

  delay(500);  // Delay for half a second
}
```

---

# 📌 **4. Two-Finger Control Code (2 Flex Sensors → 2 Servos)**

### *Purpose:*

Testing multi-sensor input with correct mapping for two fingers.

```cpp
//Define sensors and servos

#include <Servo.h> //Includes servo library

Servo finger1, finger2;

int servoPin1 = 3;
int servoPin2 = 5;

int flexPin1 = A0;
int flexPin2 = A1;

void setup()
{
  //Attach the servo objects to their respective pins
  finger1.attach(servoPin1);
  finger2.attach(servoPin2);
  
  pinMode(servoPin1, OUTPUT);
  pinMode(servoPin2, OUTPUT);
  
  pinMode(flexPin1, INPUT);
  pinMode(flexPin2, INPUT);
}

void loop()
{
  int flex1 = analogRead(flexPin1);
  int flex2 = analogRead(flexPin2);
  
  int pos1 = map(flex1, 609, 746, 0, 180);
  pos1 = constrain(pos1, 0, 180);

  int pos2 = map(flex2, 609, 746, 0, 180);
  pos2 = constrain(pos2, 0, 180);
  
  finger1.write(pos1);
  finger2.write(pos2);
}
```

---

# 📌 **5. Multi-Finger Control Code (5 Flex Sensors → 5 Servos)**

### *Purpose:*

Control multiple fingers with flex sensors.
This is the advanced version used in your prototype.

```cpp
#include <Servo.h>
 
// Pin definitions for flex sensors
const int flexPin1 = A0;  // Flex sensor 1 connected to analog pin A0 // Thumb
const int flexPin2 = A1;  // Flex sensor 2 connected to analog pin A1 // Index
//const int flexPin3 = A2;  // Flex sensor 3 connected to analog pin A2 // Middle
//const int flexPin4 = A3;  // Flex sensor 4 connected to analog pin A3 // Ring
//const int flexPin5 = A4;  // Flex sensor 5 connected to analog pin A4 // Pinky
 
// Pin definitions for servo motors
const int servoPin1 = 3;  // Servo 1 connected to pin 3 // Thumb
const int servoPin2 = 5;  // Servo 2 connected to pin 5 // Index
//const int servoPin3 = 6; // Servo 3 connected to pin 6 // Middle
//const int servoPin4 = 9; // Servo 4 connected to pin 9 // Ring
//const int servoPin5 = 11; // Servo 5 connected to pin 11 // Pinky
 
// Create servo objects
Servo myServo1;
Servo myServo2;
//Servo myServo3;
//Servo myServo4;
//Servo myServo5;
 
void setup() {
  myServo1.attach(servoPin1);
  myServo2.attach(servoPin2);
  Serial.begin(9600);
}
 
void loop() {
  int flexValue1 = analogRead(flexPin1);
  int flexValue2 = analogRead(flexPin2);
  
  int servoAngle1 = map(flexValue1, 320,210, 0, 180);
  int servoAngle2 = map(flexValue2, 310, 150, 0, 180);
 
  myServo1.write(servoAngle1);
  myServo2.write(servoAngle2);
  
  Serial.print("Flex Sensor 1 Value: ");
  Serial.print(flexValue1);
  Serial.print("  |  Servo 1 Angle: ");
  Serial.println(servoAngle1);

  Serial.print("Flex Sensor 2 Value: ");
  Serial.print(flexValue2);
  Serial.print("  |  Servo 2 Angle: ");
  Serial.println(servoAngle2);

  delay(1000);
}
```
