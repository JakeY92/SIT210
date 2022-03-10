const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);

void setup() {
pinMode(MY_LED, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    
    // J
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   
  
  // A
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  
  // K
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  // E
  digitalWrite(MY_LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                        // wait for half a second
  digitalWrite(MY_LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  
  
  digitalWrite(MY_LED, LOW);
  delay(5000);
  
  // Repeat from beginning
  
}

