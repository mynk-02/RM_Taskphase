int l = 11;
int dis_in_inch = 0;

long readDis(int triggerpin, int echopin)
{
  pinMode(triggerpin,OUTPUT);//initial no signals transmitting
  digitalWrite(triggerpin, LOW);
  delayMicroseconds(2);

  digitalWrite(triggerpin, HIGH);//transmits signal for 10microsecs.
  delayMicroseconds(10);
  digitalWrite(triggerpin, LOW);

  pinMode(echopin, INPUT);
  return pulseIn(echopin, HIGH);//Recieves signal
}

void setup() {
  pinMode(l, OUTPUT);
}

void loop() {
  dis_in_inch = 0.01723 * readDis(4,2) / 2.54;

  if (dis_in_inch > 0 and dis_in_inch < 15) {
    digitalWrite(l,LOW);//led off
  }
  else if (dis_in_inch >= 15  and dis_in_inch < 50) {
    digitalWrite(l,HIGH);//led on
  }
  else {
    digitalWrite(l,LOW);//led off
  }
}
