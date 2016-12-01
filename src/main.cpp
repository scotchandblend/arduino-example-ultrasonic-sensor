#include "Arduino.h"
#include "NewPing.h"

#define ECHO_PIN 5
#define TRIGGER_PIN 6
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters)

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  Serial.begin(115200);
}

void loop() {
  // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  delay(1000);
  Serial.print("Ping: ");

  // Send ping, get distance in cm and print result (0 = outside set distance range)
  Serial.print(sonar.ping_cm());
  Serial.println("cm");
}
