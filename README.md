## Description:
This is a driver for a standard 16x2 LCD screen written in assembly. The driver can be used with any of the PIC 16FXXX chips that have at least a PORT with 6 bits, and use a 4MHz clock. You will have just to use the appropriate `PROCESSOR`, `INCLUDE` and `__CONFIG` instructions, and in some cases modify the pin settings.

## Configuration:
The driver by default use 6 bits of PORTB (PB7-PB2). The used pins can be easily changed, by modifying only the [LCD_PIN_SETTINGS.INC](LCD_PIN_SETTINGS.INC) file.

Note that all the pins off the LCD must be at the same PORT. Also the LCD data pins (D7-D4) must have the same bit number as the PORT you use. For example if you use PORTA for your LCD, the D7 pin must go to the PA7 pin of the microcontroller, the D6 to the PA6, etc.

## Hardware Support:
The driver is tested with the 16F876A microcontroller chip and it worked fine, but it should work with most PIC 16FXXX chips that have at least a PORT with 6 bits. If you have tested it with a different PIC please let me know. 

The driver is written to work with a 4MHz clock. To use another clock you will have to modify the delay routines. With a slower crystal though it should work without changing the code but it will be a little slower.
