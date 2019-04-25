 void setup()

{  

  pinMode(12,OUTPUT);

  pinMode(13,OUTPUT);

  pinMode(8,OUTPUT);

  pinMode(9,OUTPUT); 

  Serial.begin(9600);
}

void loop()
{

  char data=Serial.read();

  if(data=='2')

   {
    
    Serial.println("FORWARD");
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
   }

 else if(data=='1')
   {

    Serial.println("BACKWARD");
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
   }

  else if(data=='3')
   {

    Serial.println("RIGHT");
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
   }

  else if(data=='4')
   {

    Serial.println("LEFT");
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
   }

  else if(data=='0')
   {

    Serial.println("STOP");
    digitalWrite(12,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
   }
}
