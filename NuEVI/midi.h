#ifndef __MIDI_H
#define __MIDI_H

//This is a completely made up "European" SysEx manufacturer ID.
static const char sysex_id[] = { 0x00, 0x3e, 0x7f };

//Enable use of USB and serial MIDI
#define USE_MIDI_USB
#define USE_MIDI_SERIAL

//Set / get current midi channel
void midiSetChannel(uint8_t channel);
uint8_t midiGetChannel();

void midiSendProgramChange(uint8_t patch);
void midiSendControlChange(uint8_t ccParam, uint8_t ccValue);
void midiSendNoteOn(uint8_t note, uint8_t velocity);
void midiSendNoteOff(uint8_t note);
void midiSendAfterTouch(uint8_t value);
void midiSendPitchBend(uint16_t value);

void midiDiscardInput(void);
void midiReset(); // reset controllers
void midiPanic(); // turn all notes off

void midiInitialize(uint8_t channel=1);

void dinMIDIsendControlChange(uint8_t ccNumber, uint8_t cc, uint8_t ch);
void dinMIDIsendNoteOn(uint8_t note, uint8_t vel, uint8_t ch);
void dinMIDIsendNoteOff(uint8_t note, uint8_t vel, uint8_t ch);
void dinMIDIsendAfterTouch(uint8_t value, uint8_t ch);
void dinMIDIsendProgramChange(uint8_t value, uint8_t ch);
void dinMIDIsendPitchBend(uint16_t pb, uint8_t ch);
void dinMIDIsendSysex(const uint8_t data[], const uint8_t length);

void sendWLPower(const uint8_t level);
void sendWLChannel(const uint8_t channel);


//Convert things between "regular data" and MIDI data (byte order and 7-bits-per-byte)
uint16_t convertToMidiValue(const uint16_t realdata);
uint16_t convertFromMidiValue(const uint16_t mididata);
uint16_t convertFromMidiValue(const uint8_t* mididata);
uint32_t convertToMidiCRC(const uint32_t realdata);

#endif
