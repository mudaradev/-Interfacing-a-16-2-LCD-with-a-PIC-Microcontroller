#line 1 "C:/Users/Hp/Desktop/Elec_Lab/LAB_05/lab_5_practice.c"
sbit LCD_RS at RB0_bit;
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

char text1[] ="mudara";
char text2[] ="panda";

void main() {
 TRISA=0x00;
 TRISB=0x00;
 PORTB=0x00;
 CMCON=0x07;

 Lcd_Cmd(_LCD_CLEAR);
 Lcd_Cmd(_LCD_CURSOR_OFF);

 Lcd_Out(1,2,text1);
 Lcd_Out(2,2,text2);
#line 41 "C:/Users/Hp/Desktop/Elec_Lab/LAB_05/lab_5_practice.c"
}
