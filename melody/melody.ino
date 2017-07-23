#include <lc-addrlabels.h>
#include <lc-switch.h>
#include <lc.h>
#include <pt-sem.h>
#include <pt.h>

// Midi To Arduino play music speaker Piezo.

#include <EEPROM.h>
#include "pt.h"   // include protothread library

int tonePin = 11;

byte reset;

boolean enablePtreplaceMe800216 = true;

static struct pt ptreplaceMe800216;

void setup() {

PT_INIT(&ptreplaceMe800216);  // protothread variable
pinMode(13, OUTPUT);

EEPROM.write(0, reset = EEPROM.read(0) + 1);

if (reset > 6)EEPROM.write(0, 0);

}

void loop() {

if (reset == 1)Mario();

if (reset == 2)JoyToTheWorld();

if (reset == 3)WeWishYouAMerry();

if (reset == 4)RudolfTheRedNosed();

if (reset == 5)JingleBells();

if (reset == 6)ParovozSolo();


if (reset == 7 || digitalRead(13)) {

digitalWrite(13, HIGH);

if (++reset > 6)reset = 1;

}

}

void ParovozSolo() {

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 1012.5);

delay(1125.0);

delay(125.0);

tone(tonePin, 440, 168.75);

delay(187.5);

delay(20.8333333333);

tone(tonePin, 391, 168.75);

delay(187.5);

delay(20.8333333333);

tone(tonePin, 349, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 293, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 261, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 246, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 293, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 261, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 220, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 506.25);

delay(562.5);

delay(62.5);

tone(tonePin, 261, 506.25);

delay(562.5);

delay(62.5);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 523, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 493, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 415, 1350.0);

delay(1500.0);

delay(1416.66666667);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 523, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 493, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 523, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 493, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 349, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 349, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 349, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 293, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 261, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 246, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 220, 1350.0);

delay(1500.0);

delay(1416.66666667);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 523, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 493, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 523, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 493, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 440, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 349, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 349, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 675.0);

delay(750.0);

delay(83.3333333333);

tone(tonePin, 391, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 349, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 329, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 293, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 261, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 246, 337.5);

delay(375.0);

delay(41.6666666667);

tone(tonePin, 220, 1350.0);

delay(1500.0);

}

void JoyToTheWorld() {

tone(tonePin, 587, 450.0);

delay(500.0);

tone(tonePin, 554, 337.5);

delay(375.0);

tone(tonePin, 493, 112.5);

delay(125.0);

tone(tonePin, 440, 675.0);

delay(750.0);

tone(tonePin, 391, 225.0);

delay(250.0);

tone(tonePin, 369, 450.0);

delay(500.0);

tone(tonePin, 329, 450.0);

delay(500.0);

tone(tonePin, 293, 675.0);

delay(750.0);

tone(tonePin, 440, 225.0);

delay(250.0);

tone(tonePin, 493, 670.3125);

delay(744.791666667);

delay(5.20833333333);

tone(tonePin, 493, 225.0);

delay(250.0);

tone(tonePin, 554, 670.3125);

delay(744.791666667);

delay(5.20833333333);

tone(tonePin, 554, 225.0);

delay(250.0);

tone(tonePin, 587, 670.3125);

delay(744.791666667);

delay(5.20833333333);

tone(tonePin, 587, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 587, 225.0);

delay(250.0);

tone(tonePin, 554, 225.0);

delay(250.0);

tone(tonePin, 493, 225.0);

delay(250.0);

tone(tonePin, 440, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 440, 337.5);

delay(375.0);

tone(tonePin, 391, 112.5);

delay(125.0);

tone(tonePin, 369, 225.0);

delay(250.0);

tone(tonePin, 587, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 587, 225.0);

delay(250.0);

tone(tonePin, 554, 225.0);

delay(250.0);

tone(tonePin, 493, 225.0);

delay(250.0);

tone(tonePin, 440, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 440, 337.5);

delay(375.0);

tone(tonePin, 391, 112.5);

delay(125.0);

tone(tonePin, 369, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 369, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 369, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 369, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 369, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 369, 112.5);

delay(125.0);

tone(tonePin, 391, 112.5);

delay(125.0);

tone(tonePin, 440, 675.0);

delay(750.0);

tone(tonePin, 391, 112.5);

delay(125.0);

tone(tonePin, 369, 112.5);

delay(125.0);

tone(tonePin, 329, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 329, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 329, 220.3125);

delay(244.791666667);

delay(5.20833333333);

tone(tonePin, 329, 112.5);

delay(125.0);

tone(tonePin, 369, 112.5);

delay(125.0);

tone(tonePin, 391, 675.0);

delay(750.0);

tone(tonePin, 369, 112.5);

delay(125.0);

tone(tonePin, 329, 112.5);

delay(125.0);

tone(tonePin, 293, 225.0);

delay(250.0);

tone(tonePin, 587, 450.0);

delay(500.0);

tone(tonePin, 493, 225.0);

delay(250.0);

tone(tonePin, 440, 337.5);

delay(375.0);

tone(tonePin, 391, 112.5);

delay(125.0);

tone(tonePin, 369, 225.0);

delay(250.0);

tone(tonePin, 391, 225.0);

delay(250.0);

tone(tonePin, 369, 450.0);

delay(500.0);

tone(tonePin, 329, 450.0);

delay(500.0);

}

