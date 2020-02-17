#include <Servo.h>
char num = 0;
int value = 0;
int speedval=0;

Servo myservo;



void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  Serial.begin(9600);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  if (Serial.available() >= 0) {
//    // read the incoming byte:
//    value = Serial.read();
//
//  }
//  else
//  {
//    value = 0;
//    }

//  value = Serial.read();
//  delay(15);
//  myservo.write(value);
// Serial.println(value);

//Light bulb
//if(Serial.available())
//  { char num = Serial.read();
//    if (num == '0') {digitalWrite(11, LOW);  }
//    if (num == '1') {digitalWrite(11, HIGH);  }
//    Serial.println(num);
//  }

//Recieve "Hello" from arduino1
//if(Serial.available())
//{char var3 = Serial.read();
//  Serial.println(var3);}

//Reading buff
//uint8_t buf[4];
//if(Serial.available())
//{Serial.readBytes(buf,3);
//Serial.println(buf[1]);

//Using low and high 
uint8_t buf[2];
if(Serial.available() > 0){
 
Serial.readBytes(buf,3);
 unsigned int converted_t = buf[0]*256 + buf[1];

 
Serial.println(buf[0]);
Serial.println(buf[1]);
Serial.println(converted_t);
}
////https://stackoverflow.com/questions/15249791/combining-two-uint8-t-as-uint16-t


}
