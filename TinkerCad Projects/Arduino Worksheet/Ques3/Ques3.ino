int led = A0;
int pot = A5;
float inputVal = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  inputVal = analogRead(pot);
  analogWrite(led, inputVal/5);
  delay(100);
}
