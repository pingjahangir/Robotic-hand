# **Challenges Faced & Solutions Implemented**

### *Documented by Mohammed Jahangir (GitHub: **pingjahangir**) during development at Guidsoft Technologies Pvt. Ltd.*

This document highlights the **major technical challenges** encountered during the development of the robotic hand prototype and the **solutions engineered** to overcome them.

---

# 🧩 **1. Identifying the Right Robotic Hand Model**

### **Challenge**

There were multiple open-source robotic hand designs available online. Most were either:

* too complex,
* expensive, or
* not suitable for rapid prototyping.

### **Solution**

After extensive research, **InMoov** was selected because:

* It matched human-hand proportions,
* It was modular and open-source,
* STL files were readily available,
* It allowed low-cost customization.

**Decision made by:** *pingjahangir*

---

# ⚙️ **2. Imperfect 3D Prints Causing Mechanical Misalignment**

### **Challenge**

The 3D-printed parts were not perfectly accurate:

* Holes were tight
* Edges were uneven
* Servo compartments did not fit correctly
* Finger joints were rough and stiff

### **Solution**

Performed manual post-processing:

* Sanding and filing tight joints
* Enlarging holes with precision tools
* Adjusting servo mounts
* Smoothing contact surfaces

This step significantly improved movement smoothness and assembly quality.

---

# 🔌 **3. Flex Sensor Readings Were Unstable**

### **Challenge**

Initial flex sensor readings were inconsistent due to:

* Voltage fluctuations
* Noise in analog signals
* Loose wiring on breadboard

### **Solution**

* Added **10kΩ resistors** as voltage dividers
* Used stable wiring layout
* Implemented **median filtering** in Arduino code
* Ensured proper grounding to reduce noise

This stabilized flex sensor output for accurate gesture mapping.

---

# 🤖 **4. Servo Motors Drawing Too Much Current**

### **Challenge**

SG90 servo motors caused:

* Arduino resets
* Jittery movement
* Inconsistent rotation
  when powered directly from the Arduino 5V pin.

### **Solution**

Used an **external 5V DC power supply** for servos and created a **common ground** between Arduino + servo supply.
This ensured smooth and reliable servo motion without brownouts.

---

# 🔄 **5. Servo Calibration & Finger Mapping**

### **Challenge**

Each servo behaved differently:

* Variations in minimum/maximum rotation
* Mechanical tension differences
* Incorrect finger-tendon alignment

### **Solution**

* Calibrated each servo individually
* Fine-tuned servo movement boundaries in code
* Adjusted nylon tendon length and tension manually
* Re-tested finger actuation until movement matched human motion

This created accurate, natural finger movement mirroring the user.

---

# 🧵 **6. Nylon Tendon Slipping or Snapping**

### **Challenge**

Nylon string behaved unpredictably:

* Slipped from servo horns
* Became loose over time
* Snapped under tension

### **Solution**

* Double-knotted and hot-glued tendon endings
* Added tension adjustments during assembly
* Ensured tendons traveled smoothly through finger channels

This improved finger reliability and strength.

---

# 🧪 **7. Flex Sensor to Finger Mapping Misalignment**

### **Challenge**

Initially, flex sensor readings didn’t match the correct finger movement, due to wiring mix-ups and calibration issues.

### **Solution**

* Re-labeled all sensor wires
* Systematically mapped A0–A4 to the correct servo outputs
* Performed multiple calibration cycles while wearing the glove
* Added adjustment variables in code

This created the correct one-to-one mapping between glove fingers and robotic fingers.

---

# 🔧 **8. Assembly Strength and Structural Stability**

### **Challenge**

Some 3D-printed joints were fragile or loose.

### **Solution**

* Reinforced parts with hot glue
* Tightened screws strategically
* Used additional nuts/bolts where required

This increased durability during testing.

---

# 🎥 **9. Recording a Clean Demo Video**

### **Challenge**

The robotic hand occasionally jittered during video recording.

### **Solution**

* Rechecked calibration before filming
* Used stable power supply
* Adjusted camera framing to highlight motion clearly

The final recorded video demonstrates smooth, real-time movement.

---

# 🎯 **10. Repository SEO & Documentation**

### **Challenge**

The project initially had no documentation and did not appear in searches for the username **pingjahangir**.

### **Solution**

* Created a full professional documentation set
* Used semantic keywords
* Added username strategically for indexing
* Organized repository in a clean engineering structure

This improves GitHub visibility and professional impact.

---

# 🔍 **SEO Tags for Indexing**

Lightweight terms associated with **pingjahangir**, robotic hand development, and teleoperation systems:

* robotic hand challenges solved by pingjahangir
* gesture controlled robotics troubleshooting
* inmoov hand calibration problems
* flex sensor servo mapping issues
* Arduino robotic hand debugging

---

# 👤 **Author**

Documented by:
**Mohammed Jahangir**
GitHub: **[@pingjahangir](https://github.com/pingjahangir)**
Trainee Engineer – Guidsoft Technologies Pvt. Ltd.


Just tell me which step you want next.

