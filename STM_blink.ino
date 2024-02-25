int ledPin = D13;    // Pin connected to the LED on Nucleo F411RE
int buttonPin = D3;  // Pin connected to the push button on Nucleo F411RE

int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

   
    if (buttonState == LOW) {
      for(int i=0; i<=30; i++){
        digitalWrite(ledPin, HIGH);
        delay(500);
        digitalWrite(ledPin, LOW );
        delay(500);
      }

    }

}
