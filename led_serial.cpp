#include <Arduino.h>

int LED_PIN = 13; // define o led no pino 13

void setup() {
  Serial.begin(9600); // inicia a comunicação serial na mesma frequência que a rasp
  pinMode(LED_PIN, OUTPUT); // define o led como saída, pois vai receber comandos
  digitalWrite(LED_PIN, LOW); // inicia com o led desligado
}

void loop() {
  if (Serial.available() > 0) { // se receber sinal serial
      char comando = Serial.read(); // lê o sinal serial e coloca numa variável inteira

      if (comando == '1') {
          digitalWrite(LED_PIN, HIGH); // se a variável do serial for 1, o led é ligado
      }
      else if (comando == '0') {
          digitalWrite(LED_PIN, LOW); // se a variável do serial for 0, o led é desligado
      }
  }
}
