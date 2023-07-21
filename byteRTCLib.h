/*
*   English below
*   
*   Libary um ein RTC-Modul für Arduino zu
*   benutzen und zu verwalten
*   
*   Die Libary ist geschrieben für das
*   DS3231 RTC-Modul
*   
*   Die Libary soll mit c++ Objectorientiert arbeiten,
*   ist jedoch sehr abgespeckt, da nicht viel Funktionalität
*   darin implementiert wurde.
*   
*   Anschlüssen an den Arduino:
*   GRD  -> GRD
*   VCC  -> 5V
*   SCK -> A4
*   SCL -> A5
*
*
*
*   Libary to manage the RTC-Module as an 
*   capsulated object for the DS3231 RTC-Modul
*   
*   The libary works object-oriented with c++ 
*   so as to wrap the complete handling (which isn´t that much) 
*   of the RTC into a simple object.
*   
*   Conections to the Arduino Uno:
*   GRD  -> GRD
*   VCC  -> 5V
*   SCK -> A4
*   SCL -> A5
*   
*/

#ifndef BYTE_RTC_LIB_H
#define BYTE_RTC_LIB_H

// Imports
#include <RTClib.h>


class RTCClockHandler{

    private:
        // * * objectvariables * * //

        // Object from the original RTClib
        RTC_DS1307 clockObject;

    public:
        // * * Construktor und Destructor * * //

        // Construktor (syncOnStartup, SerialPort)
        RTCClockHandler(bool, int);

        // Destructor
        ~RTCClockHandler();

        // * * instance-methods * * //

        // Gets back the Time as String in Format "JJJJ-MM-ddThh:mm:ss"
        String getTime();

};

#endif