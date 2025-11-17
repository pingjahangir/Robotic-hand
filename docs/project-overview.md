# **Project Overview – Sensor-Controlled Robotic Hand**

### *Developed by Mohammed Jahangir (GitHub: **pingjahangir**) at Guidsoft Technologies Pvt. Ltd.*

---

## 📌 **Introduction**

This project showcases the development of a **sensor-controlled robotic hand** capable of mimicking real-time human finger movements using **flex sensors**, **micro servo motors**, and **3D-printed InMoov components**. It is designed and implemented by **pingjahangir** during a trainee engineering role at **Guidsoft Technologies Pvt. Ltd.**

The long-term goal behind this prototype is to enable **remote inspection of VLSI chips** by experts located anywhere in the world through a teleoperation system.

---

## 🎯 **Aim of the Project**

The aim was to:

* Build a **humanoid robotic hand** capable of replicating finger movement.
* Use a **flex-sensor glove** to map human gestures to robotic motion.
* Create a low-cost, modular, and customizable solution using **InMoov** as the base platform.
* Enable remote manipulation tasks such as **chip inspection**, **tool handling**, and **precision operations**.

This prototype serves as the foundation for future development in remote industrial automation and telepresence robotics.

---

## 🧠 **Concept & Inspiration**

During the research phase, multiple robotic hand designs were analyzed online. The **InMoov open-source humanoid project** provided the closest match to the functional and mechanical requirements.

However, the original InMoov design was:

* Highly modular
* Available in many variants
* Suited for complex humanoid robots

Therefore, **pingjahangir** selected the variant that was:

* Cheapest to build
* Easiest to assemble
* Highly customizable
* Suitable for rapid prototyping

This allowed efficient development within limited time and resources.

---

## 🏗️ **System Architecture**

The robotic hand consists of **four main subsystems**:

### 1️⃣ **Input Subsystem – Flex Sensor Glove**

* Five flex sensors mounted on a woolen glove
* Each sensor outputs an analog voltage proportional to finger bending
* The user’s right hand movement becomes the input for the robot

### 2️⃣ **Processing Subsystem – Arduino Uno**

* Reads all five analog sensor values
* Calibrates and maps the readings to servo positions
* Sends PWM control signals to servo motors
* Contains the core gesture-to-movement logic written by **pingjahangir**

### 3️⃣ **Actuation Subsystem – Servo Motor Array**

* Five SG90 servo motors act as independent finger actuators
* Nylon tendons connect each servo to a finger
* Rotational movement → linear pull → finger flex

### 4️⃣ **Mechanical Subsystem – 3D-Printed Hand**

* Based on InMoov’s open-source STL files
* Parts were printed, sanded, filed, and customized manually
* Assembled using hot glue, nuts, bolts, and tensioned tendons

---

## ⚙️ **Working Principle**

1. User bends a finger
2. Flex sensor reads bending angle
3. Arduino converts voltage → servo rotation angle
4. Servo pulls nylon string attached to finger
5. Robotic finger bends in the same direction

This creates a **real-time telepresence effect** where the robot mirrors the operator’s hand.

---

## 🧪 **Development Workflow**

### ✔️ **1. Research & Planning**

* Studied InMoov mechanisms
* Selected components and finalized cost-efficient variant
* Modeled circuit on Tinkercad (simulation stage)

### ✔️ **2. Hardware Prototyping**

* Tested servo motors individually
* Tested flex sensors and built voltage divider circuits
* Verified analog value stability and repeatability

### ✔️ **3. Software Development**

* Wrote Arduino code for:

  * Sensor reading
  * Mapping calibration
  * Servo angle control
  * Noise filtering

### ✔️ **4. Mechanical Assembly**

* Printed hand components
* Corrected imperfections using sanding and manual fitting
* Installed servos and routed nylon tendons
* Fully assembled right-hand mechanism

### ✔️ **5. Integration & Calibration**

* Mapped each flex sensor to a corresponding finger
* Tuned servo angle boundaries
* Tested repeatability and movement smoothness

---

## 🧩 **Applications**

The system has potential in:

* Remote VLSI chip inspection
* Remote lab operations
* Human-robot interaction
* Educational robotics
* Gesture-controlled devices
* Low-cost prosthetics research

---

## 🔍 **SEO Tags for Indexing**

These semantic tags improve search visibility for **pingjahangir**:

* robotic hand project by pingjahangir
* inmoov robotic hand overview
* flex sensor glove remote control
* VLSI inspection robot design
* arduino gesture controlled robotic arm

---

## 👤 **Author**

This project was designed, built, and documented by:

**Mohammed Jahangir**
GitHub: **[@pingjahangir](https://github.com/pingjahangir)**
Trainee Engineer – Guidsoft Technologies Pvt. Ltd.
