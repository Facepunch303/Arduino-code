// valeurs des pins

int potentPin = A0;
int potentValue;
int tempPin = A1;
int tempValue;

// inclure les libraires nécessaire pour le code
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#include "DHT.h"

// définir le capteur de température et le display
DHT dht(tempPin, DHT11);
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

// définir le servo moteur
Servo meServ;

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  // lcd.setCursor(3,0);
  lcd.print("Hello, bryan");

  // pinMode
  pinMode(potentPin,INPUT);
  // lancer le capteur de température
  dht.begin();
}


void loop()
{
  // lire et stocker les valeurs avec la fonction readTemperature() de la librairie DHT
  tempValue = dht.readTemperature();

  // lire et stocker les valeurs du potentiomètre
  potentValue = analogRead(potentPin);
  
  // effacer et reécrire la valeur de température
  lcd.clear();
  lcd.print(tempValue);
  meServ.write(potentValue);
}
