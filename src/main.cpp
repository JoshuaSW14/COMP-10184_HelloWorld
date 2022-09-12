//I, Joshua Symons-Webb, 000812836 certify that this material is my original work. No
//other person's work has been used without due acknowledgement.

#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("Name: Joshua Symons-Webb");
  Serial.println("Student ID: 000812836");
  Serial.println("Hello, World!\n");

  Serial.print("\nESP8266 Chip ID: ");
  Serial.print(ESP.getChipId());

  Serial.print("\nFlash Chip ID: ");
  Serial.print(ESP.getFlashChipId());
}

void loop() {
  delay(2000);

  Serial.print("\nThe D1 Mini has been running for ");
  Serial.print(millis());
  Serial.print(" seconds");
}