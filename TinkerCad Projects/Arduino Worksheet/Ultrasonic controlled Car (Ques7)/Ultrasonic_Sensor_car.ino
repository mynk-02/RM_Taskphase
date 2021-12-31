int usR = 11;
int usL = 12;
int mR1 = 2;
int mR2 = 3;
int mL1 = 4;
int mL2 = 5;

long readDist(int trans_echopin)
{
  pinMode(trans_echopin,OUTPUT);//initial no signals transmitting
  digitalWrite(trans_echopin, LOW);
  delayMicroseconds(2);

  digitalWrite(trans_echopin, HIGH);//transmits signal for 10microsecs.
  delayMicroseconds(10);
  digitalWrite(trans_echopin, LOW);

  pinMode(trans_echopin, INPUT);
  return pulseIn(trans_echopin, HIGH) * 0.01723 / 2.54;
}

void setup() {
  pinMode(mR1, OUTPUT); 
  pinMode(mR2, OUTPUT); 
  pinMode(mL1, OUTPUT); 
  pinMode(mL2, OUTPUT); 
  Serial.begin(9600); 
  pinMode(13, OUTPUT);

}

void loop() {
  int distL= readDist(usL);
  int distR= readDist(usR);
  
  if (distL > distR) { right(); }
  else if (distL < distR) { left(); }
  else if (distL == distR and distL <= 30 ) 
  {
    stop(); 
    Serial.print("Found It! \nThe object is at a distance ");
    Serial.print(distL);
    Serial.println(" inches from car.");
    digitalWrite(13, HIGH);
    delay(100);
    exit(0);
  }
  else { forward(); }
  
  
}

void forward()
{
  digitalWrite(mR1,HIGH);
  digitalWrite(mR2,LOW);
  digitalWrite(mL1,HIGH);
  digitalWrite(mL2,LOW);
}

void backward()
{
  digitalWrite(mR1,LOW);
  digitalWrite(mR2,HIGH);
  digitalWrite(mL1,LOW);
  digitalWrite(mL2,HIGH);
}

void left()
{
  digitalWrite(mR1,HIGH);
  digitalWrite(mR2,LOW);
  digitalWrite(mL1,LOW);
  digitalWrite(mL2,LOW);
}

void right()
{
  digitalWrite(mR1,LOW);
  digitalWrite(mR2,LOW);
  digitalWrite(mL1,HIGH);
  digitalWrite(mL2,LOW);
}

void stop()
{
  digitalWrite(mR1,LOW);
  digitalWrite(mR2,LOW);
  digitalWrite(mL1,LOW);
  digitalWrite(mL2,LOW);
}
