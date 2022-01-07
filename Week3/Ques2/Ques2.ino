int m1 = 2;
int m2 = 3;

void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
}

void loop()
{
  //+ve RPM
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  delay(2000);
  //-ve RPM
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  delay(2000);
}
