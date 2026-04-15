const int sensorPins[3] = {A0, A1, A2};
int adcValues[3];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc dữ liệu
  for (int i = 0; i < 3; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
  }

  // Gửi dạng JSON
  Serial.print("{");
  Serial.print("\"A0\":"); Serial.print(adcValues[0]); Serial.print(",");
  Serial.print("\"A1\":"); Serial.print(adcValues[1]); Serial.print(",");
  Serial.print("\"A2\":"); Serial.print(adcValues[2]);
  Serial.println("}");

  delay(500);
}