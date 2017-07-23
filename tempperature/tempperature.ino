// подключаем две библиотеки для работы с LCD и математических вычислений
//#include <LiquidCrystal.h>
#include <math.h>


//LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2); // инициализируем LCD

//int backLight = 13;

void setup(void) {
  //pinMode(backLight, OUTPUT);
  
  //digitalWrite(backLight, HIGH); 
  //lcd.begin(16, 2);             
  //lcd.clear();                  
  //lcd.setCursor(0,0);   
Serial.begin(9600);
}

 // создаем метод для перевода показаний сенсора в градусы Цельсия 
double Getterm(int RawADC) {
  double temp;
  temp = log(((10240000/RawADC) - 10000));
  temp = 1 / (0.001129148 + (0.000234125 * temp) + (0.0000000876741 * temp * temp * temp));
  temp = temp - 273.15;
  return temp;
}

// создаем метод для вывода на экран показаний сенсора
void printTemp(void) { 
  double temp = Getterm(analogRead(4));  // считываем показания с сенсора
//  lcd.clear();
//  lcd.setCursor(0,0);
//  lcd.print("Temperature is:");
//  lcd.setCursor(0,1);
//  lcd.print(temp);
//  lcd.print(" C");
  Serial.print("Temperature is:");
  Serial.println(temp);
  }


void loop(void) {
  printTemp(); // вызываем метод, созданный ранее
  delay(1000);
}
