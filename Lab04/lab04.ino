int verde = 11;
int amarelo = 6;
int vermelho = 10;

void setup() {
  
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop() {
  // Verde aceso
  digitalWrite(verde, HIGH);
  delay(5000);  // 5 segundos

  // Verde apagado, Amarelo aceso
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(2000);  // 2 segundos

  // Amarelo apagado, Vermelho aceso
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(5000);  // 5 segundos

  // Vermelho apagado
  digitalWrite(vermelho, LOW);
}
