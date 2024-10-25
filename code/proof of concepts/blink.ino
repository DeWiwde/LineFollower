int blink = 13;
//Dit is een stukje code voor de PoC.
//Hierin wordt nagegaan of het compilen en uploaden werkt.

void setup() 
{
    pinMode (blink, OUTPUT); //Pin 13 wordt in deze code aangeduid als de pin waarop de led aangesloten is.
}

void loop() 
{
 digitalWrite (blink, HIGH);
 Serial.println("Lamp gaat aan!"); //In de seriële monitor kan nagegaan worden of de loop werkt (en de lamp al dan niet zou AAAN moeten gaan).
 delay(2000); //Delay van 2seconden!

 digitalWrite (blink, LOW);
 Serial.println ("Lamp gaat uit!"); //In de seriële monitor kan nagegaan worden of de loop werkt (en de lamp al dan niet zou UIT moeten gaan).
 delay(2000);//Idem ditto een delay van 2seconden!
}
