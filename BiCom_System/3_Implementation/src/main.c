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
}#include "MyStm32f407xx.h"
#include <stdint.h>

#define BTN_PRESSED ENABLE

void Lock(void);
void UnLock(void);
void clockwise(void);
void anticlockwise(void);
void pw(void);
void pw_2(void);
void pw_3(void);
void pw_4(void);
/**
 *  //delay
 *
 */
void delay(void)
{
	for(uint32_t i=0; i<30000000; i++);
}

int main(void)
{

	GPIO_Handle_t GpioLed, GPIOBtn; 							//PsNO=99007686
	 * // Setting  for LEDs
	 *
	 */
	GpioLed.pGPIOx = GPIOD;
	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12 ;	
	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&GpioLed);

 	GpioLed.pGPIOx = GPIOD;
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
	/**
	 * // Setup for Blue Switch
	 *
	 */
	GPIOBtn.pGPIOx = GPIOA;
    GPIOBtn.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_0;
	GPIOBtn.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIOBtn.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	GPIOBtn.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
	GPIO_PeriClockControl(GPIOA, ENABLE);
	GPIO_Init(&GPIOBtn);

	while(1)
	{
		pw();				//encryption for Lock function

		pw_2();				//encryption for UnLock function

		pw_3();				//encryption for clockwise function

		pw_4();				//encryption for anticlockwise function

	}

}
/**
 * // encryption for Lock function
 *
 */
void pw(void)
{
	p1:if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
	{
		Lock();
	}
	else
		goto p1;

}

/**
 * // encryption for UnLock function
 *
 */
void pw_2(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<2;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		count++;
	else
		i=0;
	}
	if(count==2)
		{

			UnLock();

		}
}
/**
 * // encryption for clockwise function
 *
 */
void pw_3(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<3;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		count++;
	else
		i=0;
	}
	if(count==3)
		{

			clockwise();

		}
}
/**
 * // encryption for anticlock function
 *
 */
void pw_4(void)
{
	uint32_t i=0, count = 1;
	for(i=0;i<4;i++)
	{
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)== BTN_PRESSED)
		count++;
	else
		i=0;
	}
	if(count==4)
		{

			anticlockwise();

		}
}




/**
 * //Lock function for locking door
 *
 */
void Lock(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
}
/**
 * // UnLock function for unlocking door
 *
 */
void UnLock(void)
{
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * // clockwise function for alarm
 *
 */
void clockwise(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
}
/**
 * // anticlockwise function for approach light
 *
 */
void anticlockwise(void)
{
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);
	delay();
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, 0);
	delay();
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, 0);
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
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13,1);                      //Psno=99007688
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
    GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15,0);                       //Psno=99007689
           
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