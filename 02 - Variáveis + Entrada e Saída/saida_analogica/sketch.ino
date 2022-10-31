int pinoLed = 3;
int valorSaida = 0;

void setup() {
  // Configura a porta serial - taxa de comunicação "9600"
  Serial.begin(9600);
  // Define a porta "pinoLed (3)" como saída de dado
  pinMode (pinoLed , OUTPUT);
}
void loop() {
  // Icrementa o valor de saída analógica 
  valorSaida = valorSaida + 3;
  // Efetua a escrita analógica da porta "pinoLed"
  analogWrite(pinoLed, valorSaida);
  // Aguarda (para a execução) por um segundo
  delay(1000);
}
