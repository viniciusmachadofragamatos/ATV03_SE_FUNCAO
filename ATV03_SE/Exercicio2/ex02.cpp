int led =9;
float angulo = 0;
void setup(){
    pinMode(led, OUTPUT);
}
void loop(){
    float valor = sin(angulo) * 127.5 + 127.5;
    analogWrite(led, valor);
    angulo += 0.1;
    if (angulo > 2 * PI) angulo = 0;
    delay(30);
}