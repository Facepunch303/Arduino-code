// variables des pins
int photoResistant = 29;
int led = 28;

// variables des valeurs
int light;
int mapLight;

void setup() {

  // set le pinMode pour chacune des pins
  pinMode(photoResistant, INPUT);
  pinMode(led, OUTPUT);

  // lancer le Serial Debugger Console
  Serial.begin(9600);
}

void loop() {
  // lire la valeur du photorésisteur et la stocker dans "light"
  light = analogRead(photoResistant);

  // mapper la valeur dans un range de bytes compatible pour être écrit vers la led
  mapLight = map (light, 1017, 0, 0, 516);

  // **pour la lumière de rue, il faut juste inverser le 4e et le 5e paramètre pour avoir une fonction inversée**

  analogWrite(led, mapLight);
  Serial.println(mapLight);
}
