#include "led.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"
#include "key.h"
#include "exti.h"

	
 int main(void)
 {	
	delay_init();	    	 //延时函数初始化
	KEY_Init();				//按键初始化
	EXTIX_Init();		//外部中断初始化
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// 设置中断优先级分组2   21按键中断  22定时器
	LED_Init();		  	//初始化与LED连接的硬件接口
	TIM3_Int_Init(9999,7199);//10Khz的计数频率，计数到5000为500ms  
   	while(1)
	{
		delay_ms(500);
	}
}
