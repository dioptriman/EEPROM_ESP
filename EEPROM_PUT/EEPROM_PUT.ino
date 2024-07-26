/*
  Rui Santos
  Complete project details at https://RandomNerdTutorials.com/esp32-save-data-permanently-preferences/
  
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files.
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
*/

#include <Preferences.h>

Preferences preferences;

const char* ssid = "Tselhome";
const char* password = "72671691Hh";
const char* uuid = "9b87b916-1634-4ec4-8807-4b2793a00bfe";

void setup() {
  Serial.begin(115200);
  Serial.println();

  preferences.begin("credentials", false);
  preferences.putString("ssid", ssid); 
  preferences.putString("password", password);
  preferences.putString("uuid", uuid);

  Serial.println("Network Credentials Saved using Preferences");

  preferences.end();
}

void loop() {

}