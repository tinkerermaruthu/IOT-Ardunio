
#include <DHT.h>
#include <DHT_U.h>

int IRSensor = 8; // connect ir sensor to arduino pin 2
int Buzzer = 7; // connect Led to arduino pin 13

void setup()
{
pinMode (IRSensor, INPUT); // sensor pin INPUT
pinMode (Buzzer, OUTPUT); // Led pin OUTPUT
Serial.begin(9600);
}

void loop()
{
if(digitalRead(IRSensor)==HIGH)

tone(Buzzer,500);



else{
noTone(Buzzer);
}

}
 
 
