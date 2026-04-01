#define TEMP_PIN A0
#define GAS_PIN A1
#define BUZZER 8
#define RELAY 9
#define LED 7

float temperature;
int gasValue;

void setup() {
  Serial.begin(9600);

  pinMode(BUZZER, OUTPUT);
  pinMode(RELAY, OUTPUT);
  pinMode(LED, OUTPUT);

  digitalWrite(BUZZER, LOW);
  digitalWrite(RELAY, LOW);
  digitalWrite(LED, LOW);

  Serial.println("Transformer Safety System Initialized...");
}

void loop() {
  // Read Temperature (LM35)
  int tempRead = analogRead(TEMP_PIN);
  temperature = (tempRead * 5.0 * 100.0) / 1024.0;

  // Read Gas Sensor
  gasValue = analogRead(GAS_PIN);

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.print(" °C | Gas: ");
  Serial.println(gasValue);

  // Condition for danger
  if (temperature > 60 || gasValue > 400) {
    Serial.println("⚠️ Danger Detected!");

    digitalWrite(BUZZER, HIGH);
    digitalWrite(RELAY, HIGH);
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(BUZZER, LOW);
    digitalWrite(RELAY, LOW);
    digitalWrite(LED, LOW);
  }

  delay(1000);
}