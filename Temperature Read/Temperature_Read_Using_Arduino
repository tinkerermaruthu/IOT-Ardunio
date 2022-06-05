#include <dht11.h>
#define temp_pin 4

dht11 d;

void setup()
{
  Serial.begin(9600);
  pinMode(temp_pin,INPUT);
  
 
}

void loop()
{
  

  d.read(temp_pin);

  Serial.print("Humidity (%): ");
  Serial.println(d.humidity);  

  Serial.print("Temperature (C): ");
  Serial.println(d.temperature);

  delay(2000);

}
