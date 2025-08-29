# Gas Emission Monitoring System

A simple Arduino project simulated in Tinkercad.  
A potentiometer is used to emulate gas concentration levels, and the system gives real-time alerts using LEDs and a buzzer.

---

## Components
- Arduino UNO  
- Potentiometer (gas sensor emulator)  
- Red LED + 220Ω resistor  
- Green LED + 220Ω resistor  
- Buzzer  
- Breadboard & jumper wires  

---

## Circuit
![Circuit](https://github.com/lokeshgoud-30/Gas_Emission_monotoring/blob/main/circuit_diagram.png)

---

## Output
- **Safe Environment** → Green LED ON  
  ![Safe Alert](https://github.com/lokeshgoud-30/Gas_Emission_monotoring/blob/main/serial_output_safe_alert.png)

- **High Gas Level** → Red LED + Buzzer ON  
  ![High Alert](https://github.com/lokeshgoud-30/Gas_Emission_monotoring/blob/main/serial_output_high_alert.png)

---

## Working
1. Potentiometer varies voltage (0–5V) → Arduino reads as gas level (0–1023).  
2. If value < threshold → Green LED ON (safe).  
3. If value > threshold → Red LED + Buzzer ON (alert).  

---

## Applications
- Industrial gas leak detection  
- Environmental safety monitoring  
- IoT-based alert systems
