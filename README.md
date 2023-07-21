# DS3231-RTC-Arduino-Libary

English below

Libary um ein RTC-Modul (DS3231 RTC-Modul) für Arduino zu benutzen und zu verwalten. Im Testordner ist ein simpler Arduino-Sketch, welcher die Funktionalitäten der Libary testet, wenn man sie auf einen Arduino Uno mit angeschlossenem Modul flasht
 
Die Libary soll mit c++ Objectorientiert arbeiten, ist jedoch sehr abgespeckt, da nicht viel Funktionalität darin implementiert wurde.

Anschlüssen an den Arduino:
  GRD  -> GRD
  VCC  -> 5V
  SCK -> A4
  SCL -> A5



Libary to manage the RTC-Module as an capsulated object for the DS3231 RTC-Modul. In the test-folder lies an Arduino-sketch, which can be used to test the libary when flashed to an Arduino Uno with connected module

The libary works object-oriented with c++ so as to wrap the complete handling (which isn´t that much) of the RTC into a simple object.

Conections to the Arduino Uno:
  GRD  -> GRD
  VCC  -> 5V
  SCK -> A4
  SCL -> A5
