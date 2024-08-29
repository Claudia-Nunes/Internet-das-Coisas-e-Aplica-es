// Definição dos pinos
int pirPin = 2; // Pino conectado ao sensor PIR
int ledPin = 13; // Pino conectado ao LED

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  pinMode(pirPin, INPUT); // Configura o pino do PIR como entrada
  pinMode(ledPin, OUTPUT); // Configura o pino do LED como saída
  digitalWrite(ledPin, LOW); // Garante que o LED comece desligado
}

void loop() {
  // Ler o estado do sensor PIR
  int pirState = digitalRead(pirPin);
  
  // Verificar se o sensor PIR detectou movimento
  if (pirState == HIGH) {
    Serial.println("Movimento detectado!");
    digitalWrite(ledPin, HIGH); // Acende o LED
    delay(500); // Mantém o LED aceso por 500ms
    digitalWrite(ledPin, LOW);  // Apaga o LED
    delay(500); // Atraso para o próximo ciclo de leitura
  }
}
