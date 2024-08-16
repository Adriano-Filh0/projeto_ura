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

## 📄 Descrição do Projeto !!REVISAR!!
O projeto tem como obetivo ser uma forma simpática e intuitiva de representar a importância de aguar plantas e também entregar feedback da condição do solo.
Fazemos isso se utilizando da plataforma Arduino e alguns sensores e atuadores, senda esta a parte eletrônica que é agrupada em uma caixa simples de papelão detalhada para simular um "terreno" e com uma Flor de plástico montada no centro.
<div>
![Descrição da imagem](https://ibb.co/QQr7ytx)
</div>



## 🧰 Componentes Utilizados

| Quantidade | Componente | 
| :---:       |     :---:       |  
| 1     | Arduíno Uno R3      | 
| 1     | Display LCD 16x2       |
| 1     | Cabo USB tipo A/B       |
| 1     | Servo motor - 180°    |
| 1     | Resistencia de 3.3K Ohms (ou valor adequado o display) |
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

### 🖥️ Explicação Circuito - Hardware  !!REVISAR!!
<p>Breve Explicação sobre a Arquitetura do Circuito:</p>

1. Entradas Digitais - Arduíno:
   - Componentes de Entrada:
     - Sensor de Umidade.
     
   - Componentes de Saída:
     - Display LCD 16x2.
     
        
2. Portas Digitais Utilizadas - Arduíno:
   - Display LCD 16X2 -> Feedback Visual;
     - 2, 3, 4, 5, 6 e 7.
   - Servo motor -> Movimento da planta;
     - 8.
   - Sensor de umidade -> Nivel de umidade do solo.;
     - A0.
   - GND;
     - Área de Alimentação da Protoboard (-).
   - VCC;
     - Área de Alimentação da Protoboard (+).
      
       
 3. Protoboard:
    - Servo Motor
      - Conectados a área de alimentação da protoboard (- , +);
    - Sensor de umidade:
      - Conectados a área de alimentação da protoboard (- , +);
    - Display LCD:
       - Conectados a área de alimentação da protoboard (- , +):
       - Conectado a resistencia (3.3k);
         
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


1. Definição das variáveis:
   - Varíáveis relacionadas ao servo;
   - Variáveis relacionadas ao display LCD 16X2;
   - Variáveis relacionadas ao sensor de umidade;
     

2. Função de Configuração (setup):
   - Inicializa a comunicação serial a 9600 bps;
   - Inicializa os pinos do servo;
   - Chama a função do lcd para desenhar as gotas;
   - Registra o sensor de umidade como entrada de dados;
   - Registro de tempo e inicializa randomização;
   - Inicializando o random através de uma leitura da porta analógica;
   
3. Função "loop":
   - Atualiza valorSensor com os valores analógicos vindos do sensor de umidade(sensorUmidade);
   - Uilizamos a função mapManual para filtrar os valores do sensor e alocalos na variável novoValorSensor e em seguidas printamos a leitura;
   - Calculamos a posição angular do servo via condição e loop(if e while), onde a posição do servo é atualizada lentamente junto a um delay;
   - Em "lcd.setCursor(0, 0);" setamos o "cursor" que desenha os pixels das gotas cheias e vazias, logo após definimos os intervalos de 30 para as gotas e o texto;
   - No For é feito o loop que define o nível de gotas na tela e em seguida o texto que ira aparecer através das condições;

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
  

