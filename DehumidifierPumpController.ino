// constants won't change. They're used here to set pin numbers:
const int waterSensorPin = 2; // the number of the water sensor pin
const int ledPin =  13; // the number of the LED pin
const int relayPin = 7; // for pump relayPin


// variables that will change:
int waterSensorState = 0; // variable for reading the water sensor status
int delayTime = 102000;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(waterSensorPin, INPUT);
  // initialize the relayPin pin:
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  waterSensorState = digitalRead(waterSensorPin);
  // check if the pushbutton is pressed. If it is, the waterSensorState is HIGH:
  if (waterSensorState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // turn Pump on for defined time:
    digitalWrite(relayPin, HIGH);
    delay(delayTime);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    // turn Pump off:
    digitalWrite(relayPin, LOW);
  }
}
