# Detektor Gas dengan ESP8266 dan Notifikasi WhatsApp

Proyek ini menggunakan mikrokontroler ESP8266 untuk mendeteksi tingkat gas menggunakan sensor MQ-02 dan mengirimkan notifikasi WhatsApp ke nomor telepon yang ditentukan jika tingkat gas melebihi batas tertentu.

## Komponen Hardware

- **Mikrokontroler:** ESP8266
- **Sensor Gas:** MQ-02
- **Breadboard dan kabel jumper**
- **Sumber daya listrik:** (misalnya kabel USB)

## Software

- **Arduino IDE**
- **Library ESP8266WiFi**
- **Library Callmebot untuk notifikasi WhatsApp**

## Pengaturan

1. **Koneksi Hardware:**
   - Hubungkan sensor gas MQ-02 ke pin input analog ESP8266 (A0).
   
2. **Koneksi WiFi:**
   - Hubungkan ESP8266 ke jaringan WiFi Anda menggunakan kredensial WiFi yang disediakan.
   
3. **Install Library:**
   - Install library ESP8266WiFi dan Callmebot di Arduino IDE.
   
4. **Upload Kode:**
   - Upload kode ke ESP8266.

## Penggunaan

1. **Pembacaan Tingkat Gas:**
   - ESP8266 akan terus membaca tingkat gas dari sensor MQ-02.
   
2. **Notifikasi WhatsApp:**
   - Jika tingkat gas melebihi 500 (batas yang dapat disesuaikan), ESP8266 akan mengirimkan notifikasi WhatsApp ke nomor telepon yang ditentukan.
   - Notifikasi akan berisi pesan yang menunjukkan bahwa terjadi kebocoran gas.

## Troubleshooting

- **Periksa Koneksi:** 
  - Periksa koneksi sensor gas dan pastikan bahwa sensor gas terhubung dengan benar ke ESP8266.
  
- **Koneksi WiFi:** 
  - Pastikan bahwa koneksi WiFi stabil dan ESP8266 terhubung ke jaringan yang benar.
  
- **API Key dan Nomor Telepon:** 
  - Periksa API key WhatsApp dan nomor telepon untuk kesalahan.

## Kontribusi

- **Fork Repository:**
  - Fork repository ini dan buat perubahan Anda.
  
- **Pull Request:**
  - Kirimkan pull request dengan deskripsi yang jelas tentang perubahan.

## Lisensi

Proyek ini dilisensi dengan lisensi MIT. Lihat file LICENSE untuk informasi lebih lanjut.

## Pengakuan

- **Library ESP8266WiFi:** oleh Ivan Grokhotkov
- **Library Callmebot:** oleh tidak diketahui

