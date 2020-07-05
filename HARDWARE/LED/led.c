#include "led.h"
	   

//初始化GPIOB,全部拉低	    
//接线要求：0123->第四位 4567->第三位 8 9 10 11->第二位 12 13 14 15->第一位
//LED IO初始化
void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);	 //使能PB端口时钟
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;				 //seg-->PB.8 端口配置
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //推挽输出
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO口速度为50MHz
 GPIO_Init(GPIOB, &GPIO_InitStructure);					 //根据设定参数初始化GPIOA.8
 GPIO_ResetBits(GPIOB,GPIO_Pin_8);						 //PB.8 输出低

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;	    		 //seg-->PB.2 端口配置, 推挽输出
 GPIO_Init(GPIOB, &GPIO_InitStructure);	  				 //推挽输出 ，IO口速度为50MHz
 GPIO_ResetBits(GPIOB,GPIO_Pin_2); 						 //PB.2 输出低

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_0);
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_1);
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_3);

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_4);

 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_5);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_6);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_7);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_9);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_10);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_11);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_12);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_13);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_14;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_14);
 
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
 GPIO_Init(GPIOB, &GPIO_InitStructure);	
 GPIO_ResetBits(GPIOB,GPIO_Pin_15);
}

void LED_set4(int num)
{
	if(num == 0)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 2)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 3)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 4)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 5)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 6)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 7)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_SetBits(GPIOB,GPIO_Pin_1);
		GPIO_SetBits(GPIOB,GPIO_Pin_2);
		GPIO_ResetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 8)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_SetBits(GPIOB,GPIO_Pin_3);
	}
	if(num == 9)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_0);
		GPIO_ResetBits(GPIOB,GPIO_Pin_1);
		GPIO_ResetBits(GPIOB,GPIO_Pin_2);
		GPIO_SetBits(GPIOB,GPIO_Pin_3);
	}	
}
	

void LED_set3(int num)
{
	if(num == 0)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 2)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 3)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 4)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 5)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 6)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 7)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_SetBits(GPIOB,GPIO_Pin_5);
		GPIO_SetBits(GPIOB,GPIO_Pin_6);
		GPIO_ResetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 8)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
	}
	if(num == 9)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_4);
		GPIO_ResetBits(GPIOB,GPIO_Pin_5);
		GPIO_ResetBits(GPIOB,GPIO_Pin_6);
		GPIO_SetBits(GPIOB,GPIO_Pin_7);
	}	
}

void LED_set2(int num)
{
	if(num == 0)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 2)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 3)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 4)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 5)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 6)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 7)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		GPIO_SetBits(GPIOB,GPIO_Pin_9);
		GPIO_SetBits(GPIOB,GPIO_Pin_10);
		GPIO_ResetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 8)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_SetBits(GPIOB,GPIO_Pin_11);
	}
	if(num == 9)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_8);
		GPIO_ResetBits(GPIOB,GPIO_Pin_9);
		GPIO_ResetBits(GPIOB,GPIO_Pin_10);
		GPIO_SetBits(GPIOB,GPIO_Pin_11);
	}	
}

void LED_set1(int num)
{
	if(num == 0)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 1)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 2)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		GPIO_SetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 3)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		GPIO_SetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 4)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_SetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 5)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_SetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 6)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		GPIO_SetBits(GPIOB,GPIO_Pin_13);
		GPIO_SetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 7)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		GPIO_SetBits(GPIOB,GPIO_Pin_13);
		GPIO_SetBits(GPIOB,GPIO_Pin_14);
		GPIO_ResetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 8)
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_SetBits(GPIOB,GPIO_Pin_15);
	}
	if(num == 9)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
		GPIO_ResetBits(GPIOB,GPIO_Pin_13);
		GPIO_ResetBits(GPIOB,GPIO_Pin_14);
		GPIO_SetBits(GPIOB,GPIO_Pin_15);
	}	
}
