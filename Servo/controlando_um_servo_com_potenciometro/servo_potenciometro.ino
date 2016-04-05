//montagem: http://labdegaragem.com/profiles/blogs/tutorial-arduino-com-servomotor
#include <Servo.h>

Servo motor;//declaro uma variavel do tipo Servo
int potenciometro = 1; // Define o pino do Arduino que o potenciômetro está conectado
int valor = 0;
int posicaoServo = 0;

void setup(){
  Serial.begin(9600);
  motor.attach(3); 
}

void loop (){ 
  valor = analogRead(potenciometro); //Recebe o valor do potenciômetro
  //180 = 1023
  //0 = 0
  posicaoServo = (((valor/10) * 18)/102)*10;//simplifico dividindo por 10 para o arduino fazer a conta corretamente
  motor.write(posicaoServo); //movo o servo
}
