#ifdef ESP32
  #include <WiFi.h>
#else
  #include <ESP8266WiFi.h>
#endif

void setup(){
  Serial.begin(115200); //Don't forget set it in Arduino Serial Monitor
  Serial.println();
  Serial.println("Start:");
  delay(1000);                      // Wait for a second for initialization
  Serial.print("ESP Board MAC Address:  ");
  Serial.println(WiFi.macAddress());
}
 
void loop(){

}
