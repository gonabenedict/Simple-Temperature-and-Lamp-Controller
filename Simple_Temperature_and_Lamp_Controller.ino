//  Pin Assignments 
const int RED_LED        = 13; 
const int GREEN_LED      = 11; 
const int YELLOW_LED     = 12; 
const int TEMP_SENSOR    = A3;   
const int LIGHT_SENSOR   = A0;
const int BUZZER         = 9;

//  Thresholds 
const int LIGHT_THRESHOLD = 100;
const int TEMP_ROOM_LOW = 500;
const int TEMP_ROOM_HIGH = 600;

void setup() {
  Serial.begin(9600);

  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  pinMode(TEMP_SENSOR, INPUT);
  pinMode(LIGHT_SENSOR, INPUT);
}

void loop() {
  int tempVal = analogRead(TEMP_SENSOR);
  int lightVal = analogRead(LIGHT_SENSOR);

  Serial.print("Temperature: ");
  Serial.print(tempVal);
  Serial.print(" | Light: ");
  Serial.println(lightVal);

  // High temperature condition
  if (tempVal < TEMP_ROOM_LOW) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    tone(BUZZER, 2000);
    Serial.println("High temperature detected!");
  } else {
    digitalWrite(RED_LED, LOW);
    noTone(BUZZER);
  }

  // Low light condition
  if (lightVal < LIGHT_THRESHOLD) {
    digitalWrite(YELLOW_LED, HIGH);
    Serial.println("Low light detected! Lamp ON.");
  } else {
    digitalWrite(YELLOW_LED, LOW);
  }

  // Normal room temperature and light
  if (tempVal >= TEMP_ROOM_LOW && tempVal <= TEMP_ROOM_HIGH && lightVal >= LIGHT_THRESHOLD) {
    digitalWrite(GREEN_LED, HIGH);
    Serial.println("Room conditions normal.");
  } else {
    digitalWrite(GREEN_LED, LOW);
  }

  delay(500);
}
