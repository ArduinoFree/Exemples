boolean on = false; //Variavel que determina se o LED deverá ser acesso ou apagado

//Função setup, é executada toda ver que o arduino é iniciado
void setup() {
  pinMode(13, OUTPUT); //dizemos ao arduino que o pino digital 13 será de saida
  pinMode(8, INPUT); //dizemos ao arduino que o pino digital 8 será de entrada
  Serial.begin(9600); //iniciamos a comunicação serial com bound rate de 9600
}

//Função loop, enquando o arduino estiver ligado esse função é executada infinitamente
void loop() {
  //Verificamos se o botão foi pressionado
  if(digitalRead(8) == HIGH){
    digitalWrite(13, HIGH);
    //como o loop é muito rápido, damos um delay de 100 milissegundos antes de acender ou apagar o led
    //delay(100);
    
    //toda vez que pressionamos o botão alternamos o valor da variavel on
    //on = !on;
    
    //se a variavel for Verdadeira
    /*if(on){
      //ligo o pino gital 13
      digitalWrite(13, HIGH);
      //escrevo no monitor serial "Ligado"
      Serial.println("Ligado");
    //caso a variavel on seja falsa
    }else{
      //desligamos o pino 13
      digitalWrite(13, LOW);
      //escrevemos no monitor serial "Desligado"
      Serial.println("Desligado");
    }*/
  }
  digitalWrite(13, LOW);
}
