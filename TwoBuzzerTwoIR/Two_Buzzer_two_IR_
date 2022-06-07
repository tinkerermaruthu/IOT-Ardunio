int ir_1=10;
int ir_2=8;
int buz_1=7;
int buz_2=9;
void setup() {
  // put your setup code here, to run once:
pinMode(ir_1,INPUT);
pinMode(ir_2,INPUT);
pinMode(buz_1,OUTPUT);
pinMode(buz_2,OUTPUT);
digitalWrite(buz_1,LOW);
}


void loop()
{
  // put your main code here, to run repeatedly:
if(digitalRead(ir_1)==HIGH)
{
  digitalWrite(buz_1,HIGH);
}
else if (digitalRead(ir_2)==HIGH)
{
  digitalWrite(buz_2,HIGH);
}
else
{
  digitalWrite(buz_1,LOW);
  digitalWrite(buz_2,LOW);
}
}