void WeWishYouAMerry() {

delay(86.8054166667);

tone(tonePin, 311, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 156.24975);

delay(173.610833333);

tone(tonePin, 466, 156.24975);

delay(173.610833333);

tone(tonePin, 415, 156.24975);

delay(173.610833333);

tone(tonePin, 391, 156.24975);

delay(173.610833333);

tone(tonePin, 349, 312.4995);

delay(347.221666667);

tone(tonePin, 349, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 349, 312.4995);

delay(347.221666667);

tone(tonePin, 466, 312.4995);

delay(347.221666667);

tone(tonePin, 466, 156.24975);

delay(173.610833333);

tone(tonePin, 523, 156.24975);

delay(173.610833333);

tone(tonePin, 466, 156.24975);

delay(173.610833333);

tone(tonePin, 415, 156.24975);

delay(173.610833333);

tone(tonePin, 391, 312.4995);

delay(347.221666667);

tone(tonePin, 311, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 311, 312.4995);

delay(347.221666667);

tone(tonePin, 523, 312.4995);

delay(347.221666667);

tone(tonePin, 523, 156.24975);

delay(173.610833333);

tone(tonePin, 554, 156.24975);

delay(173.610833333);

tone(tonePin, 523, 156.24975);

delay(173.610833333);

tone(tonePin, 466, 156.24975);

delay(173.610833333);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 349, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 311, 156.24975);

delay(173.610833333);

tone(tonePin, 311, 156.24975);

delay(173.610833333);

tone(tonePin, 349, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 466, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 391, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 415, 546.874125);

delay(607.637916667);

delay(86.8054166667);

tone(tonePin, 311, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 391, 624.999);

delay(694.443333333);

tone(tonePin, 391, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 391, 312.4995);

delay(347.221666667);

tone(tonePin, 349, 312.4995);

delay(347.221666667);

tone(tonePin, 311, 546.874125);

delay(607.637916667);

delay(86.8054166667);

tone(tonePin, 466, 312.4995);

delay(347.221666667);

tone(tonePin, 523, 312.4995);

delay(347.221666667);

tone(tonePin, 466, 312.4995);

delay(347.221666667);

tone(tonePin, 415, 312.4995);

delay(347.221666667);

tone(tonePin, 622, 312.4995);

delay(347.221666667);

tone(tonePin, 311, 312.4995);

delay(347.221666667);

tone(tonePin, 311, 156.24975);

delay(173.610833333);

tone(tonePin, 311, 156.24975);

delay(173.610833333);

tone(tonePin, 349, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 466, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 391, 234.374625);

delay(260.41625);

delay(86.8054166667);

tone(tonePin, 415, 546.874125);

delay(607.637916667);

}

void RudolfTheRedNosed() {

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 1294.962);

delay(1438.84666667);

tone(tonePin, 349, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 349, 323.7405);

delay(359.711666667);

tone(tonePin, 293, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 1294.962);

delay(1438.84666667);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 1294.962);

delay(1438.84666667);

tone(tonePin, 349, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 349, 323.7405);

delay(359.711666667);

tone(tonePin, 293, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 587, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 1294.962);

delay(1438.84666667);

