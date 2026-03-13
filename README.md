# Digital-Voltmeter-using-Arduino
A simple Digital Voltmeter built using Arduino and an I2C LCD display.
This project reads an analog voltage using a voltage divider, converts it through the Arduino ADC, and displays the measured voltage on a 16x2 I2C LCD. And it can safely measure voltage up to 55 Volts.

### Features:
● Measures DC voltage using Arduino analog input

● Displays ADC value and calculated voltage

● Uses 100-sample averaging for stable readings

● Simple voltage divider circuit

● Output displayed on a 16x2 I2C LCD

### Components:
● Arduino (Uno / Nano / compatible board)

● 16x2 LCD with I2C module

● Resistors:

   → 10kΩ (R1)

   → 1kΩ (R2)

● Breadboard

● Jumper wires

● DC voltage source

### How it works:
1. The input voltage is connected through a voltage divider using two resistors (R1 and R2).

2. The divided voltage is read by the Arduino analog pin A1.

3. Arduino converts the analog signal using its 10-bit ADC (0–1023).

4. The program averages 100 samples to reduce noise.

5. The actual voltage is calculated using the voltage divider formula:

   → Vin = Vout × ((R1 + R2) / R2)

6. The ADC value and calculated voltage are displayed on the LCD

