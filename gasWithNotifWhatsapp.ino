#include <ESP8266WiFi.h>
#include <Callmebot_ESP8266.h>

const char* ssid = "YOUR WIFI NAME";
const char* password = "YOUR WIFI PASSWORD";

#define Buz 12 // GPIO12 (D6)
#define Gas A0 // Pin sensor gas MQ-02 dihubungkan ke pin Analog A0

String phoneNumber = "+62(YOUR NUMBER)";
String apiKey = "YOUR API KEY";
String messsage = "YOUR MESSAGE";

void setup() {
  pinMode(Buz, OUTPUT); 
  pinMode(Gas, INPUT);
  
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
  Serial.println(Callmebot.debug());
  Callmebot.begin();
}

void loop() {
  int gasValue = analogRead(Gas);

  Serial.print("Gas : ");
  Serial.println(gasValue);

  // Jika nilai sensor gas kurang dari ambang batas, kirim pesan ke bot Telegram
  if (gasValue > 500) {
    digitalWrite(Buz, HIGH);
    Callmebot.debug();
    Serial.println(Callmebot.debug());
    Callmebot.whatsappMessage(phoneNumber, apiKey, messsage);
    delay(500);
  }
  else if (gasValue < 500) {
    digitalWrite(Buz, LOW);
    delay(500);
  }
}
