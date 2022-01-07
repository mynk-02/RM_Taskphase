int mR1 = 3;
int mR2 = 2;
int mL1 = 4;
int mL2 = 5;

void setup()
{
  pinMode(mR1, OUTPUT);
  pinMode(mR2, OUTPUT);
  pinMode(mL1, OUTPUT);
  pinMode(mL2, OUTPUT);
}

void loop()
{  
  //increases to max speed
  for(int rpm=0; rpm<=255; rpm++)
  {
    analogWrite(mR1, rpm);
    analogWrite(mR2, 0);
    analogWrite(mL1, 0);
    analogWrite(mL2, rpm);
    delay(10);
  }
  delay(200);
  
  //decreases to min speed
  for(int rpm=255; rpm>=0; rpm--)
  {
    analogWrite(mR1, rpm);
    analogWrite(mR2, 0);
    analogWrite(mL1, 0);
    analogWrite(mL2, rpm);
    delay(10);
  }
  delay(200);
}
