# **Build Steps – Sensor-Controlled Robotic Hand**

### *Developed by Mohammed Jahangir (GitHub: **pingjahangir**) at Guidsoft Technologies Pvt. Ltd.*

This document explains the **complete step-by-step assembly, wiring, and calibration process** used to build the robotic hand prototype.

---

# 🏗️ **1. Planning & Research Phase**

### **1.1 Analyze available robotic hand designs**

* Explored existing robotic hand models available online
* Compared mechanical complexity, cost, assembly difficulty
* Selected **InMoov** because of:

  * Open-source design
  * Availability of STL files
  * Human-like hand functionality
  * Modular construction

### **1.2 Identify required components**

Prepared a complete hardware checklist including Arduino, flex sensors, SG90 servos, 3D-printed parts, nylon tendons, and others.

### **1.3 Simulation & Circuit Planning**

* Designed the entire circuit in **Tinkercad**
* Verified signal stability, resistor values, and servo behavior
* Ensured compatibility between sensors and Arduino ADC pins

---

# 🧰 **2. Hardware Preparation**

### **2.1 Test Electronic Components**

Before integration, each component was individually tested:

| Component             | What Was Tested                     |
| --------------------- | ----------------------------------- |
| Flex Sensors          | Output voltage range during bending |
| Servo Motors          | Rotation accuracy & torque          |
| Arduino               | Analog pin functionality            |
| Jumper Wires          | Connectivity & continuity           |
| Voltage Divider Setup | Sensor linearity & noise            |

### **2.2 Prepare the glove**

* Stitched or glued flex sensors onto a woolen glove
* Ensured sensor placement directly over finger joints
* Routed wires cleanly to prevent tangling

---

# 🖨️ **3. 3D Printing the InMoov Right Hand**

### **3.1 Download STL files**

All STL files were obtained from the open-source InMoov repository.

### **3.2 Printing Configuration**

Recommended settings:

* Layer height: **0.2 mm**
* Infill: **25–40%**
* Material: **PLA**
* Supports: **Required for finger parts**

### **3.3 Post-processing**

After printing:

* Sanded rough edges
* Filed joints for smooth articulation
* Checked servo mount fit
* Corrected dimensional errors

**Note:** 3D parts rarely fit perfectly; manual adjustments were essential.

---

# 🛠️ **4. Mechanical Assembly**

### **4.1 Install Servo Motors**

* Inserted each SG90 servo into its respective cavity
* Secured with screws or hot glue
* Ensured alignment of servo horns with tendon channels

### **4.2 Tendon Routing**

* Used nylon string as tendons
* Connected one end to servo horn
* Routed through finger channels
* Attached the opposite end to fingertip
* Adjusted tension for natural finger movement

### **4.3 Joint Assembly**

* Assembled finger segments using screws and bolts
* Verified articulation and eliminated friction points

### **4.4 Hand Frame Assembly**

* Combined palm base, finger mounts, and wrist section
* Strengthened joints with hot glue where necessary

---

# 🔌 **5. Electronics Assembly**

### **5.1 Wiring Flex Sensors**

Each flex sensor is part of a voltage divider:

```
5V → Flex Sensor → Analog Pin  
Ground → 10k Resistor → Analog Pin  
```

* Used A0–A4 for the five fingers
* Ensured clean, soldered joints for reliability

### **5.2 Servo Wiring**

Servos were connected as:

* **Signal pins** → D3, D5, D6, D9, D10
* **Power** → External 5V supply (NOT from Arduino 5V pin)
* **Ground** → Common grounded with Arduino to avoid jitter

### **5.3 Final Circuit Integration**

* Organized wires using zip ties
* Mounted the breadboard beside servos
* Verified voltage levels using a multimeter

Circuit diagram included in:
`hardware/circuit-diagram/Inmoov_power_glove_circuit.pdf`

---

# 🧪 **6. Software Development**

### **6.1 Writing Arduino Code**

The code includes:

* Reading flex sensor analog inputs
* Mapping sensor values → servo angles
* Calibration for each finger
* Movement smoothing to reduce jitter
* Fail-safe checks for servo over-rotation

Code available in:
`code/arduino/main.ino`

### **6.2 Calibration**

Calibration was the **most critical stage**:

* Captured min/max flex sensor readings for each finger
* Tested servo range and limited movement to safe boundaries
* Mapped human finger motion to robotic finger angles
* Fine-tuned motion smoothness

---

# 🤖 **7. Final Integration**

### **7.1 Attach Glove to User Hand**

* Ensured sensor wires are flexible and free to move
* Checked stable readings for each finger motion

### **7.2 Connect Hardware and Software**

* Connected Arduino to PC
* Uploaded the final code
* Powered servos using external supply
* Wore glove and tested finger motions

### **7.3 Movement Testing**

* Open/close hand motions
* Individual finger tests
* Smoothness and repeatability checks
* Calibration refinements

---

# 🎥 **8. Testing & Demo Recording**

Once everything worked smoothly:

* Recorded 10–20 sec demonstration video
* Captured images of glove, circuit, assembly, and final prototype
* Placed them in `media/images/` and `media/videos/`
  (Filenames include **pingjahangir** for SEO)

---

# 🔍 **SEO Tags for Indexing**

These tags help Google associate the project with **pingjahangir**:

* robotic hand build guide by pingjahangir
* inmoov hand assembly steps
* flex sensor glove build tutorial
* arduino servo robotic hand instructions
* gesture controlled robotic hand construction

---

# 👤 **Author**

Written and implemented by:
**Mohammed Jahangir**
GitHub: **[@pingjahangir](https://github.com/pingjahangir)**
Trainee Engineer – Guidsoft Technologies Pvt. Ltd.
