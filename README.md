# STM32 GPIO Binary Monitor

## 📌 Project Overview
This project demonstrates how to display an 8-bit binary value using GPIO pins on the **STM32F411RE (Nucleo Board)**.
<img width="900" height="1600" alt="image" src="https://github.com/user-attachments/assets/59710615-3c09-477d-acf6-09950b5605fb" />

The 8-bit value is split into:
- **4AL (Lower Nibble)** → Displayed on 4 LEDs  
- **4AH (Higher Nibble)** → Displayed on 4 LEDs  

This helps in understanding:
- GPIO Output configuration
- Bitwise operations
- Nibble separation (High & Low)
- Bare-metal register programming (CMSIS)

---

## 🛠 Hardware Used
- STM32F411RE Nucleo Board
- 8 LEDs
- 8 Current Limiting Resistors (220Ω recommended)
- Breadboard & Jumper Wires

---

## ⚙ Software Used
- STM32CubeIDE / Keil (mention what you used)
- CMSIS / Bare-metal Register Programming
- Git for version control

---

## 🔢 Working Principle

1. A byte (8-bit value) is generated.
2. Lower 4 bits (4AL) are sent to one set of LEDs.
3. Higher 4 bits (4AH) are sent to another set of LEDs.
4. LEDs display the binary representation of the value.

Example:

If value = `0xAB`  
Binary = `1010 1011`

- High nibble (4AH) → `1010`
- Low nibble (4AL) → `1011`

---



---

## 🚀 How to Run

1. Open project in STM32CubeIDE / Keil
2. Build the project
3. Connect STM32F411RE board
4. Flash the program
5. Observe LED binary output

---

## 📖 Learning Outcomes

- Understanding STM32 GPIO registers
- Bitwise shift operations (`>>`, `<<`)
- Masking using `&`
- Splitting 8-bit data into nibbles
- Embedded project structuring

---

## 🔧 Future Improvements

- Add UART input to change values dynamically
- Add push-button to increment value
- Add timer-based automatic counting
- Convert to 7-segment display output

---

## 👨‍💻 Author

Huday Kiran  
Embedded Systems Engineer (Training – Vector Institute)

---

⭐ If you found this useful, consider giving this repository a star!



