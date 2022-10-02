
// déclarer un array des pins
int leds[] = {2, 3, 4, 5, 6};

// la capacité de l'array
int sizeOfArray = sizeof(leds)/sizeof(leds[0]);

void setup() {
  // forloop pour set le pinMode de chaqu'un des pins de l'array
  for (int i = leds[0]; i < sizeOfArray + leds[0]; i++)
  {
    pinMode(i, OUTPUT);
  }

  // lancer le Serial Debugger Console
  Serial.begin(9600);

  Serial.println(sizeOfArray);
}

void loop() {
  // fonction qui va faire allumer les lumières une par une
  LightUp();
 
  Serial.println(sizeOfArray);
}

void LightUp()
{
  for (int i = leds[0]; i < sizeOfArray + leds[0]; i++)
  {
    digitalWrite(i, HIGH);
    delay(300);
    digitalWrite(i, LOW);
  }

}
