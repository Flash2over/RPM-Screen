# RPM-Display for lathe

## Basic Idea

we have a lathe at home with a frequency converter, to regulate the speed of the lathe. The Basic installation of the frequency converter is NOT covered in here. I cover only the assembly and setup of the additional RPM Display.

###Bill of Material:

+ WEMA Lathe (WEMA ALPHA 200/250 in my case)
+ Frequency converter (Mitsubishi(FR-S 500))
+ Arduino Mini Pro (every Arduino should work here)
+ TM1637 4 Bits digital led-display
+ Breadboard
+ Some Cables (I used cable with a shield, so the magnetical Field of the motor doesn't influence my measurement
+ Some kind of housing to put the microcontroller in, i simply used a 
electrical distribution box with a hole for the Display

## Schematics

All Schematics and are listed in the Schematic Folder.

## Parameter settings in the FC.

This 2 Parameter must be equal. Otherwise you get wrong messurements.

	P1 (Maximum output frequency) 
				=
	P55 (Reference for external frequency display)
	
## Assembly
	
* Just connect the the Arduino with the Diplay as it is shown in the "arduino-display-image"
* Put the assembly in the box
* connect the pcb to the FC as in "arduino-display-image"
	
	 FC -> MC
	pin 5 -> GND
	AE -> A0
	
Powering the electric assembly is done by a old mobile charger.


### Misc

I put some images in the schematics folder with an programming device for the Arduino Mini Pro. You can also just take the Arduino Nano which has a USB Port for programming.