/*
MyWhoosh USB HID Controller
The Arduino will act as a USB HID keyboard and when you press the buttons it will send the 'A' or 'D' keyboard signals.


https://github.com/JC-Concepts/MyWhoosh-ArduinoSteering

Version: 0.1.1

BOM:
- Arduino Pro Micro
- Switch qty: 2 (any contact normally open will work)

*/

#include <Keyboard.h>
#include <Mouse.h>

// Pin Buton declaration
const int buttonLeftPin = 5;
const int buttonRightPin = 7;

// Time Intervals
const unsigned long TIME_INTERVAL = 130;

unsigned long previousMillis;
unsigned long previousAnalogMillis;

void setup()
{
    pinMode(buttonLeftPin, INPUT_PULLUP);
    pinMode(buttonRightPin, INPUT_PULLUP);

    Keyboard.begin();
    Keyboard.releaseAll();

    Mouse.begin();
    Mouse.release();

    previousMillis = millis();
}

void loop()
{
    if (millis() - previousMillis >= TIME_INTERVAL)
    {

        if (digitalRead(buttonLeftPin) != HIGH)
        {
            Keyboard.press('a');
            delay(200);
            Keyboard.releaseAll();
        }
        else if (digitalRead(buttonRightPin) != HIGH)
        {
            Keyboard.write('d');
            delay(200);
            Keyboard.releaseAll();
        }

        previousMillis = millis();
    }
}
