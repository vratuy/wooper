void setup() {
    Serial.begin(9600) ;
}

int ans;

void loop() {
    ans = analogRead(0);

    if (ans > 1020) {
      Serial.println("Detected!");
    } else {
      Serial.println("None.");
    }
    delay(100);
}
