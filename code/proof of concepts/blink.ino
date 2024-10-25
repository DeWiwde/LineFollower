int blink = 13;
//Dit is een stukje code voor de PoC.
//Hierin wordt nagegaan of het compilen en uploaden werkt.

void setup() 
{
    pinMode (blink, OUTPUT);
}

void loop() 
{
 digitalWrite (blink, HIGH);
 Serial.println("Lamp gaat aan!");
 delay(2000);

 digitalWrite (blink, LOW);
 Serial.println ("Lamp gaat uit!");
 delay(2000);
}
