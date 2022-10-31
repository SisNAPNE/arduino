void setup() {
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 // Define a porta "A0" como entrada de dado
 pinMode(A0, INPUT);
}
 
void loop() {
 // Declara a Variável local (int) apertou
 int apertou;
 // Efetua a leitura analógica da porta "A0" - Armazena em apertou
 apertou = analogRead(A0);
 // Exibe o valor armazenado na variável "apertou" no Monitor Serial
 Serial.println(apertou);
 // Aguarda (para a execução) por um segundo
 delay(1000);
}