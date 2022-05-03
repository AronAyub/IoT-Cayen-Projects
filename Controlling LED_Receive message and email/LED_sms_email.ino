//Aron Ayub
//engaron8@gmail.com
//Tue 3rd 2022

#include <CayenneMQTTESP8266.h>

#define CAYENNE_DEBUG

#define CAYENNE_PRINT Serial

 

char ssid[] = "super";

char password[]="AronAyub";

 

char username[] = "7575da50-d53d-11e9-b49d-5f4b6757b1bf";

char mqtt_password[] = "9807b4f4e97ee92ed5b517455cd73f3dc10d9228";

char cliend_id[] = "8d260160-ca2d-11ec-9f5b-45181495093e";

 

void setup() {

  Cayenne.begin(username, mqtt_password, cliend_id, ssid, password);

  pinMode(16, OUTPUT);

 digitalWrite(16,HIGH);
  
 

}

void loop() {

  Cayenne.loop();

}

CAYENNE_IN(0)

{
  digitalWrite(16, !getValue.asInt());  

}
