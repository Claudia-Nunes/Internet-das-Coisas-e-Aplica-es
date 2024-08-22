int led = 9;          // Pino onde o LED está conectado
int pot = A0;         // Pino onde o potenciômetro está conectado

void setup() {
  pinMode(led, OUTPUT);  // Configura o pino do LED como saída
  pinMode(pot, INPUT);   // Configura o pino do potenciômetro como entrada
}

void loop() {
  int valorPot = analogRead(pot);           // Lê o valor analógico do potenciômetro (0 a 1023)
  int brilho = map(valorPot, 0, 1023, 0, 255);  // Mapeia o valor para o intervalo 0-255
  
  analogWrite(led, brilho);  // Envia o valor mapeado para o LED, controlando a luminosidade
  
  delay(10);  // Pequeno atraso para estabilidade
}
