// Industrial Gas Emission Monitoring System
// Components: MQ Sensor, Red LED, Green LED, Buzzer
// Author: Lokesh (for JSW resume project)

// ---------------- Pin Setup ----------------
const int gasSensor = A0;   // MQ sensor analog output connected to A0
const int redLED = 8;       // Red LED for Danger
const int greenLED = 9;     // Green LED for Safe
const int buzzer = 10;      // Buzzer for Alarm

int threshold = 400;        // Adjust this threshold value if needed

// ---------------- Setup ----------------
void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);       // Start Serial Monitor for sensor readings
  Serial.println("Gas Sensor System Starting...");
}

// ---------------- Loop ----------------
void loop() {
  int sensorValue = analogRead(gasSensor);   // Read MQ sensor value (0 - 1023)

  Serial.print("Gas Value: ");
  Serial.println(sensorValue);               // Print value to Serial Monitor

  // --------- Check if Gas level is above threshold ---------
  if (sensorValue > threshold) {
    // Dangerous level
    digitalWrite(redLED, HIGH);    // Turn ON Red LED
    digitalWrite(greenLED, LOW);   // Turn OFF Green LED
    tone(buzzer, 1000);            // Buzzer ON with frequency 1kHz
    Serial.println("⚠️ ALERT: Dangerous Gas Level!");
  } else {
    // Safe level
    digitalWrite(redLED, LOW);     // Turn OFF Red LED
    digitalWrite(greenLED, HIGH);  // Turn ON Green LED
    noTone(buzzer);                // Buzzer OFF
    Serial.println("✅ Safe Environment");
  }

  delay(1000);   // Wait 1 second before next reading
}
