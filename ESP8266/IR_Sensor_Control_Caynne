#include <CayenneMQTTESP8266.h>
const char* ssid     = "vivo 1951";         // The SSID (name) of the Wi-Fi network you want to connect to
const char* password = "14102001";     // The password of the Wi-Fi network

char mqtt_username[] = "74b90020-c522-11e6-bd19-2daeb3a13a46";

char mqtt_password[] = "497c4e2688416a2b887b4cea229e7c5fd91c3730"; 
char client_id[] = "d83d0be0-b49c-11ec-9f5b-45181495093e";
int irpin=5; 
void setup() {

  Cayenne.begin(mqtt_username, mqtt_password, client_id, ssid, password);
  delay(20000);
  pinMode(irpin,INPUT);
  Serial.println(a);
}

void loop() {
  Cayenne.loop();
}

CAYENNE_OUT(0)
{
 if(digitalRead(irpin)==HIGH) {
  Cayenne.virtualWrite(0,1,"digital_sensor","d"); 
 }
 else{
  Cayenne.virtualWrite(0,0,"digital_sensor""d");
 }
 }
