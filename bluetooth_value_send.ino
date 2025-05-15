#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

int counter = 1;

void setup() {
  Serial.begin(115200);       
  SerialBT.begin("ESP32"); 
  Serial.println("Bluetooth başlatıldı. Cihaza bağlanabilirsiniz.");
}

void loop() {
  SerialBT.print("counter=");
  SerialBT.println(counter);  
  Serial.println(counter);    
  counter++;
  delay(500); 
}
