/* It is a traffic light controller with button */
const int r = 2, y = 6, g = 4, btn = 5;
bool pedestrian = false;

void setup() {

  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(btn, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(btn) == LOW) pedestrian = true;

  digitalWrite(g, HIGH); digitalWrite(r, LOW); delay(5000);
  digitalWrite(g, LOW); digitalWrite(y, HIGH); delay(2000);
  digitalWrite(y, LOW); digitalWrite(r, HIGH); delay(5000);
if (pedestrian) {
  delay(3000);
  pedestrian = false;
}
  }   
