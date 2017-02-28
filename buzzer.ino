/* Piezo
 
 This example shows how to run a Piezo Buzzer on pin 9
 using the analogWrite() function.
 
 It beeps 3 times fast at startup, waits a second then beeps continuously
 at a slower pace
 
 */

void setup()  { 
  // declare pin 11 to be an output:
  pinMode(11, OUTPUT);
  beep(50);
  beep(50);
  beep(50);
  delay(2000);
} 

void loop()  { 
  beep(200); 
}


