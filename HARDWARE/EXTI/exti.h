#ifndef __EXTI_H
#define __EXIT_H	 
#include "sys.h"
#include "timer.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//Mini STM32开发板
//外部中断 驱动代码			   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2010/12/01  
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 正点原子 2009-2019
//All rights reserved	  
////////////////////////////////////////////////////////////////////////////////// 	  
//extern int hour,min,sec;
void EXTIX_Init(void);//IO初始化
void LED_set4(int num);
void LED_set3(int num);
void LED_set2(int num);
void LED_set1(int num);		 					    
#endif

