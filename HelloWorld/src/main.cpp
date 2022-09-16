#include <Arduino.h>

unsigned long myTime;

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\nSam Gershkovich - 000801766\n");
  Serial.print("Chip ID: ");
  Serial.print(ESP.getChipId());
  Serial.print(" / Flash Chip ID: ");
  Serial.println(ESP.getFlashChipId());
}

void loop()
{
  // put your main code here, to run repeatedly:
  myTime = millis();
  Serial.print("Millis passed: ");
  Serial.print(myTime);
  Serial.print("\n");
  delay(2000);
}