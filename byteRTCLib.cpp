#ifndef BYTE_RTC_LIB_CPP
#define BYTE_RTC_LIB_CPP

#include "byteRTCLib.h"

RTCClockHandler::RTCClockHandler(bool syncOnStartup, int serialPort){
    Serial.begin(serialPort);

    Serial.println(F("clockbegin"));
    clockObject.begin();

	if (syncOnStartup){	
		Serial.println(F("Clocksync"));
		clockObject.adjust(DateTime(F(__DATE__), F(__TIME__)));
	} else {
		Serial.println(F("Clocksync Skipped"));
	}

}

RTCClockHandler::~RTCClockHandler(){
}

String RTCClockHandler::getTime(){
    DateTime time = clockObject.now();
	return time.timestamp(DateTime::TIMESTAMP_FULL);
}

#endif