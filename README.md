# Sending Numerical Data via Bluetooth with ESP32

In this project, **ESP32 Devkit** module is used to send **numerical data via Bluetooth** to an Android device.


## 🚀 Project Objective

Sequentially increasing numerical data is sent from the ESP32 to an Android device over Bluetooth. The data can be monitored in real time using a Bluetooth Terminal application on the Android phone.

## 🛠 Required Materials

- ESP32 Devkit
- USB cable
- Arduino IDE
- Android phone
- Bluetooth Terminal application (e.g., *Serial Bluetooth Terminal*)

## 🔧 Setup and Usage

1. **Arduino IDE’yi açın**, aşağıdaki kodu yapıştırın:
   ```cpp
   #include "BluetoothSerial.h"

   BluetoothSerial SerialBT;
   int counter = 1;

   void setup() {
     Serial.begin(115200);       
     SerialBT.begin("ESP32"); // Bluetooth device name
     Serial.println("Bluetooth started. You can connect now.");
   }

   void loop() {
     SerialBT.print("counter=");
     SerialBT.println(counter);
     Serial.println(counter);
     counter++;
     delay(500);
   }
