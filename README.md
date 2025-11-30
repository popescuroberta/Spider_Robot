# 🕷️ Spider Robot – Assembly & Setup Guide

This repository contains the full instructions for assembling an Arduino-based spider robot with 8 servos, 3D-printed parts, and a DC-DC buck converter.  
Follow this guide carefully to ensure proper mechanical alignment and safe electrical wiring.

---

## 📦 Required Components

### Electronics
- Arduino Nano  
- Arduino Nano Expansion Shield  
- DC-DC Buck (Step-Down) Converter  
- 8 × SG90 / MG90 Servo Motors  
- Battery Pack

### Printed & Mechanical Parts
- Support Cross  
- Upper and Lower Servo Supports  
- Shoulder Elements (mirrored pairs)  
- Body Case and Top Plate  
- Claw Attachments  
- Printed Servo Support Caps

### Hardware
- M2 Nuts  
- M2 × 10 mm Screws  
- M2 × 8 mm Screws (for buck converter)  
- M3 Nuts  
- M3 × 6 mm Screws  
- M3 × 10 mm Screws  
- M3 Washers  
- Double-Sided Tape  
- Self-tapping screws (included with servos)

---

## 🛠️ Assembly Instructions

### 1. Assemble the Support Cross and Servo Shoulders
1. Insert **M2 nuts** into the grooves of the support cross.  
   - Align the nut with the screw hole.  
   - If needed, gently push the nut with a flat screwdriver.

2. Insert **M2 × 10 mm screws** through the servo support holes and tighten them into the nuts in the support cross.

3. Attach the remaining structural servo-support parts using **4 screws + 4 nuts (M2)**.

4. Assemble the **second shoulder as a mirrored version** of the first.  
   - Upper and lower supports must swap places in the mirrored part.

5. Assemble the second pair of shoulders similarly.  
   - You must end up with **two mirrored pairs**.

---

## 🔌 2. Connecting the Expansion Board & DC-DC Converter

You may solder these before or after mechanical assembly.

- Solder the buck converter **VOUT → 5V** and **GND → GND** to the expansion board.  
- Do **not** use standard male–female jumper wires (current ≈ 1A may overheat them).

### Wiring Polarity
- **Battery Pack → VIN & GND (buck input)**  
- **Expansion Board → VOUT & GND (buck output)**

After tightening terminal screws, lightly pull each wire to ensure it’s secure.

---

## 🧩 3. Installing the Printed Servo Supports

Using double-sided tape, attach each printed support to the *servo casing*:
- The cylindrical part of the support must be on the **shaft side**.
- Prepare all **8 servos** this way.

---

## 🎯 4. Servo Calibration (Zero Positioning)

All 8 servos must be set to **90°** before installation.

You can calibrate using:
- A servo tester, or  
- Calibration code on the Arduino.

### Servo wiring:
- **Red → 5V**  
- **Brown → GND**  
- **Orange → Signal**

Test any servo issues by trying a different signal pin.

Disconnect calibrated servos and set them aside.

---

## ⚙️ 5. Installing Servos Into the Shoulders

1. Insert calibrated servos into each shoulder assembly.  
2. If fitting is tight:
   - Loosen screws 1–2 mm.  
   - Retighten after the servo is fully inserted.

3. Test rotation of the cylindrical support inside the lower groove.  
   - If too stiff, rotate the joint several times to loosen it.

4. If the servo horn does not fully enter its slot:
   - Gently push it with pliers.

Use the **self-tapping screws** from the servo kit to secure horns and mounts.

---

## 🔋 6. Battery Compartment

Do **not** drill additional holes.  
Battery packs vary in shape and hole placement.

- Place the battery pack into the lower case, held by printed borders.  
- Use double-sided tape if needed.

---

## 🏗️ 7. Body Assembly & Electronics Placement

### Step 1 — Install Standoffs  
Use **M3 × 6 screws** and **M3 washers** to mount the standoffs to the body.

### Step 2 — Mount the Expansion Board  
Use:  
- **M3 × 10 screws**, **M3 nuts**, **M3 washers**  
- Mount using the two center holes (hard to access later).

### Step 3 — Mount the DC-DC Buck Converter  
Use:  
- **M2 × 8 screws**, washers, and M2 nuts

### Step 4 — Attach the Top Plate  
- **M3 × 10 screws** for holes below the expansion board  
- **M3 × 6 screws** for the other holes  
- Always place M3 washers on the plastic side.

Finally, insert the **Arduino Nano** into the expansion shield.

---

## 🕷️ 8. Final Assembly

- Insert the shoulder units into the case grooves.  
- Attach the claws to the servo shafts.  
- Secure all servo horns and claws using the included self-tapping screws.

---

## 🔗 9. Servo Port Mapping

- Shoulder servos → **Odd-numbered ports**  
- Claw servos → **Even-numbered ports**  
- Counting begins at the **4th pin**.

Orientation:
- **Front (head)** = side closer to the expansion board  
- **Tail** = side near the buck converter  
- Servos are numbered **clockwise** around the body.

---

## 🧪 10. Final Calibration (with Arduino Code)

Upload the calibration program:
- All servos return to a **zero position** at startup.  
- Check if all legs are perpendicular to the body.

If a leg is misaligned:
- Remove the servo horn  
- Reposition at 90°  
- Reattach

**Precision is important; even small errors affect walking performance.**

---

## ✔️ The Spider Robot Is Ready!

