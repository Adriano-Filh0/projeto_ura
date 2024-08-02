#include <LiquidCrystal.h>

// Inicialize a biblioteca com os números das portas do Arduino que estão conectadas ao LCD
LiquidCrystal lcd(2, 4, 6, 8, 10, 11);

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

void setup() {

    // Inicialize o LCD com o número de colunas e linhas
  lcd.begin(16, 2);
  
  // Crie o ícone personalizado no LCD
  lcd.createChar(0, gotaVazia);  // Atribuindo o ícone "gotaVazia" ao índice 0
  lcd.createChar(1, gotaCheia);  // Atribuindo o ícone "gotaCheia" ao índice 1

  // Exiba os ícones no LCD
  lcd.setCursor(0, 0);           // Coluna 0, Linha 0
  lcd.write(byte(0));           // Exibe o ícone "gotaVazia"

  lcd.setCursor(1, 0);           // Coluna 1, Linha 0
  lcd.write(byte(1));           // Exibe o ícone "gotaCheia"

  lcd.setCursor(0, 1);           // Coluna 0, Linha 1
  lcd.print("LCD 16x2 Test");

}

void loop() {
  // Nada a fazer aqui
}
