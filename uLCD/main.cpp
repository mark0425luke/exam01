// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
 //
 #include "mbed.h"
 #include "uLCD_4DGL.h"
 
 uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
 
 int main()
 {
     // basic printf demo = 16 by 18 characters on screen
     // uLCD.background_color(0xFFFFFF);
     uLCD.color(BLUE);
     uLCD.printf("106081021"); //Default Green on black text
     

     uLCD.line(30, 30 , 50, 30, 0xFFFFFF);
     uLCD.line(50, 30 , 50, 50, 0xFFFFFF);
     uLCD.line(50, 50 , 30, 50, 0xFFFFFF);
     uLCD.line(30, 50 , 30, 30, 0xFFFFFF);
 }