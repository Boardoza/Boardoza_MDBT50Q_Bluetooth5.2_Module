# Boardoza MDBT50Q Bluetooth Module

The **Boardoza MDBT50Q Bluetooth Module** is a high-performance wireless communication module based on the **Raytac MDBT50Q** series, featuring the **Nordic Semiconductor nRF52833 SoC** and supporting **Bluetooth 5.2**. This compact and power-efficient module is designed for applications requiring robust, long-range, and low-power wireless connectivity — such as IoT devices, smart home products, wearables, and industrial sensors.

It offers a UART communication interface and flexible configuration options, including selectable RC oscillators and hardware flow control. The MDBT50Q ensures reliability and ease of integration for developers working on BLE-enabled projects.

## [Click here to purchase!](https://www.ozdisan.com/p/gelistirme-kitleri-ve-aksesuarlari-617/boardoza-boardoza-mdbt50q-1202711)

|Front Side|Back Side|
|:---:|:---:|
|![Front](./assets/MDBT50Q%20Front.png)|![Back](./assets/MDBT50Q%20Back.png)|

---

## **Key Features**

- **Bluetooth 5.2 Support:** Enables high-speed, low-energy communication with extended range.  
- **Nordic nRF52833 SoC:** Built-in ARM® Cortex®-M4 CPU with FPU operating up to 64 MHz.  
- **Low Power Consumption:** Optimized for long battery life in portable or IoT devices.  
- **Flexible UART Interface:** Configurable enable/disable control and flow control options.  
- **Selectable Clock Source:** Supports external or internal 32.768 kHz RC oscillator.  
- **512 KB RAM:** Large memory for advanced BLE applications.  

---

## **Technical Specifications**

**Manufacturer:** Raytac Corporation  
**Model:** MDBT50Q  
**Core Chip:** Nordic nRF52833 SoC (ARM® Cortex®-M4F)  
**Input Voltage:** 3.3V  
**Voltage Input Type:** Standard 6-pin header (2.54mm pitch)  
**Communication Interface:** UART  
**Bluetooth Version:** 5.2 (Low Energy)  
**Flash Memory:** 512 KB  
**RAM:** 128 KB  
**Antenna:** Integrated PCB antenna  
**Operating Frequency:** 2.4 GHz ISM band  
**Operating Temperature:** -40°C ~ +85°C  
**Extended Operating Temperature:** -40°C ~ +105°C 
**Board Dimensions:** 40mm x 40mm  
**Functions:** Bluetooth Low Energy Wireless Module  

---

## **Board Pinout**

### **( J1 ) Power & UART Connector**

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | 3V3 | Positive Power Supply |
| 2 | UART_TX | UART Transmitter |
| 3 | UART_RX | UART Receiver |
| 4 | UART_CTS | CTS, Clear to Send |
| 5 | UART_RTS | RTS, Request to Send |
| 6 | GND | Ground |

### **( J2 ) Control Connector**

| Pin Number | Pin Name | Description |
|:---:|:---:|---|
| 1 | ADC | 10-bit ADC input, updated every 200ms |
| 2 | UART_PD | Active-high with internal pull-up to disable UART hardware (default: disabled) |
| 3 | FLASH_DEFAULT | Active-low (0.48s ≤ Low ≤ 1s) triggers system reset to default configuration |
| 4 | RESET | Active-low system hardware reset |
| 5 | WAKEUP | Wake-up control output from deep sleep mode |

---

## **Board Dimensions**

<img src="./assets/MDBT50Q Dimension.png" alt="MDBT50Q Bluetooth Module Dimensions" width="450"/>

---

## **Step Files**

[Boardoza MDBT50Q.step](./assets/MDBT50Q%20Step.step)

---

## **Datasheet**

[Raytac MDBT50Q Datasheet.pdf](./assets/MDBT50Q%20Datasheet.pdf)

---

## **Version History**

- V1.0.0 - Initial Release

---

## **Support**

For technical questions or assistance, please contact **<support@boardoza.com>**

---

## **License**

Shield: [![CC BY-SA 4.0][cc-by-sa-shield]][cc-by-sa]

This work is licensed under a [Creative Commons Attribution-ShareAlike 4.0 International License][cc-by-sa].

[![CC BY-SA 4.0][cc-by-sa-image]][cc-by-sa]

[cc-by-sa]: http://creativecommons.org/licenses/by-sa/4.0/  
[cc-by-sa-image]: https://licensebuttons.net/l/by-sa/4.0/88x31.png  
[cc-by-sa-shield]: https://img.shields.io/badge/License-CC%20BY--SA%204.0-lightgrey.svg