tone(tonePin, 440, 320.368203125);

delay(355.964670139);

delay(3.74699652778);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 647.481);

delay(719.423333333);

tone(tonePin, 349, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 349, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 1294.962);

delay(1438.84666667);

tone(tonePin, 293, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 320.368203125);

delay(355.964670139);

delay(3.74699652778);

tone(tonePin, 493, 320.368203125);

delay(355.964670139);

delay(3.74699652778);

tone(tonePin, 493, 647.481);

delay(719.423333333);

tone(tonePin, 523, 320.368203125);

delay(355.964670139);

delay(3.74699652778);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 349, 161.87025);

delay(179.855833333);

tone(tonePin, 293, 809.35125);

delay(899.279166667);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 329, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 1294.962);

delay(1438.84666667);

tone(tonePin, 349, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 349, 323.7405);

delay(359.711666667);

tone(tonePin, 293, 323.7405);

delay(359.711666667);

tone(tonePin, 493, 323.7405);

delay(359.711666667);

tone(tonePin, 440, 323.7405);

delay(359.711666667);

tone(tonePin, 391, 967.849203125);

delay(1075.38800347);

delay(3.74699652778);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 161.87025);

delay(179.855833333);

tone(tonePin, 440, 161.87025);

delay(179.855833333);

tone(tonePin, 391, 323.7405);

delay(359.711666667);

tone(tonePin, 587, 323.7405);

delay(359.711666667);

tone(tonePin, 523, 971.2215);

delay(359.711666667);

}

void JingleBells() {

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 416.6655);

delay(462.961666667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 416.6655);

delay(462.961666667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 587, 208.33275);

delay(231.480833333);

tone(tonePin, 391, 312.499125);

delay(347.22125);

tone(tonePin, 440, 104.166375);

delay(115.740416667);

tone(tonePin, 493, 833.331);

delay(925.923333333);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 523, 312.499125);

delay(347.22125);

tone(tonePin, 523, 104.166375);

delay(115.740416667);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 104.166375);

delay(115.740416667);

tone(tonePin, 493, 104.166375);

delay(115.740416667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 440, 208.33275);

delay(231.480833333);

tone(tonePin, 440, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 440, 416.6655);

delay(462.961666667);

tone(tonePin, 587, 416.6655);

delay(462.961666667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 416.6655);

delay(462.961666667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 416.6655);

delay(462.961666667);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 587, 208.33275);

delay(231.480833333);

tone(tonePin, 391, 312.499125);

delay(347.22125);

tone(tonePin, 440, 104.166375);

delay(115.740416667);

tone(tonePin, 493, 833.331);

delay(925.923333333);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 523, 312.499125);

delay(347.22125);

tone(tonePin, 523, 104.166375);

delay(115.740416667);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 208.33275);

delay(231.480833333);

tone(tonePin, 493, 104.166375);

delay(115.740416667);

tone(tonePin, 493, 104.166375);

delay(115.740416667);

tone(tonePin, 587, 208.33275);

delay(231.480833333);

tone(tonePin, 587, 208.33275);

delay(231.480833333);

tone(tonePin, 523, 208.33275);

delay(231.480833333);

tone(tonePin, 440, 208.33275);

delay(231.480833333);

tone(tonePin, 391, 208.33275);

delay(231.480833333);

tone(tonePin, 587, 208.33275);

delay(231.480833333);

tone(tonePin, 783, 208.33275);

delay(231.480833333);

}

void Mario() {
  protothreadreplaceMe800216(&ptreplaceMe800216);
}
 static PT_THREAD(protothreadreplaceMe800216(struct pt *pt)) {
  static struct timer treplaceMe800216;
  PT_BEGIN(pt);
  while (enablePtreplaceMe800216) {
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 329, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 466, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 329, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 466, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 515.8725); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 634.92); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 1111.11); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 1046, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 634.92); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 739, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 622, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 992.0625); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 329, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 466, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 329, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 466, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 992.0625); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 873.015); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 880, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 783, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 391, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 277.7775); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 415, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 440, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 396.825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 493, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 158.73); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 39.6825); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 698, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 659, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 587, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));
    tone(tonePin, 523, 71.4285);
    timer_set(&treplaceMe800216, 79.365); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe800216));

    }
  PT_END(pt);
}
