assihnment3:

Write a program for Wemos (ESP8266) such that:

Whenever pin D3 is triggered (rising edge), the ESP should go to deep sleep for 8 seconds.

Upon waking up, the ESP should blink an LED for 20 seconds.

The LED must blink ON and OFF alternately, with each ON and OFF period being 0.5 seconds (i.e., 1-second total per blink cycle).

So the LED blinks continuously for 20 seconds, then stops — until the next time D3 is triggered.
