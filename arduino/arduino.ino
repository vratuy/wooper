#define SPEAKER 12

void setup() {
    Serial.begin(9600);
}

int ans;

void loop() {
    ans = analogRead(0);

    if (ans > 1020) {
      tone(SPEAKER, 262, 50);
    } else {
      Serial.println("None.");
    }
}
