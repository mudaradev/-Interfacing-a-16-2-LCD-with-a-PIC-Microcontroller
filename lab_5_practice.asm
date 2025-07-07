
_main:

;lab_5_practice.c,1 :: 		void main() {
;lab_5_practice.c,2 :: 		CCP1CON = 0x00;
	CLRF       CCP1CON+0
;lab_5_practice.c,3 :: 		T1CON = 0x00;
	CLRF       T1CON+0
;lab_5_practice.c,4 :: 		VRCON    =0x00;
	CLRF       VRCON+0
;lab_5_practice.c,5 :: 		INTCON   =0x00;
	CLRF       INTCON+0
;lab_5_practice.c,6 :: 		CMCON     =0x00;
	CLRF       CMCON+0
;lab_5_practice.c,8 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;lab_5_practice.c,9 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;lab_5_practice.c,10 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
