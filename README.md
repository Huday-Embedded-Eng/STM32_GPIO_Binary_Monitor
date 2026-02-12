# STM32 GPIO Binary Monitor

## 📌 Project Overview
This project demonstrates how to display an 8-bit binary value using GPIO pins on the **STM32F411RE (Nucleo Board)**.

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

## 📂 Project Structure


