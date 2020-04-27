// To give your project a unique name, this code must be
// placed into a .c file (its own tab).  It can not be in
// a .cpp file or your main sketch (the .ino file).

#include "usb_names.h"

// Edit these lines to create your own name.  The length must
// match the number of characters in your custom name.
#if defined(NURAD)
#define MIDI_NAME   {'N','u','R','A','D',' ','M','I','D','I'}
#else
#define MIDI_NAME   {'N','u','E','V','I',' ','M','I','D','I'}
#endif
#define MIDI_NAME_LEN  10

// Do not change this part.  This exact format is required by USB.

struct usb_string_descriptor_struct usb_string_product_name = {
        2 + MIDI_NAME_LEN * 2,
        3,
        MIDI_NAME
};
