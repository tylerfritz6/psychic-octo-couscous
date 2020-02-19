void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

////https://stackoverflow.com/questions/15249791/combining-two-uint8-t-as-uint16-t
void loop() {
  uint8_t buf[2];
  if(Serial.available() > 0){
      Serial.readBytes(buf,3);
      unsigned int converted_t = buf[0]*256 + buf[1];
      Serial.println(buf[0]);
      Serial.println(buf[1]);
      Serial.println(converted_t);
    }
}
