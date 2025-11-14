char texto[50];
char saudacao[100];  // Aumentei o tamanho para garantir que caiba a saudação + palavra

void setup() {
  Serial.begin(9600);
  Serial.println("Digite uma palavra:");
}

void loop() {
  if (Serial.available() > 0) {
    int tamanho = Serial.readBytesUntil('\n', texto, 50);
    texto[tamanho] = '\0'; // finaliza a string

    Serial.print("Tamanho da palavra: ");
    Serial.println(strlen(texto));

    // Converte para maiúsculas
    for (int i = 0; i < strlen(texto); i++) {
      texto[i] = toupper(texto[i]);
    }

    Serial.print("Em maiusculas: ");
    Serial.println(texto);

    // Cria a saudação
    strcpy(saudacao, "Ola, ");
    strcat(saudacao, texto);
    strcat(saudacao, "!");
    
    // Garante que a saudação não ultrapasse o limite do buffer
    if (strlen(saudacao) < sizeof(saudacao)) {
      Serial.println(saudacao);
    } else {
      Serial.println("Saudacao muito longa!");
    }
  }
}
