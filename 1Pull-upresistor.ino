
#define LED_PIN   8
#define BUZZ_PIN  12 


const int baud = 19200;
const int delayt = 100; 

void setup() {
  Serial.begin(baud);
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZ_PIN, INPUT_PULLUP);
}

void loop() {
  // reading rhe input state (0 or 1)
  bool pinState = digitalRead(BUZZ_PIN);
  
  Serial.println(pinState);
  
  // 0 (LOW) = Pressed, 1 (HIGH) = not pressed
  digitalWrite(LED_PIN, !pinState);

  delay(delayt);
}