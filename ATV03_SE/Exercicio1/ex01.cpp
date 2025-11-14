void setup() {
    Serial.begin(9600);
}

void loop() {
    int leitura = analogRead(A0);
    float media = (leitura + leitura + leitura) / 3.0;
    float raiz = sqrt(media);

    Serial.print("Media");
    Serial.println(round(media));
    Serial.print("Raiz quadrada da media:");
    Serial.println(ceil(raiz));

    delay(2000);
}