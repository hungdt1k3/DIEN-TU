#include "main.h"
#include "stm32l0xx_hal.h"
#include "lcd_4bit.h"

// test
extern uint16_t nhiet_do1,nhiet_do2;
void hien_thi(void)
{
		lcd_gotoxy(0,2);
		lcd_putsf("MD1:");	
		lcd_putchar((nhiet_do1/10)+0x30);
		lcd_putchar((nhiet_do1%10)+0x30);	

		lcd_gotoxy(10,2);
		lcd_putsf("MD2:");	
		lcd_putchar((nhiet_do2/10)+0x30);
		lcd_putchar((nhiet_do2%10)+0x30);

		lcd_gotoxy(0,3);
		lcd_putsf("MD3:");	
		lcd_putchar((nhiet_do2/10)+0x30);
		lcd_putchar((nhiet_do2%10)+0x30);


		lcd_gotoxy(10,3);
		lcd_putsf("MD3:");	
		lcd_putchar((nhiet_do2/10)+0x30);
		lcd_putchar((nhiet_do2%10)+0x30);


}	