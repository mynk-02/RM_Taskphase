int mR1 = 2;
int mR2 = 3;
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
  //+ve rpm
  digitalWrite(mR1, HIGH);
  digitalWrite(mR2, LOW);
  
  //-ve rpm
  digitalWrite(mL1, LOW);
  digitalWrite(mL2, HIGH);
}
