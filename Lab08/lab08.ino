// Definição dos pinos
int tempPin = A0; // Pino conectado ao TMP36
int buzzerPin = 9; // Pino conectado ao buzzer

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída
  digitalWrite(buzzerPin, LOW); // Garante que o buzzer comece desligado
}

void loop() {
  // Ler o valor do TMP36
  int tempValue = analogRead(tempPin);
  
  // Converter a leitura do sensor para uma temperatura em Celsius
  float voltage = tempValue * 5.0 / 1024.0;
  float temperatureC = (voltage - 0.5) * 100;
  
  // Exibir a temperatura no monitor serial
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" C");
  
  // Verificar se a temperatura é maior que 90°C para ativar o buzzer
  if (temperatureC > 90) {
    digitalWrite(buzzerPin, HIGH); // Ativa o buzzer
  } 
  else if (temperatureC > 30) {
    // Verificar se a temperatura é maior que 30°C
    Serial.println("Alerta: Temperatura acima de 30°C!");
    digitalWrite(buzzerPin, LOW); // Mantém o buzzer desligado
  } 
  else {
    digitalWrite(buzzerPin, LOW); // Desativa o buzzer
  }
  
  delay(1000); // Atraso de 1 segundo entre as leituras
}
