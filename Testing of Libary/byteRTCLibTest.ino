/*
*   Test Skript um die RTC Libary zu testen
*   
*   Die Libary soll mit c++ Objectorientiert arbeiten.
*    
*/

// Imports
#include "byteRTCLib.h"

// Variablen
int serialPort = 9600;
bool syncOnStartup = true;
RTCClockHandler* clock;

void setup() {
    // Serial Port aufsetzen
    Serial.begin(serialPort);

    // RTC aufsetzten
    clock = new RTCClockHandler(syncOnStartup, serialPort);

}

void loop() {

    // Zeit aus dem Objekt holen
    String time = clock->getTime();

    Serial.print(F("Die Ausgelesene Zeit: "));
    Serial.println(time);

    delay(1000);
}
