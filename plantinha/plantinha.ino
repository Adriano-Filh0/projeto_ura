#include <Servo.h>
#include <LiquidCrystal.h>

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



LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
Servo servoPlanta;
int sensorUmidade = A0;
int valorSensor;
int novoValorSensor; 
int digito_display = 0;
char texto[16];

void setup() {
  // Inicialize o LCD com o número de colunas e linhas
  lcd.begin(16, 2);

  // Crie o ícone personalizado no LCD
  lcd.createChar(0, gotaVazia);
  lcd.createChar(1, gotaCheia);
  
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorUmidade, INPUT);
  servoPlanta.attach(8);
  servoPlanta.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorSensor = analogRead(sensorUmidade);
  novoValorSensor = map(valorSensor, 400, 1023, 120, 180);
  Serial.println(novoValorSensor);
  servoPlanta.write(novoValorSensor);
  // Calcula a nova posição do servo
  

  
  lcd.setCursor(0, 0);

  digito_display = -(novoValorSensor-120)/4;

  for(int i=-15; i<15; i++){

    if(i<digito_display){
    lcd.write(byte(1));
    } else {
      lcd.write(byte(0)); 
    }
  }

  lcd.setCursor(0, 1);
  if (digito_display < -11){
    lcd.print("preciso de agua");
    //servoPlanta.write(120);
    delay(1000);
  } else if(digito_display < -3){
    lcd.print("estou com agua");
    //servoPlanta.write(140);
    delay(1000);
  } else {
    lcd.print("agua demais !!!");
    //ervoPlanta.write(180);
    delay(1000);
  }

  lcd.print(texto);
  delay(500);
}