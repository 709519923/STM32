#include "led.h"
#include "delay.h"
#include "sys.h"
#include "timer.h"
#include "key.h"
#include "exti.h"

	
 int main(void)
 {	
	delay_init();	    	 //��ʱ������ʼ��
	KEY_Init();				//������ʼ��
	EXTIX_Init();		//�ⲿ�жϳ�ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);// �����ж����ȼ�����2   21�����ж�  22��ʱ��
	LED_Init();		  	//��ʼ����LED���ӵ�Ӳ���ӿ�
	TIM3_Int_Init(9999,7199);//10Khz�ļ���Ƶ�ʣ�������5000Ϊ500ms  
   	while(1)
	{
		delay_ms(500);
	}
}
