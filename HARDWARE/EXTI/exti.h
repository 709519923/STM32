#ifndef __EXTI_H
#define __EXIT_H	 
#include "sys.h"
#include "timer.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//Mini STM32������
//�ⲿ�ж� ��������			   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2010/12/01  
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ����ԭ�� 2009-2019
//All rights reserved	  
////////////////////////////////////////////////////////////////////////////////// 	  
//extern int hour,min,sec;
void EXTIX_Init(void);//IO��ʼ��
void LED_set4(int num);
void LED_set3(int num);
void LED_set2(int num);
void LED_set1(int num);		 					    
#endif

