#include<ESP8266WiFi.h>
#include<ThingSpeak.h>
char ssid[]="RACK";
char password[]="Termux007";
long myChannelNumber=1695343;
char myWriteApiKey[]="WDF81WLOC3320W2B";
int i=2;
WiFiClient client;
void setup() {
 Serial.begin(115200);
 WiFi.begin(ssid,password);
 Serial.println("Attempt to connect WiFi....");
 Serial.println(ssid);
 while(WiFi.status()!=WL_CONNECTED){
 Serial.println(".");
 delay(1000);
}
 Serial.println("WiFi connected.");
 Serial.println("IP Address: ");
 Serial.println(WiFi.localIP());
 ThingSpeak.begin(client);
}
void loop() {
  for (i; i > 0; i+=2) {
    
  
int status=ThingSpeak.writeField(myChannelNumber,1,i,myWriteApiKey);
if(status=TS_OK_SUCCESS){
 Serial.println("Write success");
 Serial.print("Write Value:");
 Serial.println(i);
delay(15000);
}
  
else{
  Serial.println("NOT Writting");
}
  }
  
}
