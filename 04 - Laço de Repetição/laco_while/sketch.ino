// Declara a variável global (int) "pinoBotao" e atribui valor "2"
int pinoBotao = 2;
// Declara a variável global (String) "texto"
String texto = "Laço de repetição while()#";
 
void setup() {
 // Configura a porta serial - taxa de comunicação "9600"
 Serial.begin(9600);
 // Define a porta "pinoBotao (2)" como entrada de dado
 pinMode (pinoBotao , INPUT);
}
 
void loop() {
 
 // Verifica se o botão foi pressionado
 if(digitalRead (pinoBotao) == HIGH) {
   // Declara a variável local (int) "cont" e atribui valor "0"
   int pos = 0;
   // Percorre a String "texto"
   while(texto.charAt(pos) != '#') {
     // Exibe a letra que está na posição "pos" - variável "texto"
     Serial.print(texto.charAt(pos));
     // Incrementa em "1" a variável "pos"
     pos++;
     // Aguarda (para a execução) 400 milisegundos
     delay(400);
   }
 }
 
 // Aguarda (para a execução) 100 milisegundos
 delay(100);
}

