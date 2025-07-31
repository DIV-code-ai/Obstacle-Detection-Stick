// Obstacle Detection Stick for the Visually Impaired

const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;

long duration;
int distance;
int threshold = 50; // Distance threshold in cm

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600); // For debugging
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo time
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance in cm
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Obstacle detected
  if (distance > 0 && distance <= threshold) {
    digitalWrite(buzzerPin, HIGH); // Turn on buzzer
    delay(200);
    digitalWrite(buzzerPin, LOW);
    delay(200); // Pulse every 200ms
  } else {
    digitalWrite(buzzerPin, LOW); // Buzzer off
  }

  delay(100);
}
