// constants won't change. They're used here to set pin numbers:
const int waterSensorPin = 2;// the number of the water sensor pin
const int ledPin =  13; // the number of the LED pin
const int relay = 7;    // for pump relay


// variables that will change:
int waterSensorState = 0;    // variable for reading the water sensor status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(waterSensorPin, INPUT);
  // initialize the relay pin:
  pinMode(relay, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  waterSensorState = digitalRead(waterSensorPin);
  // check if the pushbutton is pressed. If it is, the waterSensorState is HIGH:
  if (waterSensorState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // turn Pump on for 102s:
    digitalWrite(relay, HIGH);
    delay(102000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    // turn Pump off:
    digitalWrite(relay, LOW);
  }
}
