📡 Hệ thống đo nhiệt độ sử dụng cảm biến LM35

1. Mô tả
Dự án xây dựng hệ thống đo và giám sát nhiệt độ môi trường sử dụng cảm biến LM35 kết hợp với vi điều khiển Arduino. Dữ liệu nhiệt độ được thu thập, xử lý và hiển thị thông qua giao tiếp Serial, đồng thời có thể mở rộng để truyền qua mạng phục vụ các ứng dụng IoT.

2. Tính năng
* Đo nhiệt độ môi trường theo thời gian thực
* Hiển thị giá trị nhiệt độ qua Serial Monitor
* Hỗ trợ nhiều kênh cảm biến (A0, A1, A2, …)
* Dễ dàng mở rộng tích hợp WiFi/IoT
* Cấu trúc code rõ ràng, dễ bảo trì

3. Phần cứng sử dụng

| STT | Thiết bị      | Mô tả                         |
| --- | ------------- | ----------------------------- |
| 1   | Arduino Uno   | Vi điều khiển chính           |
| 2   | Cảm biến LM35 | Đo nhiệt độ analog            |
| 3   | Dây nối       | Kết nối mạch                  |
| 4   | Breadboard    | Lắp ráp mạch thử nghiệm       |
| 5   | Máy tính      | Lập trình và hiển thị dữ liệu |

4. Hướng dẫn sử dụng

Bước 1: Kết nối phần cứng
* Chân VCC của LM35 → 5V Arduino
* Chân GND → GND
* Chân OUT → A0 (hoặc A1, A2)

Bước 2: Nạp code
* Mở file `LM35_TempReader.ino` bằng Arduino IDE
* Chọn đúng board và cổng COM
* Upload chương trình

Bước 3: Xem dữ liệu
* Mở Serial Monitor
* Chọn baud rate (ví dụ: 9600 hoặc 115200)
* Quan sát nhiệt độ hiển thị

5. Cấu trúc thư mục

Arduino_LM35_TempMonitor/
│── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
│── README.md
│── .gitignore

6. Thành viên nhóm

| STT | Họ và tên   | Vai trò              |
| --- | ----------- | -------------------- |
| 1   | Sinh viên A | Phát triển phần cứng |
| 2   | Sinh viên B | Phát triển phần mềm  |

7. Hướng phát triển

* Tích hợp WiFi (ESP8266/ESP32)
* Gửi dữ liệu lên server hoặc cloud
* Xây dựng giao diện web/app giám sát
* Cảnh báo khi nhiệt độ vượt ngưỡng

