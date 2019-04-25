#include <Servo.h>

Servo myservo;

int pos=0;

void setup()

{

    myservo.attach(10);
    Serial.begin(9600);
}

 

void loop()

{

  char data=Serial.read();

   if(data=='6')
   {

     Serial.println("STORE");
     for (pos = 15; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
   }

   else if(data=='5')
   {

    Serial.println("DIG");
    for (pos = 120; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
   }
    }
