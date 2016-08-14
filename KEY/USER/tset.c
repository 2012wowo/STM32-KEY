# include "sys.h"
# include "usart.h"
# include "delay.h"
# include "key.h"
# include "led.h"
int main(void)
{
 	u8 t;
	Stm32_Clock_Init(9);
	delay_init(72);
	LED_Init();
	KEY_Init();
	LED0=0;
	while(1)
	{
	 	t=KEY_Scan(0);
		if(t)
		{
		 	switch(t)
			{
			 	case KEY_UP:
					LED0=!LED0;
					delay_ms(50);
					LED0=!LED0;
					break;
				case KEY_LEFT:
					LED0=!LED0;
					break;
				case KEY_DOWN:
					LED0=!LED0;
					delay_ms(100);
					LED0=!LED0;
					break;
				case KEY_RIGHT:
					LED0=!LED0;
					delay_ms(150);
					LED0=!LED0;
					break;						
			}		
		}
		else delay_ms(10);
	}
}
