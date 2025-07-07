#line 1 "C:/Users/Hp/Desktop/Elec_Lab/LAB_05/lab_5.c"
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB4_bit;
sbit LCD_D5 at RB5_bit;
sbit LCD_D6 at RB6_bit;
sbit LCD_D7 at RB7_bit;

sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB4_bit;
sbit LCD_D5_Direction at TRISB5_bit;
sbit LCD_D6_Direction at TRISB6_bit;
sbit LCD_D7_Direction at TRISB7_bit;


char txt1[] = "Wellcome";
char txt2[] = "BECS 31421";
char txt3[] = "EX:LCD";
char txt4[] = "NO:06";

char i;

void Move_Delay() {
 Delay_ms(100);
}

void main(){
 CCP1CON = 0x00;
 T1CON = 0x00;
 VRCON = 0x00;
 INTCON = 0x00;
 CMCON = 0x07;

 Lcd_Init();
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);
 Delay_ms(10);
 Lcd_Out(1,5,txt1);
 Lcd_Out(2,3,txt2);
 Delay_ms(1000);
 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Out(1,6,txt3);
 Lcd_Out(2,6,txt4);
 Delay_ms(1000);



 for(i=0; i<4; i++) {
 Lcd_Cmd(_LCD_SHIFT_RIGHT);
 Move_Delay();
 }

 while(1) {
 for(i=0; i<9; i++) {
 Lcd_Cmd(_LCD_SHIFT_LEFT);
 Move_Delay();
 }

 for(i=0; i<5; i++) {
 Lcd_Cmd(_LCD_SHIFT_RIGHT);
 Move_Delay();
 }
 }
}
