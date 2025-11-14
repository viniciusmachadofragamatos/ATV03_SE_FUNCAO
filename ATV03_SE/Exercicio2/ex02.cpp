int led = 9;          // Pino PWM
float angulo = 0;     // Ângulo inicial
float velocidade = 0.05;  // Controla a velocidade da respiração (quanto menor, mais lento)

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Gera valor de 0 a 255
  float valor = (sin(angulo) + 1) * 127.5;  
  analogWrite(led, (int)valor);

  // Atualiza o ângulo
  angulo += velocidade;
  if (angulo > TWO_PI) angulo -= TWO_PI;  // Mantém o ângulo dentro de 0 a 2π

  delay(20);  // Ajuste fino da velocidade
}
