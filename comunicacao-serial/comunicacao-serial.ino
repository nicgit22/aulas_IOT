//definir nome do pino
const int LED1 = 19;


//definir variavel para receber o comando
char comando;
void setup(){
  pinMode(LED1, OUTPUT);
  Serial.begin(115200);//velocidade do esp é maior
}

void loop(){
  if(Serial.available()){
    comando = Serial.read();
    if (comando == 'a'){
      digitalWrite(LED1,HIGH);
      Serial.println("o led está ligado!");
    }
    if(comando == 'b'){
      digitalWrite(LED1,LOW);
      Serial.println("o led está desligado!");

    }
    
  }
}