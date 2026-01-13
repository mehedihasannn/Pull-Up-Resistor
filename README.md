# Arduino Digital Input Control

controlling an output (LED) using an input (Switch/Button) from a pull-up resistor


### Pinout Configuration
| Component | Pin | Note |
|-----------|-----|------|
| LED Output | **D8** | Standard Positive Logic (High = On) |
| Switch Input| **D12**| **INPUT_PULLUP** (Connects to GND) |


```cpp
// Reads 0 when pressed, 1 when released
bool pinState = digitalRead(BUZZ_PIN);

// Inverts signal: !0 becomes 1 (HIGH) -> LED ON
digitalWrite(LED_PIN, !pinState);
