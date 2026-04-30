#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ThingSpeak.h>

#define EchoPin D3
#define TriggerPin D2
#define alertPin D1

const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

WiFiClient  client;

unsigned long myChannelNumber = xxxxxx; //Your ThingSpeak channel number
const char * myWriteAPIKey = "YOUR_THINGSPEAK_writeAPI_key";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(EchoPin,INPUT);
  pinMode(TriggerPin,OUTPUT);
  pinMode(alertPin,OUTPUT);

  WiFi.begin(ssid,password);
   Serial.print("Connecting");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  ThingSpeak.begin(client);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TriggerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin,LOW);

  long duration = pulseIn(EchoPin, HIGH, 30000);
  float distance = (0.0342*duration)/2;
  delay(1000);
  Serial.print("Distance: ");
  Serial.println(distance);
  
  int status; 
  if(distance<=10){
    status = 1;
    Serial.println("ALERT! Obstacle");
    digitalWrite(alertPin,HIGH);
  }
  else{
    digitalWrite(alertPin, LOW);
    status = 0;
    Serial.println("SAFE");
  }

  ThingSpeak.setField(1,distance);
  ThingSpeak.setField(2,status);
  int response = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
  delay(15000);
  /*if (response == 200) {
    Serial.println("Data sent successfully");
  } else {
    Serial.print("Error: ");
    Serial.println(response);
  }*/
}
