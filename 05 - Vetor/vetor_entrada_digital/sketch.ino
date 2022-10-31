// Declara o vetor "pinos" que contém o número dos pinos de entrada
int pinos[4] = {2, 3, 4, 5};
// Declara o vetor "status" que armazena o status dos pinos de entrada
boolean status[4] = {false, false, false, false};

void setup() {
  // Configura a porta serial - taxa de comunicação "9600"
  Serial.begin(9600);
  // Define as portas (2, 3, 4, 5) como entrada de dados
  for(int a=0; a<4; a++) {
    pinMode (pinos[a] , INPUT);
  }
}
void loop() {
  // Declara uma variável "flag" usada para sinalizar mudança no status
  int flag = 0;
  // Verifica se os botões foram pressionado
  for(int a=0; a<4; a++) {
    if(digitalRead(pinos[a]) == HIGH) {
      status[a] = !status[a];
      flag = 1;
    }
  }

  if(flag == 1) {
    // Exibe o vetor de status
    for(int a=0; a<4; a++) {
      Serial.print(status[a]);
      Serial.print(" ");
    }
    Serial.println("");
    Serial.println("----------------");
  }
  
  // Aguarda (para a execução) 200 milisegundos
  delay(200);
}

