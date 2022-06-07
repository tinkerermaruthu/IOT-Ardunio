#include <ESP8266WiFi.h>
#include <PubSubClient.h>

char ssid[]     = "Karthikeyan";
char password[] = "karthi1234";

char mqtt_broker[] = "broker.mqtt-dashboard.com";
char topic[]       = "esp8266/Vinith";

char mqtt_username[] = "vinith";
char mqtt_password[] = "vinith";

int mqtt_port = 1883;
int ir_pin=6;

WiFiClient espClient;
PubSubClient client(espClient);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) 
  {
      delay(500);
      Serial.println("Connecting to WiFi..");
  }
  
  Serial.println("Connected to the WiFi...");




  client.setServer(mqtt_broker, mqtt_port);
  client.setCallback(callback);
  
  while (!client.connected()) {
  
      if (client.connect("esp8266-client-1234", mqtt_username, mqtt_password)) {
          Serial.println("MQTT Broker connected");
      } else {
          Serial.print("Failed to Connect...Retrying...");
          delay(2000);
      }
  }
  
  client.subscribe(topic);
}

void callback(char*topic, byte*payload, unsigned int length)
{
  Serial.print("Message arrived in topic: ");
  Serial.println(topic);
  Serial.print("Message:");
  for (int i = 0; i < length; i++) {
      Serial.print((char) payload[i]);
  }
  Serial.println();
  Serial.println("-----------------------");
}

void loop() {
  client.loop();
  client.publish(topic,"hello");
  delay(100);
}
