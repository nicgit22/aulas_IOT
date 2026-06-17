//Biblioteca para trablahar com buletooth
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

//definir nome do pino
const int LED1 = 19;
const int LED2 = 18;
const int LED3 = 17;
const int LED4 = 16;
const int LED5 = 4;
const int LED6 = 15;
//definir variavel para receber o comando
char comando;
void setup(){
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
  Serial.begin(115200);//velocidade do esp é maior
  SerialBT.begin("controlador67");
}

void loop(){
  if(SerialBT.available()){
    comando = SerialBT.read();
    if (comando == 'a'){
      digitalWrite(LED1,HIGH);
      digitalWrite(LED2,HIGH);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
      digitalWrite(LED5,HIGH);
      digitalWrite(LED6,HIGH);
      SerialBT.println("o led está ligado!");
    }
    if(comando == 'b'){
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,LOW);
      digitalWrite(LED4,LOW);
      digitalWrite(LED5,LOW);
      digitalWrite(LED6,LOW);
      SerialBT.println("o led está desligado!");

    }
    
  }
}

