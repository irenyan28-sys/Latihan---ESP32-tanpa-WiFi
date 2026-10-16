#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Mengaktifkan Sensor DHT22...");

dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000); // this speeds up the simulation
float suhu = dht.readTemperature();

Serial.println ("Suhu ruangan");
Serial.print("Suhu: ");
Serial.println(" *c ");
}
