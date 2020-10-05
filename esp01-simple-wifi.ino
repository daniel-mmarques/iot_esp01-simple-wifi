#define BLYNK_PRINT Serial

#include "ESP8266_Lib.h"
#include "BlynkSimpleShieldEsp8266.h"

char auth[] = "TvcOPEZQublOF9DqFUQ5EbWUGLiP18VT";

char ssid[] = "VIVOFIBRA-9B6D";
char pass[] = "EAEA8F9B6D";

#include "SoftwareSerial.h"
SoftwareSerial EspSerial(10,11); // RX, TX


#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void setup(){
  
  Serial.begin(9600);
  
  delay(10);
  
  EspSerial.begin(ESP8266_BAUD);
  delay(10);
  
  Blynk.begin(auth, wifi, ssid, pass);
}

void loop(){
  
  Blynk.run();
}
