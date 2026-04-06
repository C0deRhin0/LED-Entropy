// Phase 0 Day 2 - Baseline LED Mapping
// Configures the PWM-capable LED pins for baseline validation.

const int kLedPins[] = {3, 5, 6, 9, 10};
const int kLedCount = sizeof(kLedPins) / sizeof(kLedPins[0]);

void setup() {
  for (int i = 0; i < kLedCount; i++) {
    pinMode(kLedPins[i], OUTPUT);
    digitalWrite(kLedPins[i], LOW);
  }
}

void loop() {}
