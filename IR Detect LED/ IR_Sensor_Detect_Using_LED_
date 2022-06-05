int IRSensor = 2; // connect ir sensor to arduino pin 2
int LED = 13; // connect Led to arduino pin 13

void setup()
{
pinMode (IRSensor, INPUT); // sensor pin INPUT
pinMode (LED, OUTPUT); // Led pin OUTPUT
Serial.begin(9600);
}

void loop()
{
if(digitalRead(IRSensor)==HIGH)
digitalWrite(LED, HIGH); 
else
{
digitalWrite(LED, LOW); // LED LOW
}

}
