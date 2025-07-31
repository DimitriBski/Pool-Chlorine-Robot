# Pool Testing Robot

This robot drives around the edge of a pool and checks the chlorine level using a color sensor and test strips. It has two arms: one that lowers the sensor and test strip into the water, and another that adds chlorine if needed. An ESP32-CAM takes a picture of the test strip for documentation. It's powered by an Arduino and runs on tank drive.

## Why I Built This

I built this project to automate the annoying process of checking pool chlorine levels. I wanted something that could detect low chlorine and fix the problem on its own. Plus, it gave me a chance to work with CAD, sensors, Arduino, and robotic arms — all stuff I like.

<div class="tile-grid">
  <div>
    <p><strong>Color Sensor:</strong></p>
    <img src="https://github.com/user-attachments/assets/b9bc8634-96bf-492c-b628-e8070292c362" alt="Color Sensor" width="210" height="225" />
  </div>
  <div>
    <p><strong>Powerbank:</strong></p>
    <img src="https://github.com/user-attachments/assets/39c30844-2763-44e3-8bb4-c78354da0f98" alt="Powerbank" width="648" height="367" />
  </div>
  <div>
    <p><strong>Arduino Uno:</strong></p>
    <img src="https://github.com/user-attachments/assets/c793dab2-5114-4232-ac13-c51da138bc94" alt="Arduino Uno" width="699" height="433" />
  </div>
  <div>
    <p><strong>Voltage Regulator:</strong></p>
    <img src="https://github.com/user-attachments/assets/46c1df82-247f-49ef-b3ab-9ef1fbca6d6f" alt="Voltage Regulator" width="553" height="375" />
  </div>
  <div>
    <p><strong>DC 12V Motor:</strong></p>
    <img src="https://github.com/user-attachments/assets/1017ccce-33b5-48ac-aaf5-84c578aa1542" alt="DC 12V Motor" width="309" height="245" />
  </div>
  <div>
    <p><strong>Wheel:</strong></p>
    <img src="https://github.com/user-attachments/assets/41f731d6-a5b5-42ce-af44-ac4506970ce0" alt="Wheel" width="357" height="352" />
  </div>
</div>

### Full CAD Model Photo:
<img width="410" height="307" alt="Screenshot 2025-07-30 212948" src="https://github.com/user-attachments/assets/a015a29a-d7e8-4069-8a50-05d63b61e67f" />
---

## BOM (Bill of Materials)

| Item | Description | Quantity | Link |
|------|-------------|----------|------|
| Arduino Uno | Microcontroller | 1 | [Link](https://store.arduino.cc/products/arduino-uno-rev3) |
| ESP32-CAM | Camera module | 1 | [Link](https://www.amazon.com/dp/B08D3W5HRM) |
| Color Sensor | TCS34725 or similar | 1 | [Link](https://www.adafruit.com/product/1334) |
| 9g Servos | For both arms | 2 | [Link](https://www.amazon.com/dp/B07K9WZX9J) |
| 2WD Tank Kit | With motors and wheels | 1 | [Link](https://www.amazon.com/dp/B00P7S2B6S) |
| 20000mAh Power Bank | Power source | 1 | [Link](https://www.anker.com/products/a1271) |
| Jumper Wires | Male/Female | — | [Link](https://www.amazon.com/dp/B01EV70C78) |
| Test Strips | For chlorine testing | — | [Link](https://www.amazon.com/dp/B086X9TXPZ) |
