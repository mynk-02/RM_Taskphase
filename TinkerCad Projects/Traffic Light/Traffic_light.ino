//(RGB LED) TRAFFIC LIGHT SETUP

int d9=9;
int d10=10;
int d11=11;

void setup()
{
  pinMode(9,OUTPUT); //GREEN
  pinMode(10,OUTPUT); //BLUE
  pinMode(11,OUTPUT); //RED
}

void loop()
{
  digitalWrite(9,LOW);
  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  delay(2000);
}
