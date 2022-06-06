#include<ESP8266WiFi.h>
#include<ThingSpeak.h>
char ssid[]="IoT";
char password[]="password";
long myChannelNumber=43857;
char myWriteApiKey[]="";
WiFiClient client;
void setup() 
{
  Serial.begin(9600);
  WiFi.begin(ssid,password);
  while(WiFi.status()!=WL_CONNECTED)
  {
    Serial.println("Attempt to connect...");
    delay(1000);
  }
   Serial.println("WiFi connected.");
   ThingSpeak.begin(client); 
}
void loop() 
{
 if(Serial.available()>0)
 {
  String str=Serial.readStringUntil('\n');
  int temp=str.toInt();
  Serial.println("Temperature: ");
  Serial.println(temp);
  int status=ThingSpeak.writeField(myChannelNumber,1,temp,myWriteApiKey);
  if(status=TS_OK_SUCCESS)
  {
    Serial.println("temperature write success..");
  }
  else
  {
    Serial.println("Error......");
  }
 }
delay(1000);
}
