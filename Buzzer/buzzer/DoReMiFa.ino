
int pin = 3;

void setup() {
  pinMode(pin,OUTPUT); //Pino do buzzer
}

void loop() {
  delay(2000);
  //tone(Pino Digital, Frequencia, Duração)
  tone(pin,262,200); //DO
  delay(200);
  tone(pin,294,300); //RE
  delay(200);
  tone(pin,330,300); //MI
  delay(200);
  tone(pin,349,300); //FA
  delay(200);
  tone(pin,392,200); //SOL
  delay(200);
  tone(pin,440,200); //LA
  delay(200);
  tone(pin,494,200); //SI
}
