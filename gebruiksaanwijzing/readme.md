# Gebruiksaanwijzing

### opladen / vervangen batterijen
Laad de batterijen genoeg op. Ik had meerdere paren batterijen beschikbaar zodat terwijl ik aan het testen was, de andere batterijen al mooi konden opladen.

### draadloze communicatie
#### verbinding maken
Download de app "Serial Bluetooth Terminal". Bovenaan kan je kiezen op verbinden & vervolgens de juiste communicatie component kiezen. Als het component er niet tussen komt, probeer dan eerst eens met de bluetooth van je telefoon rechtstreeks te verbinden, keer vervolgens naar de app terug & dan zal deze er tussen staan. Moest de HC-05 vragen om een code probeer "1234" ofwel "0000".

#### commando's
Al de parameters bekijken:
debug   

Parameters aanpassen:
set cycle [µs]  
set power [0..255]  
set diff [0..1]  
set kp [0..]  
set ki [0..]  
set kd [0..]  

Kalibratie sensoren:
calibrate black  
calibrate white  

### kalibratie
Om de sensoren te kalibreren, zet je de sensor op het zwarte vlak in het parcour & type "calibrate black". Omgekeerd zet je dan de sensor op een wit vlak & daar type je dan weer "calibrate white". Als we nu naar de waarden gaan gaan kijken in "debug" zal je zien dat de witte waarde dicht bij de 0 liggen & de zwarte waarde dicht bij de 1000 liggen. In de code wordt deze dan omgezet met zwart als 0 en wit als 1000.  

### settings
De robot rijdt stabiel met volgende parameters:  

### start/stop button
Er zit een bistabiele drukknop tussen de batterij en het + kanaal in het breadboard. Hierdoor kan je de spanning van het robotje halen, zodat de batterijen niet leeglopen wanneer de robot niet ingebruik is & zodat je de batterijen er niet uit hoeft te halen.
