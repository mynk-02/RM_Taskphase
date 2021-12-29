//Servo motor rotates anticlockwise till 180deg and then clockwise after touching 180 pos
#include <Servo.h>

int pos = 0;
int ang;

Servo servo_9;

void setup()
{
  servo_9.attach(9,500,2500);
  Serial.begin(9800);

}

void loop()
{
  servo_9.write(pos);
  
  Serial.println("enter angle to rotate servo (in degree): ");
  while (Serial.available() == 0) {}
  ang = Serial.parseInt();
  pos += ang;
  
  while (pos > 180) 
  {   
    servo_9.write(180);
    delay(500);
    pos = 360 - pos ; 
  } 
    
  servo_9.write(pos);
    
  Serial.print("Servo motor turned ");
  Serial.print(ang);
  Serial.println(" degrees.\n");
  delay(100);
  
}
