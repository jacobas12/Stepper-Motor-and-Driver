# Stepper-Motor-and-Driver
My project uses one stepper motor and two light sensors to turn a stand-in solar cell toward a light source.  I created a file called midterm.c which uses c code to sense when the light source luminosity threshold is surpassed and turns the motor in steps in the direction of the where the light source is.  I used avr gcc to run the code using these commands:

c:\avr-gcc-11.1.0\bin\avr-gcc-11.1.0.exe -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o midterm.o midterm.c

c:\avr-gcc-11.1.0\bin\avr-gcc-11.1.0 -mmcu=atmega328p midterm.o -o midterm

c:\avr-gcc-11.1.0\bin\avr-objcopy.exe -O ihex -R .eeprom midterm midterm.hex

c:\avr-gcc-11.1.0\bin\avrdude.exe -patmega328p -Pcom7 -carduino -D -U flash:w:midterm.hex:i

I have also included photos of my breadboard setup and driver connections and are in the code section.
