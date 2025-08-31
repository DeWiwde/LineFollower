// Pinnen volgens jouw indeling
const int IN6 = 6;   // BIN10 //links voorwaarts
const int IN7 = 7;   // BIN8 //links achter
const int IN10 = 10;   // AIN10 //rechts voorwaarts
const int IN8 = 8;  // AIN8 //rechts achter
const int nSLEEP = 5; // VERBIND DEZE MET DRV8833 nSLEEP

void setup() {
  Serial.begin(9600);
  pinMode(IN8, OUTPUT); //LA
  pinMode(IN10, OUTPUT); // LV
  pinMode(IN7, OUTPUT); //RV
  pinMode(IN6, OUTPUT); //RA
  pinMode(nSLEEP, OUTPUT);

  digitalWrite(nSLEEP, HIGH); // driver wakker maken
}

void loop() {
  digitalWrite(IN8, HIGH); 
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(3000);

  // stop (coast)
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);

  digitalWrite(IN8, LOW);
  digitalWrite(IN10, HIGH);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(3000);


  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);
   digitalWrite(IN8, LOW); //RECHTSVOOR
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, HIGH); //LINKSACHTER
  digitalWrite(IN6, LOW);
  delay(3000);


  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);

  
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, HIGH);
  delay(3000);

  
  digitalWrite(IN8, LOW);
  digitalWrite(IN10, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN6, LOW);
  delay(2000);
  
}
