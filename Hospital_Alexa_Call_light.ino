/*
  This is a simple reworking of the example Blink program found in the example section.
  This will activate a LED to blink and turn ON a relay when the Arduino is powered up. 
  Use any Alexa smart plug to power this device. Call the smart plug "Call light" so when 
  you ask Alexa to turn on the call light the smart plug will turn on the 
  Arduino and the program will run.  NOTE: the smart plug must then be turned OFF to reset the call light.
  This is used for a two wire low voltage call light system. What works best is if the facility has a 1/4 plug for the call system. 
  This allows you to just add a 1/4 inch plug to the relay ( 1 wire to COM and 1 to the N.O. ) parallel a second jack to these connection so
  you can plug the original call light into this and activate the call light the old fashion way by pressing it.  
  What helps is to contact the maintenance  personnel at the facility to get on board with this. 
  Jon Turnquist 

 */
 
int callLED= 8; //the LED pin to flash a LED on the case to notify the device is active
int relay = 9; // whatever pin you use to active the relay
 
void setup() {
  // initialize digital pins as an outputs.
  pinMode(callLED, OUTPUT);
  pinMode(relay, OUTPUT);

// use what code you need for your relay if it is N.O or N.C (normally open or normally closed)

// digitalWrite(relay,LOW); // turns relay off for N.C. relay hookup
// delay(1500);
// digitalWrite(relay, HIGH); // turns relay on and stays on till reset
// delay(1500);

 digitalWrite(relay,HIGH); // turns relay on for N.0. relay hookup
 delay(1500); // stays active for 1.5 sec
 digitalWrite(relay, LOW); // turns relay off and stays off till reset
 delay(1500);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(callLED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(callLED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
