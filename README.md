assihnment3:

Write a program for Wemos (ESP8266) such that:

Whenever pin D3 is triggered (rising edge), the ESP should go to deep sleep for 8 seconds.

Upon waking up, the ESP should blink an LED for 20 seconds.

The LED must blink ON and OFF alternately, with each ON and OFF period being 0.5 seconds (i.e., 1-second total per blink cycle).

So the LED blinks continuously for 20 seconds, then stops — until the next time D3 is triggered.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

assignment4:

Write a program for a Wemos (ESP8266) that assumes two LEDs are connected to pins D4 and D5.
These LEDs should blink as follows until pin D3 is triggered:

The first LED (D4) should blink with equal ON and OFF durations of 2 seconds.

The second LED (D5) should blink in a way that it's ON for 2 seconds and then OFF for 1 second.

Once pin D3 is triggered (for example, by a button press), both LEDs should stop blinking and stay OFF.
