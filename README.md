# Smart Garden - URA 

<div style="display: inline_block">

#### Projeto: Smart Garden do URA - Um Robô por Aluno
## 👷 Autores

* **Yan Xavier** - [@yanxxavier](https://github.com/yanxxavier)
* **Guilherme Andrade** - [@HandradGit1](https://github.com/HandradGit1)
* **Adriano Filho** - [@Adriano-Filho](https://github.com/Adriano-Filh0)


[![Licence](https://img.shields.io/github/license/Ileriayo/markdown-badges?style=for-the-badge)](./LICENSE)
![Badge em Desenvolvimento](http://img.shields.io/static/v1?label=STATUS&message=EM%20DESENVOLVIMENTO&color=GREEN&style=for-the-badge)

<img src="https://github.com/wwwmisla/ura-project/blob/main/img/ura_logo.png" width="400px" align="right"/>

## Índice

 - [Descrição do Projeto](#-descrição-do-projeto)
 - [Componentes Utilizados](#-componentes-utilizados)
 - [Tecnologias Utilizadas](#%EF%B8%8F-tecnologias-utilizadas)
 - [Como Fazer](#-como-fazer)
   - [Circuito](#%EF%B8%8F-explica%C3%A7%C3%A3o-circuito---hardware)
   - [Código](#-explica%C3%A7%C3%A3o-c%C3%B3digo---software)
 - [Documentação do Projeto](#%EF%B8%8F-documenta%C3%A7%C3%A3o-do-projeto)
   - [Artigo](#-artigo)
   - [Slide](#-slide-para-apresenta%C3%A7%C3%A3o)
 - [Referências](#-referências)
</div>

## 📄 Descrição do Projeto !!FAZER!!
![Descrição da imagem](https://ibb.co/QQr7ytx)




## 🧰 Componentes Utilizados

| Quantidade | Componente | 
| :---:       |     :---:       |  
| 1     | Arduíno Uno R3      | 
| 1     | Display LCD 16x2       |
| 1     | Servo motor - 180°    |
| 3     | Resistores de 1k Ohms (ou valor adequado o display) |
| 1     | Sensor de umidade do solo digital |
| 1     | Higrômetro de umidade do solo|
| 1     | Protoboard |
| 25    | Jumpers |

## 🛠️ Tecnologias Utilizadas

<div align="center">

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23000000.svg?style=for-the-badge&logo=github&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Tinkercad](https://img.shields.io/badge/Tinkercad-%5000000.svg?style=for-the-badge&logo=Tinkercad&logoColor=white)

</div>

## 📝 Como Fazer

### 🖥️ Explicação Circuito - Hardware  !!FAZER!!

<div align="center">
 
<img src="https://github.com/wwwmisla/ura-project/blob/main/img/Copy%20of%20Batma%C2%B2m%20-%20URA.png" align="center">

</div>

<div align="center">
<br>
<img src="https://github.com/wwwmisla/ura-project/blob/main/img/WhatsApp%20Image%202023-11-29%20at%204.21.47%20PM.jpeg" width="400" align="center">

</div>

#### 🌱 Circuito Virtual & 💧 Circuito Prático !!FAZER!!

<p>Breve Explicação sobre a Arquitetura do Circuito:</p>

1. Entradas Digitais - Arduíno:
   - Componentes de Entrada:
     - 4 Botões.
     
   - Componentes de Saída:
     - 4 Leds e 1 Buzzer.
        
2. Portas Digitais Utilizadas - Arduíno:
   - 2, 3, 4 e 5;
     - Jumpers Vermelho, Amarelo, Branco e Verde -> Botões Dó, Ré, Mi e Fa.
   - 6, 7, 8 e 9;
     - Jumpers Vermelho, Amarelo, Branco e Verde -> Ânodo dos Leds VM, AM, BR e VD.
   - 10;
     - Jumper Marrom -> Positivo do Pino Buzzer.
   - GND;
     - Área de Alimentação da Protoboard (-).
       
 3. Protoboard:
    - Resistores - Conectados a área de alimentação da protoboard (-):
      - Resistores Conectados aos Cátodos dos Leds.
    - Buzzer:
      - Resistor no Positivo do Buzzer;
      - Jumper com negativo vindo da área de alimentação da protoboard.
    - Botões:
       - Todos os 4 botões recebem jumpers (com cores respectivas as notas) que saem da área de alimentação da protoboard (-).
    - A trilha superior de alimentação (-) passa um jumper (preto) para a trilha inferior de alimentação (-).   

<p>Inserimos os componentes na Protoboard como mostra a imagem com o circuito virtual. Sempre tendo atenção e cuidado com os cabos de ligação antes de iniciar o Arduíno e lembrando que ele tem que estar inteiramente desligado enquanto realizamos a montagem do nosso circuito!</p>
    - Ter atenção de que os Leds possuem polaridade;
    - Ter atenção de que o Buzzer possui polaridade.

### 🔨 Software
* ![Arduino IDE](https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white) [-](https://www.arduino.cc/en/software)
* OU
* ![Visual Studio Code](https://img.shields.io/badge/Visual_Studio_Code-0078D4?style=for-the-badge&logo=visual%20studio%20code&logoColor=white) [-](https://marketplace.visualstudio.com/items?itemName=vsciot-vscode.vscode-arduino)


### 📚 Bibliotecas

* [Servo Motor](https://www.arduino.cc/reference/en/libraries/servo/)
```
#include <Servo.h>
```

* [LiquidCrystal](https://www.arduino.cc/reference/en/libraries/liquidcrystal/)
```
#include <LiquidCrystal.h>
```

### 👩‍💻 Explicação Código - Software !!FAZER!!
<p>Aqui está um resumo explicativo do código.</p>

1. Definição de Pinos:
   - Começamos definindo valores constantes para as notas musicais dos sons e das melodias.

2. Definição de Variáveis:
   - Variáveis são definidas para manipular:
      - As melodias;
      - Os pinos para o Buzzer, os Leds e os Botões;
      - O status dos Botões;
      - Temporizadores;
      - Indicador do Modo Demonstração;
      - O status do Jogo;
      - A sequência de cores que o jogador deve responder;
      - As etapas e fases do Jogo;
      - As respostas do Jogador (serve para guardar o valor);
      - Variável para guardar o Botão pressionado pelo jogador;
      - Indicador quando perder o jogo;
      - Tempo para resposta do jogador;
    - Constante são definidas para manipular:
      - O número máximo de combinações ou fases de jogo;
      - O tempo de cada cor (millisegundos). 

3. Função de Configuração (setup):
   - Inicializa a comunicação serial a 9600 bps;
   - Define os pinos dos 4 Leds e do Buzzer como saída;
   - Define os pinos dos Botões como entrada;
   - Registro de tempo e inicializa randomização;
   - Inicializando o random através de uma leitura da porta analógica.
   
5. Função "loop":
   - Há dois laços de repetição (while).
     - O while do Modo Demonstração: chama as funções "modoDemo" e "leituraBotoes" quando a variável "statusJogo" é diferente de 1 e utiliza a função Serial.print para imprimir um "." na porta serial;
     - O while do Modo Jogo: chama a função "modoJogo" quando  a variável "statusJogo" é igual a 1.

## 🗂️ Documentação do Projeto !!FAZER!!

#### 📰 Artigo: 
[Link do Artigo]()

#### 📊 Slide para Apresentação:
[Link do Slide - Canva]()

## 🧾 Referências

* [Como Usar o Sensor de Umidade do Solo no Arduino?](https://www.youtube.com/watch?v=QPH9aXS2bio)
* [Desenhar com Display LCD no ARDUINO](https://www.youtube.com/watch?v=dUz2JygrCVg)
* [LCD 16X2 - DATASHEET](https://circuitdigest.com/article/16x2-lcd-display-module-pinout-datasheet)
* [DISPLAY LCD 16X2 O que é? Como programar no Arduino?](https://www.youtube.com/watch?v=wjwv6whF9_U)
  

