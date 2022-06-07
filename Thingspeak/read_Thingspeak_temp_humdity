#include <ThingSpeak.h>
#include <ESP8266WiFi.h>

char  ssid[]    ="IoT";
char password[] = "password";

WiFiClient client;

long myChannelNumber = 1707844;
const char myReadAPIKey [] = "2LM52LCTWPLB1MG5";
int read_val = 1;

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid,password);
  Serial.print("Attempting to connect to SSID");
  Serial.print(ssid);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(5000);
  }
  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.println("IP address");
  Serial.println(WiFi.localIP());
  ThingSpeak.begin(client);
}
void loop() {
  // put your main code here, to run repeatedly:
int temp = ThingSpeak.readIntField(myChannelNumber,1,myReadAPIKey);
int humidity = ThingSpeak.readIntField(myChannelNumber,2,myReadAPIKey);

int status = ThingSpeak.getLastReadStatus();

 if (status == TS_OK_SUCCESS) {
    Serial.print("temprature:");
    Serial.println(temp);

    Serial.print("humidity");
    Serial.println(humidity);
 }
 else{
  Serial.println("error in Reading values from thingspeak");
  
  }
  delay(20000);
}
