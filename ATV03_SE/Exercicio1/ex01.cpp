void setup() {
  Serial.begin(9600);
  Serial.println("Inicio da leitura");
}

void loop() {
  //ler 3 valores reais com intervalo de 1 segundo
  Serial.println("Realizando 3 leituras...");
  int leitura = analogRead(A0);
  delay(1000);
  
  int leitura2 = analogRead(A0);
  delay(1000);
  
  int leitura3 = analogRead(A0);
  delay(1000);
  
  //Calculo da media
  float media = (leitura + leitura2 + leitura3) / 3.0;
  
  //raiz quadrada da media
  float raiz = sqrt(media);

  //valor ao quadrado da media
  float quadrado = pow(media, 2);
  
  //resultados
  Serial.println("\n--- resultado das contas ---");
  
  //leituras
  Serial.print("Leituras: ");
  Serial.print(leitura);Serial.print(", ");
  Serial.print(leitura2);Serial.print(", ");
  Serial.print(leitura3);
  
  
  Serial.print("Media: ");
  Serial.print(media);
  Serial.print("Media Arredondada");
  Serial.println(round(media));
  Serial.print("Raiz quadrada da media: ");
  Serial.println(ceil(raiz));

  delay(2000);
}
