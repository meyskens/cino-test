/*
    The first code for cino to test!
*/


// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_BUILTIN, OUTPUT);
}
  
  // the loop function runs over and over again forever
void loop() {
    Serial.println("TESTS FOR LIFE");
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(2000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(2000);                       // wait for a second
    Serial.print("\a");
}