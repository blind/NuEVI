# NuEVI
A project by wind controller enthusiasts wanting to save the endangered Electronic Valve Instrument.

Follow the project at https://hackaday.io/project/25756-diy-evi-style-windcontroller


## Building NuEVI

This project is designed to be built using [PlatformIO](https://platformio.org/install/). If using the command-line tools, just build using `pio run` (or `pio run -e nuevi` for a specific build target).

It can also be built using the Arduino IDE. You will also need to download and install
[Teensyduino](https://www.pjrc.com/teensy/td_download.html) to build for and upload to the Teensy. You need to edit hardware.h to configure it for your platform.

### Libraries

A few libraries need to be added that are not part of the default Arduino install. These need to be added via the Library Manager in the Arduino IDE:
* Adafruit MPR121 (version 1.1.1. 1.2.0 and later have compatibility issues with Teensy 3.2)
* Adafruit GFX
* Adafruit SSD1306 (version 1.2.9 or above)
* NuEVI also includes the [Filters](https://github.com/JonHub/Filters) library by Jonathan Driscoll, but that is no longer an external dependency.


### Compile options

Open NuEVI.ino in the Arduino IDE. Under "Tools -> Board", select "Teensy 3.2 / 3.1" for NuEVI/NuRAD R1, or "Teensy 4.0" for NuEVI/NuRAD R2.
Then set "Tools -> USB Type" to "MIDI".

### Building and uploading

Connect the NuEVI via USB to your computer, open the Teensy application and make sure the "Auto"
option is selected (the green round icon). In Arduino IDE, select "Sketch -> Verify/Compile" and
once that is complete press the reset button on the Teensy chip (you have to remove the top cover
on the NuEVI to access this). Upon resetting, it should upload the new firmware onto the NuEVI.

After uploading new firmware, you may need to reset the config memory of the NuEVI. To do this, press
and hold the MENU and ENTER buttons while turning on the NuEVI. Note that this resets all sensor calibrations too. For new versions this should not be neccessary, as value and version checks are in place.
