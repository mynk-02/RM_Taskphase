// Ques2 - LED on when SwitchButton pressed


int l=11;
int b=4;
int SButton = 0; 

void setup()
{
  pinMode(b, INPUT);
  pinMode(l, OUTPUT);
}

void loop()
{
  SButton= digitalRead(b);
  
  if (SButton == HIGH) // Button pressed
  {
    digitalWrite(l,HIGH); //LED On
  }
  else 
  {
    digitalWrite(l,LOW); //LED off
  }
}
