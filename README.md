# Leitura de Sinais AT com Módulo GSM
Este repositório contém um exemplo de script em C para Arduino que utiliza um módulo GSM para ler sinais AT recebidos. O código estabelece a comunicação serial com o módulo GSM, configura o modo de texto para mensagens SMS e exibe os sinais AT recebidos no monitor serial.

# Pré-requisitos
Para utilizar este script, você precisará dos seguintes componentes:

Arduino: é necessário um Arduino para executar o script. O script foi desenvolvido e testado com um Arduino Uno.
Módulo GSM: você precisará de um módulo GSM compatível para se comunicar com o Arduino. Certifique-se de conectar corretamente os pinos RX e TX do módulo GSM aos pinos definidos no código.
Biblioteca SoftwareSerial: a biblioteca SoftwareSerial é necessária para permitir a comunicação serial com o módulo GSM. Certifique-se de tê-la instalada em sua IDE do Arduino.

# Configuração
Siga as etapas abaixo para configurar o módulo GSM e o Arduino:

Conecte o módulo GSM ao Arduino, garantindo que os pinos RX e TX estejam corretamente conectados.
Abra o arquivo gsm_signal_read.ino em sua IDE do Arduino.
Verifique se a biblioteca SoftwareSerial está instalada em sua IDE do Arduino. Se não estiver, você precisará instalá-la antes de continuar.
Selecione o tipo de placa correta e a porta serial adequada em sua IDE do Arduino.
Faça o upload do código para o Arduino.
Certifique-se de consultar a documentação do seu módulo GSM para obter informações detalhadas sobre os comandos AT suportados e como configurar corretamente o módulo para a comunicação.

# Uso
Após fazer o upload do código para o Arduino e configurar corretamente o módulo GSM, você poderá utilizar o monitor serial para interagir com o módulo GSM. O monitor serial exibirá os sinais AT recebidos do módulo GSM e você poderá enviar comandos AT para o módulo através do monitor serial.

Certifique-se de configurar corretamente a velocidade da comunicação serial no código e no monitor serial para garantir a compatibilidade.

# Notas
Este script é fornecido apenas como exemplo e pode precisar de ajustes adicionais para funcionar corretamente com o seu módulo GSM específico. Consulte a documentação do seu módulo GSM para obter informações detalhadas sobre os comandos AT suportados.
A detecção e a leitura de sinais AT do módulo GSM podem variar dependendo do fabricante e do modelo do módulo. Certifique-se de estar usando um módulo compatível e consulte a documentação fornecida pelo fabricante para obter detalhes específicos.

# Contribuição
Contribuições são bem-vindas! Se você tiver sugestões, melhorias ou correções para o script, fique à vontade para enviar um pull request.

# Licença
Este projeto está licenciado sob a MIT License.
