// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;// the number of the pushbutton pin
const int ledPin =  13; // the number of the LED pin
const int relay = 7;    // for Arduino microcontroller


// variables will change:
int buttonState = 0;    // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // initialize the relay pin:
  pinMode(relay, OUTPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  //Serial.println(buttonState);
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    digitalWrite(relay, HIGH);
    delay(102000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    digitalWrite(relay, LOW);
  }
}
