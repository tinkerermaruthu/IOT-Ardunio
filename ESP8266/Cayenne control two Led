#include <ESP8266WiFi.h>
#include <CayenneMQTTESP8266.h>
const char* ssid     = "MRX";         // The SSID (name) of the Wi-Fi network you want to connect to
const char* password = "Termux007";     // The password of the Wi-Fi network

char mqtt_username[] = "74b90020-c522-11e6-bd19-2daeb3a13a46";

char mqtt_password[] = "497c4e2688416a2b887b4cea229e7c5fd91c3730";
char client_id[] = "8307ca30-d9d5-11ec-8da3-474359af83d7";
int led_pin1=5;

int led_pin2=4;
//int led_pin2=5;

void setup() 
{
  
  
  Cayenne.begin(mqtt_username, mqtt_password, client_id, ssid, password);
  pinMode(led_pin1, OUTPUT);
 
  Serial.begin(9600);
  Serial.println(WiFi.localIP());
  
}
void loop() {
            Cayenne.loop();
            Serial.println(WiFi.localIP());
            
}

CAYENNE_IN(0)
{
  digitalWrite(led_pin1, getValue.asInt());  // to get the value from the website  
}
CAYENNE_IN(1)
{
  digitalWrite(led_pin2, getValue.asInt());  // to get the value from the website  
}
