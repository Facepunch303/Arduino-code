// le code prédéfini pour le défi

int delRouge1 = 2;
int delVerte1 = 3;
int delRouge2 = 4;
int delVerte2 = 5;
int pause = 2000;


void setup()
{
  pinMode(delRouge1, OUTPUT);
  pinMode(delVerte1, OUTPUT);
  pinMode(delRouge2, OUTPUT);
  pinMode(delVerte2, OUTPUT);
}

void loop()
{
  digitalWrite(delRouge1, HIGH);
  digitalWrite(delRouge2, LOW);
  digitalWrite(delVerte1, LOW);
  digitalWrite(delVerte2, HIGH);
  
  delay (pause);
  
  digitalWrite(delRouge1, LOW);
  digitalWrite(delRouge2, HIGH);
  digitalWrite(delVerte1, HIGH);
  digitalWrite(delVerte2, LOW);
  
  delay (pause);  
}
