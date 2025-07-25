# Controle de Servo Motor com Potenciômetro via Arduino/ESP32

## 1. Visão Geral do Projeto

Este projeto demonstra o controle preciso e em tempo real de um servo motor SG90 utilizando a leitura analógica de um potenciômetro. O movimento manual do potenciômetro é diretamente traduzido para uma posição angular do servo.

---

## 2. Componentes Utilizados

### Hardware
*   Microcontrolador: Arduino Uno R3
*   Atuador: Servo Motor SG90
*   Interface: Potenciômetro de 10kΩ
*   Protoboard e Jumpers

### Software
*   Linguagem: C++
*   Bibliotecas: `<Servo.h>`
*   IDE: Arduino IDE / PlatformIO

---

## 3. Lógica de Funcionamento

O sistema opera com base na leitura contínua de um pino analógico conectado ao potenciômetro, que funciona como um divisor de tensão.

1.  O `analogRead()` converte a tensão variável do pino (0-5V) em um valor inteiro (0-1023).
2.  Este valor bruto é então mapeado para a faixa de operação do servo motor (0-360 graus) utilizando a função `map()`.
3.  O valor mapeado é enviado para o servo através de um sinal PWM (Pulse Width Modulation) gerado pela biblioteca `<Servo.h>`, atualizando sua posição angular.
4.  O processo é repetido continuamente no `loop()` principal, garantindo uma resposta em tempo real à interação do usuário com o potenciômetro.

---
