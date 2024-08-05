#include <Servo.h>
#include <LiquidCrystal.h>

const int textoMax = 50;


byte gotaVazia[8]={
  B00000,
  B00100,
  B01010,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000,
};

byte gotaCheia[8]={
  B00000,
  B00100,
  B01110,
  B11111,
  B11111,
  B11111,
  B01110,
  B00000,
};

LiquidCrystal lcd(2, 4, 6, 8, 10, 11);
Servo servoPlanta;
int sensorUmidade = A0;
int valorSensor;
int novoValorSensor;
int digito_display = 0;
char texto[textoMax];

void setup() {
  // Inicialize o LCD com o número de colunas e linhas
  lcd.begin(16, 2);

  // Crie o ícone personalizado no LCD
  lcd.createChar(0, gotaVazia);
  lcd.createChar(1, gotaCheia);
  
  // Limpa o display
  lcd.clear();
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorUmidade, INPUT);
  servoPlanta.attach(7);
  servoPlanta.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
valorSensor = analogRead(sensorUmidade);
novoValorSensor = map(valorSensor,430,1023, 120, 180);
Serial.println(novoValorSensor);
servoPlanta.write(novoValorSensor);
//delay(500);

  // Exiba os ícones no LCD
  lcd.clear();
  lcd.setCursor(0, 0);

  if (novoValorSensor > 135){
    digito_display = 4;
    strcpy(texto, "preciso de agua");
  } else if(novoValorSensor > 160){
    digito_display = 8;
    strcpy(texto, "estou ficando sem agua");
  } else if(novoValorSensor > 180){
    digito_display = 12;
    strcpy(texto, "estou com agua");
  } else {
    digito_display = 16;
    strcpy(texto, "estou com agua");
  }
  for(int i=0; i<16; i++){

    if(i<digito_display){
    lcd.write(byte(1));
    } else {
      lcd.write(byte(0)); 
    }
  }

  lcd.setCursor(0, 1);
  lcd.print(texto);
  delay(500);
}
