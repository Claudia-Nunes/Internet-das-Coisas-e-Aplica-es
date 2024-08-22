int verde = 11;
int amarelo = 6;
int vermelho = 10;
int botao = 7;  // Pino do botão
bool botaoPressionado = false;

void setup() {
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  pinMode(botao, INPUT_PULLUP);  // Configura o botão com resistor de pull-up
}

void loop() {
  if (digitalRead(botao) == LOW) {
    botaoPressionado = true;
  }

  // Ciclo do semáforo
  digitalWrite(verde, HIGH);
  delay(botaoPressionado ?  5000 : 10000);  // Verde: 10 segundos se o botão foi pressionado, 5 segundos se não

  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(2000);  // Amarelo: 2 segundos

  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  delay(5000);  // Vermelho: 5 segundos

  digitalWrite(vermelho, LOW);

  // Reseta o estado do botão após o ciclo completo
  botaoPressionado = false;
}
