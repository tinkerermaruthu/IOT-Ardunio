#include<ESP8266WiFi.h>
#include<ThingSpeak.h>
char ssid[]="RACK";
char password[]="Termux007";
long myChannelNumber=1695343;
char myWriteApiKey[]="WDF81WLOC3320W2B";
int i=0;
int j=1;
int ir=5;
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

    if (digitalRead(ir)==HIGH){
      
  
int status=ThingSpeak.writeField(myChannelNumber,1,i,myWriteApiKey);
Serial.println(i);
    }
    else{
      int status=ThingSpeak.writeField(myChannelNumber,1,j,myWriteApiKey);
      Serial.println(j);
    }
//if(status=TS_OK_SUCCESS){
 //Serial.println("Write success");
 //Serial.print("Write Value:");
 //Serial.println(i);

//}
}
  
