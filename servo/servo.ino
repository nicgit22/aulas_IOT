//Incluindo a biblioteca do ServoMotor
#include <Servo.h>

//Criar o objeto servo
Servo servo;

//Criar uma função que inicializa os pinos e demais componentes.
void setup () {
  Serial.begin(9600); //9600 bps - Bits por segundo
  servo.attach(3); //Definir o pino 3 como sendo o pino do Servo.
}

//Criar uma função que irá se repetir
void loop () {
  for (int posicao = 0; posicao <= 180; posicao ++){
    Serial.print(posicao); 
    servo.write(posicao);
    delay(150);
  }  
  for (int posicao = 180; posicao >= 0; posicao --){
    Serial.print(posicao);
    servo.write(posicao);
    delay(150);
  }
}