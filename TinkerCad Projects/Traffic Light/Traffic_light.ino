//(RGB LED) TRAFFIC LIGHT SETUP

int d9=9;
int d10=10;
int d11=11;

void setup()
{
  pinMode(d9,OUTPUT); //GREEN
  pinMode(d10,OUTPUT); //BLUE
  pinMode(d11,OUTPUT); //RED
}

void loop()
{
  digitalWrite(d9,LOW);
  digitalWrite(d11,HIGH);
  delay(2000);
  digitalWrite(d9,HIGH);
  delay(2000);
  digitalWrite(d11,LOW);
  delay(2000);
}
