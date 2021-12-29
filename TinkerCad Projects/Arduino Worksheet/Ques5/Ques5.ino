int dis_in_inches = 0;
int dis_in_cm = 0;

long readDis(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  
  //sends sound signals for 10microsec.
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);//pulseIn reads distance in microsec.
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  dis_in_cm = 0.01723 * readDis(7, 7);//dis in microsec to dis in cm
  
  dis_in_inches = (dis_in_cm / 2.54);
  
  Serial.print(dis_in_inches);
  Serial.print("in, ");
  Serial.print(dis_in_cm);
  Serial.println("cm");
  delay(1000);// Wait for 1sec.
}
