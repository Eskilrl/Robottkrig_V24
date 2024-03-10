#include <Adafruit_NeoPixel.h>

//Constants
const int dinPin = 4; 	 // Din pin to Arduino pin 4
const int numOfLeds = 8; // Number of leds

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(numOfLeds, dinPin, NEO_GRB + NEO_KHZ800);

// Color takes RGB values, from 0,0,0 up to 255,255,255
// e.g. White = (255,255,255), Red = (255,0,0);
int red = 255; 		//Value from 0(led-off) to 255(). 
int green = 255; 
int blue = 255;


void setup() {
	pixels.begin(); // Initializes the NeoPixel library
	pixels.setBrightness(80); // Value from 0 to 100%
}

void loop() {
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for(int i=0;i<numOfLeds;i++){
    if(i%2){
      pixels.setPixelColor(i, pixels.Color(0,0,blue)); 
    } else {
      pixels.setPixelColor(i, pixels.Color(red,green,blue)); 
    }
    pixels.show(); // This sends the updated pixel color to the hardware.

  }
  delay(100);   // Delay for a period of time to change the next led
}
