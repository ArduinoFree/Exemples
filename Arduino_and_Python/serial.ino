String readStr = "";

void setup() {
Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
pinMode(13, OUTPUT);
digitalWrite(13, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    readStr = Serial.readString(); // read the incoming byte:
    if(readStr == "1"){
      digitalWrite(13, HIGH);
      Serial.println("1");
    }else{
      digitalWrite(13, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      delay(200);
      digitalWrite(13, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      Serial.println("2");
    }
  }
}
