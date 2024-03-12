#include "my_stm32f4_gpio_lib.h"                 

GPIO_InitTypeDef   myGPIO_InitStruct;

int main(void){
	
	myGPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	myGPIO_InitStruct.Pin = GPIO_PIN_15;
	myGPIO_InitStruct.Pull = GPIO_NOPULL;
	
__LIB_RCC_GPIOD_CLK_ENABLE();
	
	LIB_GPIO_Init(GPIOD, &myGPIO_InitStruct);
	
	while(1){
		for(int i = 0 ; i<900000 ; i++){}
			LIB_GPIO_TogglePin(GPIOD, GPIO_PIN_15);	
	}
}
