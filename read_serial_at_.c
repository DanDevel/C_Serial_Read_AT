#include <SoftwareSerial.h> // instala5r lib

// Defina os pinos RX e TX para comunicação com o módulo GSM
const int GSM_RX_PIN = 2;
const int GSM_TX_PIN = 3;

SoftwareSerial gsmSerial(GSM_RX_PIN, GSM_TX_PIN); // Cria uma instância de SoftwareSerial

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial com o monitor serial
  gsmSerial.begin(9600); // Inicializa a comunicação serial com o módulo GSM
  
  delay(1000); // Aguarda 1 segundo para garantir que o módulo GSM esteja pronto

  Serial.println("Configurando o módulo GSM...");

  delay(1000);
  
  // Envie comandos AT para o módulo GSM
  sendATCommand("AT");
  sendATCommand("AT+CMGF=1"); // Configura o modo de texto para mensagens SMS
}

void loop() {
  if (gsmSerial.available()) { // Verifica se há dados disponíveis para leitura
    char receivedChar = gsmSerial.read(); // Lê o caractere recebido do módulo GSM
    Serial.print(receivedChar); // Exibe o caractere no monitor serial
  }

  if (Serial.available()) { // Verifica se há dados disponíveis para leitura do monitor serial
    char sendChar = Serial.read(); // Lê o caractere digitado no monitor serial
    gsmSerial.print(sendChar); // Envia o caractere para o módulo GSM
  }
}

// Função para enviar comandos AT para o módulo GSM
void sendATCommand(String command) {
  gsmSerial.println(command);
  delay(500);
  while (gsmSerial.available()) {
    Serial.write(gsmSerial.read());
  }
}

