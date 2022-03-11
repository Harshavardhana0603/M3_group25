#include "MyStm32f407xx.h"

/*
 * Define Push Button 
 */
#define BTN_PRESSED ENABLE
#define BTN_PRESSED_1 DISABLE


void Init_PushButton(void);
void Init_LedPins(void);
void Window_Status(void);
void Alarm_Status(void);
void Battery_Info(void);
void Door_Status(void);

/*
 * define delay function
 */
void delay(void)
{
	for ( uint32_t i=0 ; i<500000 ; i++);
}

int main(void)
{	
	Init_PushButton();		
	Init_LedPins(); 		

	while(1)
	{	
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
    	{
			Window_Status();
    	}
    	else if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED_1)
    	{
    	    Alarm_Status();
    	}
		else if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED)
		{
			Battery_Info();
		}
		else if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == BTN_PRESSED_1)
		{
			Door_Status();
		}
	}
}

/*
 * Defining of Pushbutton function
 */
void Init_PushButton(void)
{
	GPIO_Handle_t GpioLed;

	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

	GpioLed.pGPIOx = GPIOD;                                                               /// Psno=99007687
    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GpioLed);

    GpioLed.pGPIOx = GPIOD;
    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GpioLed);

    GpioLed.pGPIOx = GPIOD;
    GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
    GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
    GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GpioLed);
}
/*
 * Definition of Initialising ledpin function 
 */
void Init_LedPins(void)
{
	GPIO_Handle_t GpioBtn;
	GpioBtn.pGPIOx = GPIOA;
    GpioBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
    GpioBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
    GpioBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
    GpioBtn.GPIO_PinConfig.GPIO_PinOPType = GPIO_NO_PUPD;
    GPIO_PeriClockControl(GPIOA, ENABLE);
    GPIO_Init(&GpioBtn);
}

/*
 * Defining a function that lights(Ons) all Leds
 */
void Window_Status(void)
{
	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);                      //Psno=99007686
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
}
/*
 * Defining a function that makes all Leds Off
 */
void Alarm_Status(void)
{
	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);
}
/*
 * Defining a function that Make leds On in a clockwise manner
 */

void Battery_Info(void)
{
	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);

	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);                       //Psno=99007688
           
	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);

	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);
}
/*
 * Defining a function that Make leds On in a Anticlockwise manner
 */
void Door_Status(void)
{
	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,1);

	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);                          //Psno=99007689

	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);

	delay();
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12,1);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14,0);
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);
}