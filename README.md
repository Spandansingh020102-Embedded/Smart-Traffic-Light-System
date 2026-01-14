# 🚦 Smart Traffic Light System (STM32 + FreeRTOS)

This project implements a **smart, congestion-adaptive traffic light controller** using an STM32 microcontroller. The system uses **ultrasonic sensors**, **TM1637 displays**, **FreeRTOS tasks**, and a **4×4 keypad with PIN authentication** to control two-lane traffic intelligently.

---

## 📌 Features

### ✔️ 1. Congestion Detection (Ultrasonic Sensors)
- Each lane uses **two HCSR04 sensors**.
- If both sensors detect < 15 cm distance, the lane is marked *congested*.
- Dynamic timing:
  - Congested lane → longer green
  - Uncongested lane → shorter green
  - Both congested → equal moderate timing
  - No congestion → default cycle

### ✔️ 2. FreeRTOS-Based Task Management
- `TrafficLightTask` manages:
  - Green/Yellow/Red phases
  - TM1637 countdown displays
  - Timings based on congestion
- `password_task`:
  - Handles keypad PIN authentication
- `testing`:
  - Continuously reads sensors for debugging

### ✔️ 3. Keypad PIN Authentication
- 4-digit password (default: **1234**)
- Press `*` to start entering the PIN
- Press `#` to confirm
- Correct PIN → Access granted & system begins operation  
- Incorrect PIN → Access denied

### ✔️ 4. Display System
- Two 4-digit **TM1637** displays show lane countdown timers.
- LCD displays prompts and messages such as “Welcome”, “Enter PIN”, etc.

---

## 🧩 Hardware Components

- STM32 Microcontroller  
- 4×4 Keypad  
- TM1637 7-segment Displays (2 units)  
- HCSR04 Ultrasonic Sensors (4 units)  
- LED Traffic Signal Modules (Red, Yellow, Green)  
- LCD Display (16×2 or similar)  
- Driver circuits, resistors, wiring, etc.

---

## 📁 Main Functional Files

### **`main.c` includes:**
| Function | Description |
|----------|-------------|
| `TrafficLightTask()` | Controls lighting sequence & timer display |
| `password_task()` | Keypad-based authentication |
| `testing()` | Debug function for sensor readings |
| `setup_sensors()` | Initializes all ultrasonic sensors |
| `traffic_congetion()` | Determines congestion in each lane |
| `scan_keypad()` | Keypad scanning routine |

---

## ⏱ Traffic Light Logic

### Timing rules:
- **Lane 1 congested:**  
  - Lane 1 green: 20s  
  - Lane 2 green: 8s  

- **Lane 2 congested:**  
  - Lane 2 green: 20s  
  - Lane 1 green: 8s  

- **Both congested:**  
  - Both get 15s green  

- **No congestion:**  
  - Both lanes: 12s green  

**Yellow duration:** 3 seconds.

---

## 🔐 PIN System Flow

1. System boots → “Welcome” message  
2. User presses `*`  
3. Enter 4-digit PIN (displayed as ****)  
4. Press `#` to confirm  
5.  
   - ✔ Correct PIN → Access granted → Both lanes red for 10 seconds → Traffic system starts  
   - ✖ Incorrect PIN → “Access Denied”  

---

## 🔧 How to Build and Flash

1. Open in **STM32CubeIDE**  
2. Build the project  
3. Connect ST-Link  
4. Flash firmware to the microcontroller  
5. System runs automatically

---

## 📈 Possible Future Enhancements
- Mobile or web dashboard  
- Emergency vehicle priority mode  
- Real-time traffic analytics  
- IoT-based remote monitoring  

---
