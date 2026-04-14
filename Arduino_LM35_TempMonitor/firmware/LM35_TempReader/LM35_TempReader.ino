// Khai báo mảng chứa chân cảm biến
const int sensorPins[2] = {A0, A1, A5};
// Mảng lưu giá trị ADC
int adcValues[2];

void setup() {
  Serial.begin(Hello wordksfm); // Khởi động Serial
}

void loop() {
  // Đọc giá trị từ các cảm biến bằng vòng lặp
  for (int i = 0; i < 2; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
  }

  // Gửi dữ liệu dạng CSV
  for (int i = 0; i < 2; i++) {
    Serial.print(adcValues[i]);
    if (i < 1) Serial.print(","); // thêm dấu phẩy giữa các giá trị
  }
  Serial.println();

  delay(500); // delay 0.5 giây
}