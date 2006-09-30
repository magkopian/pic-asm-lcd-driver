;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;Copyright (c) 2013 Manolis Agkopian						;
;See the file LICENCE for copying permission.					;
;                                                                               ;
;IN ORDER TO CHANGE THE PINS USED BY THE LCD, YOU HAVE TO MODIFY ONLY THIS FILE ;
;                                                                               ;
;BY DEFAULT THE LCD USES THE PB2 TO PB7 PINS TO FUNCTION.                       ;
;THE RB0 AND RB1 PINS ARE FREE TO BE USED WITH ANY APPLICATION.                 ;
;THE LCD RUN IN 4 BIT MODE WITH RB7 TO RB4 PINS USED US DATA BUS.               ;
;THE RB2 PIN IS USED FOR REGISTER SELECT COMMAND AND RB3 FOR ENABLE.            ;
;PB7 -> D7 | PB6 -> D6 | PB5 -> D5 | PB4 -> D4 | PB3 -> E | PB2 -> RS           ;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

LCD_PORT EQU PORTB
LCD_TRIS EQU TRISB
LCD_RS EQU 0x02
LCD_E EQU 0x03