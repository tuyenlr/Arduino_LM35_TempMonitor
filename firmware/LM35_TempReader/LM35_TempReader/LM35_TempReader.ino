int sensorPin = A0;   // Chân đọc LM35
float voltage = 0.0;
float temperature = 0.0;

void setup() {
  Serial.begin(9600); // Khởi động Serial
}

void loop() {
  int value = analogRead(sensorPin);     // Đọc giá trị ADC (0-1023)
  voltage = value * (500.0 / 1023.0);      // Đổi sang điện áp (V)
  temperature = voltage * 100.0;         // LM35: 10mV = 1°C

  Serial.print("Temp: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000); // Đọc mỗi 1 giây
}
