#ifndef __AD9834_H
#define __AD9834_H

#include <main.h>


#define Triangle_Wave    0x2002
#define Sine_Wave  0x2008
#define Square_Wave 0x2028
/* AD9834晶振频率 */

#define AD9834_SYSTEM_COLCK     75000000UL



#define AD9834_FSYNC_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,SET)

#define AD9834_FSYNC_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,RESET)

#define AD9834_SCLK_SET    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,SET)

#define AD9834_SCLK_CLR    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,RESET)

#define AD9834_SDATA_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,SET)

#define AD9834_SDATA_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,RESET)

#define AD9834_RESET_SET   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,SET)

#define AD9834_RESET_CLR   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,RESET)


#define FREQ_0      0

#define FREQ_1      1

/* AD9834函数声明 */

 void AD9834_Write_16Bits(uint16_t data) ;  //写一个字到AD9834

 void AD9834_Select_Wave(uint16_t initdata) ; //选择输出波形

void AD9834_Init(void);  					//初始化配置

 void AD9834_Set_Freq(uint8_t freq_number, uint32_t freq) ;//选择输出寄存器和输出频率值

#endif
