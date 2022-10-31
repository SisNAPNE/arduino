// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
 
void setup() {
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 // Define a porta "pinoBotao (2)" como entrada de dado
 pinMode (pinoBotao , INPUT);
}
 
void loop() {
 
 // Verifica se o botão foi pressionado
 if(digitalRead (pinoBotao) == HIGH) {
   // Declara a variável local (int) "cont"
   int cont;
   // Efetua a contagem
   for(cont=0; cont<=10; cont++) {
     // Exibe a varável "cont"
     Serial.print(cont);
     Serial.print(" ");
     // Aguarda (para a execução) 200 milisegundos
     delay(200);
   }
   Serial.println("");
 }
 
 // Aguarda (para a execução) 100 milisegundos
 delay(100);
}

