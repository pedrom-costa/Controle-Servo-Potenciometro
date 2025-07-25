#include <Servo.h>

// Define o pino analógico do pontenciômetro
int potpin = A0;
// Define a variável Angulo
int Angulo = 0;
// Define a variável que carregará os valores lidos
int valor_lido;
Servo Servo;

void setup() {
  // Inicia o Monitor Serial
  Serial.begin(115200);
  Serial.println("Iniciando Serial Monitor...");
  // Atribui o Servo ao pino 6
  Servo.attach(6);
}

void loop() {
  // Atribui a "valor_lido" o valor analógico proveniente do potenciômetro
  valor_lido = analogRead(potpin);
  Serial.println(valor_lido);
  // Variável dentro do map = Valor a ser convertido. Variável fora = É aquela que recebe o valor convertido
  Angulo = map(valor_lido, 0, 1023, 0, 180);
  // "Move" o servo com base no valor convertido
  Servo.write(Angulo);
  delay(15);
}
