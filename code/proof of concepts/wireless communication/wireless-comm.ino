#include <SoftwareSerial.h>

const byte rxPin = 2;  // Arduino ontvangt hier van HC-06 (TX van module)
const byte txPin = 3;  // Arduino stuurt hier naar HC-06 (RX van module)
SoftwareSerial BTSerial(rxPin, txPin);

char DataFromRobot;
char DataFromPhone;

void setup()
{
  BTSerial.begin(38400);  // HC-06 standaard baudrate
  Serial.begin(9600);    // USB ↔ PC
}

void loop()
{
  if (BTSerial.available() > 0) 
{
  DataFromPhone = BTSerial.read();

  // Extra debug: toon wat er ontvangen werd
  Serial.print("Ontvangen van GSM: ");
  Serial.println(DataFromPhone); 

  // Optioneel: ook direct doorsturen naar PC monitor
  Serial.write(DataFromPhone);
}

  if (Serial.available() > 0 ) 
  {
    DataFromRobot = Serial.read();
    BTSerial.write(DataFromRobot); // naar telefoon
  }
}
