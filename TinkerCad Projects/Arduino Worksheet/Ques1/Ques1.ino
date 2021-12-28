// Ques1 - Blink led for 1,2,3 secs

int d=10;

void setup()
{
  pinMode(d, OUTPUT);
}

void loop()
{
  
  //blink 1 sec
  digitalWrite(d, HIGH);
  delay(1000); 
  digitalWrite(d, LOW);
  delay(1000); 
  
  //blink 2 sec
  digitalWrite(d, HIGH);
  delay(2000); 
  digitalWrite(d, LOW);
  delay(1000); 
  
  //blink 3 sec
  digitalWrite(d, HIGH);
  delay(3000); 
  digitalWrite(d, LOW);
  delay(1000); 
  
}
