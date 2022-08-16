const int moteurGaucheA = 5;
const int moteurGaucheR = 6;
const int moteurDroitA = 11;
const int moteurDroitR = 10;

char valSerie;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(moteurGaucheA, OUTPUT);
  pinMode(moteurGaucheR, OUTPUT);
  pinMode(moteurDroitA, OUTPUT);
  pinMode(moteurDroitR, OUTPUT);
}

void avancer()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
}

void gauche()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
}
void droite()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, LOW);
}
void reculer()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, HIGH);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, HIGH);
}
void arreter()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, LOW);
}
void pivoterGauche()
{
  digitalWrite(moteurGaucheA, LOW);
  digitalWrite(moteurGaucheR, HIGH);
  digitalWrite(moteurDroitA, HIGH);
  digitalWrite(moteurDroitR, LOW);
}
void pivoterDroite()
{
  digitalWrite(moteurGaucheA, HIGH);
  digitalWrite(moteurGaucheR, LOW);
  digitalWrite(moteurDroitA, LOW);
  digitalWrite(moteurDroitR, HIGH);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  valSerie = Serial.read();

  if(valSerie == 'z')
  avancer();
  else if(valSerie == 'q')
  gauche();
  else if(valSerie == 's')
  reculer();
  else if(valSerie == 'd')
  droite();
  else if(valSerie == 'x')
  arreter();
  else if(valSerie == 'a')
  pivoterGauche();
  else if(valSerie == 'e')
  pivoterDroite();
}
