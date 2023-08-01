//Connecting to a Wifi Network

#include <WiFi.h>


#define WIFI_TIMEOUT_MS 20000 //20s

void connectToWiFi(){
  Serial.print("Connecting to Wifi");
  WiFi.mode(WIFI_STA);
  WiFi.begin("YOUR WIFI NAME","YOUR WIFI PASSWORD");

  unsigned long AttemptTime = millis();

  while(WiFi.status()!= WL_CONNECTED && millis()- AttemptTime < WIFI_TIMEOUT_MS){
    Serial.print(".");
    delay(500);
  }

  uint8_t wifi_status = WiFi.status();
  if(wifi_status != WL_CONNECTED){
    Serial.print("Failed!\nValue of current status: ");
    Serial.println(wifi_status);
    //Enter into Deepsleep or reboot ESP32
  }else{
    Serial.print("Connected!");
    Serial.println(WiFi.localIP());
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  connectToWiFi();
}

void loop() {
  // put your main code here, to run repeatedly:

}
