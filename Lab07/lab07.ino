// Definição dos pinos
int ldrPin = A0; // Pino conectado ao LDR
int ledPin = 13; // Pino conectado ao LED

// Valor limite para acender o LED (ajuste conforme necessário)
int threshold = 100;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); // Para monitorar os valores do LDR
}

void loop() {
  // Ler o valor do LDR
  int ldrValue = analogRead(ldrPin);
  
  // Mostrar o valor do LDR no Serial Monitor
  Serial.println(ldrValue);
  
  // Verificar se o valor do LDR está abaixo do limite
  if (ldrValue > threshold) {
    // Acender o LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Apagar o LED
    digitalWrite(ledPin, LOW);
  }
  
  delay(100); // Atraso de 100ms entre as leituras
}
