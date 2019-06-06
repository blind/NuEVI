#ifndef __GLOBALS_H
#define __GLOBALS_H

#include "Wiring.h"

extern unsigned short breathThrVal;//;
extern unsigned short breathMaxVal;//;
extern unsigned short portamThrVal;//;
extern unsigned short portamMaxVal;//;
extern unsigned short pitchbThrVal;//;
extern unsigned short pitchbMaxVal;//;
extern unsigned short extracThrVal;//;
extern unsigned short extracMaxVal;//;
extern unsigned short ctouchThrVal;//;
extern unsigned short transpose;
extern unsigned short MIDIchannel;
extern unsigned short breathCC;  // OFF:MW:BR:VL:EX:MW+:BR+:VL+:EX+:CF
extern unsigned short breathAT;
extern unsigned short velocity;
extern unsigned short portamento;// switching on cc65? just cc5 enabled? SW:ON:OFF
extern unsigned short PBdepth;   // OFF:1-12 divider
extern unsigned short extraCT;   // OFF:MW:FP:CF:SP
extern unsigned short vibrato;   // OFF:1-9
extern unsigned short deglitch;  // 0-70 ms in steps of 5
extern unsigned short patch;     // 1-128
extern unsigned short octave;
extern unsigned short curve;
extern unsigned short velSmpDl;  // 0-30 ms
extern unsigned short velBias;   // 0-9
extern unsigned short pinkySetting; // 0 - 11 (QuickTranspose -12 to -1), 12 (pb/2), 13 - 24 (QuickTranspose +1 to +12)
extern unsigned short dipSwBits; // virtual dip switch settings for special modes (work in progress)
extern unsigned short priority; // mono priority for rotator chords
extern unsigned short vibSens; // vibrato sensitivity
extern unsigned short vibRetn; // vibrato return speed
extern unsigned short vibSquelch; //vibrato signal squelch
extern unsigned short vibDirection; //direction of first vibrato wave UPWD or DNWD
extern unsigned short fastPatch[7];
extern byte rotatorOn;
extern byte currentRotation;
extern int rotations[4];
extern int parallel; // semitones
extern byte gateOpen; // setting for gate always open, note on sent for every time fingering changes, no matter the breath status

extern int breathLoLimit;
extern int breathHiLimit;
extern int portamLoLimit;
extern int portamHiLimit;
extern int pitchbLoLimit;
extern int pitchbHiLimit;
extern int extracLoLimit;
extern int extracHiLimit;
extern int ctouchLoLimit;
extern int ctouchHiLimit;
extern int ttouchLoLimit;
extern int ttouchHiLimit;

extern int touch_Thr;
extern int breathStep;
extern int portamStep;
extern int pitchbStep;
extern int extracStep;
extern int ctouchStep;


extern unsigned long pixelUpdateTime;
extern unsigned long pixelUpdateInterval;
extern unsigned long cursorBlinkTime;          // the last time the cursor was toggled
extern unsigned long cursorBlinkInterval;    // the cursor blink toggle interval time
extern unsigned long patchViewTime;
extern unsigned long patchViewTimeUp;       // ms until patch view shuts off
extern unsigned long menuTime;
extern unsigned long menuTimeUp;           // menu shuts off after one minute of button inactivity
extern unsigned long lastDeglitchTime;         // The last time the fingering was changed
extern unsigned long ccSendTime;              // The last time we sent CC values
extern unsigned long breath_on_time;          // Time when breath sensor value went over the ON threshold
extern int lastFingering;             // Keep the last fingering value for debouncing
extern int mainState;                         // The state of the main state machine
extern int initial_breath_value;          // The breath value at the time we observed the transition
extern byte activeMIDIchannel;          // MIDI channel
extern byte activePatch;
extern byte doPatchUpdate;

extern byte legacy;
extern byte legacyBrAct;
extern byte halfTime;
extern byte FPD ;
extern boolean programonce;
extern byte slowMidi;

extern int pressureSensor;  // pressure data from breath sensor, for midi breath cc and breath threshold checks
extern int lastPressure;

extern int biteSensor;    // capacitance data from bite sensor, for midi cc and threshold checks
extern int lastBite;
extern byte biteJumper;

extern int exSensor;
extern int lastEx;

extern int pitchBend;

extern int pbUp;
extern int pbDn;

extern byte vibLedOff;
extern byte oldpkey;

extern int vibThr;          // this gets auto calibrated in setup
extern int vibThrLo;
extern int vibZero;

// Key variables, TRUE (1) for pressed, FALSE (0) for not pressed
extern byte K1;   // Valve 1 (pitch change -2)
extern byte K2;   // Valve 2 (pitch change -1)
extern byte K3;   // Valve 3 (pitch change -3)
extern byte K4;   // Left Hand index finger (pitch change -5)
extern byte K5;   // Trill key 1 (pitch change +2)
extern byte K6;   // Trill key 2 (pitch change +1)
extern byte K7;   // Trill key 3 (pitch change +4)

extern byte halfPitchBendKey;
extern byte specialKey;
extern byte pinkyKey;

#endif