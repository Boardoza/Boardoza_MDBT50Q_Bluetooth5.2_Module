#include "Arduino.h"
#include "SoftwareSerial.h"

#define UART_PD 19
#define RESET 18
SoftwareSerial mySerial(21, 22);
void setup() {

  Serial.begin(9600);
  while(!Serial){

  }
  mySerial.begin(9600);
  pinMode(UART_PD, OUTPUT);
  pinMode(RESET, OUTPUT);
  digitalWrite(UART_PD, LOW);
  delay(20);

  digitalWrite(RESET, LOW);
  delayMicroseconds(20);
  digitalWrite(RESET, HIGH);
  delay(250);
  mySerial.println("AT+CENTRAL");
  delay(250);
  mySerial.println("AT+RESET");
  delay(250);
  mySerial.println("AT+SCANNEWSTART");
  delay(250);
  mySerial.println("AT++SCANNEWMACC06B4C744F5C");
  delay(250);
}

void loop() {

  while(Serial.available() > 0){ 
  mySerial.write(Serial.read()); 
  delay(1);  
  }
  while(mySerial.available() > 0){ 
  Serial.write(mySerial.read()); 
  delay(1);  
  }
}