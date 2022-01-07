int us = 6;
int mR1 = 3;
int mR2 = 2;
int mL1 = 5;
int mL2 = 4;

long readDist(int trans_echopin)
{
  pinMode(trans_echopin,OUTPUT);//initial no signals transmitting
  digitalWrite(trans_echopin, LOW);
  delayMicroseconds(2);

  digitalWrite(trans_echopin, HIGH);//transmits signal for 10microsecs.
  delayMicroseconds(10);
  digitalWrite(trans_echopin, LOW);

  pinMode(trans_echopin, INPUT);
  return pulseIn(trans_echopin, HIGH) * 0.01723;
}

void setup() 
{
  pinMode(mR1, OUTPUT); 
  pinMode(mR2, OUTPUT); 
  pinMode(mL1, OUTPUT); 
  pinMode(mL2, OUTPUT); 
}

void loop() 
{
  int dist = readDist(us);
  int speed= dist * 0.76119;
  if (dist > 10) {
    //move forward with diff speed 
    analogWrite(mR1,speed); 
    analogWrite(mR2,0);
    analogWrite(mL1,speed);
    analogWrite(mL2,0);
  } else {
    //stop
    analogWrite(mR1,0);
    analogWrite(mR2,0);
    analogWrite(mL1,0);
    analogWrite(mL2,0);
    exit(0);
  }
  delay(100);
}
