// we use the real I2C port

#define SDA_PORT PORTD
#define SDA_PIN 1
#define SCL_PORT PORTD
#define SCL_PIN 0

#define I2C_TIMEOUT 100
#define I2C_FASTMODE 1
     
#include <SoftWire.h>

SoftWire Wire = SoftWire();
     
void setup()
{
  Wire.begin();
  
  Serial.begin(115200);
  while (!Serial);             // Leonardo: wait for serial monitor
  Serial.println("\nI2C Scanner");
}


void loop()
{
  byte error, address;
  int nDevices;
  
  Serial.println(F("Scanning I2C bus (7-bit addresses) ..."));
  
  nDevices = 0;
  for(address = 1; address < 127; address++ )
    {
      // The i2c_scanner uses the return value of
      // the Write.endTransmisstion to see if
      // a device did acknowledge to the address.
      Wire.beginTransmission(address);
      error = Wire.endTransmission();
      
      if (error == 0)
        {
          Serial.print(F("I2C device found at address 0x"));
          if (address<16)
            Serial.print(F("0"));
          Serial.print(address,HEX);
          Serial.println(F("  !"));
	  
          nDevices++;
        }
      else if (error==4)
        {
          Serial.print(F("Unknow error at address 0x"));
          if (address<16)
            Serial.print("0");
          Serial.println(address,HEX);
        }    
    }
  if (nDevices == 0)
    Serial.println("No I2C devices found\n");
  else 
    Serial.println("done\n");
  
  delay(5000);           // wait 5 seconds for next scan
}

