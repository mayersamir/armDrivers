

/**
 * main.c
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "Port_Interface.h"
#include "Dio_Interface.h"
#include "SystCtrl_Interface.h"
#include "Nvic_Interface.h"
#include "Systick.h"
static volatile uint8 flag = 0;

void toggLed(void);


int main(void)
{
    nvicInit();

    SysCtr_init();
    PORT_init();

    setSysTickCallBack(toggLed);
    sysTickInit();



    while(1)
    {

    }
	return 0;
}

void toggLed(void)
{
    if(flag == 0)
    {
        Dio_WriteChannel(Dio_Channel_F1, STD_high);
        Dio_WriteChannel(Dio_Channel_F2, STD_high);
        flag = 1;
    }
    else
    {
        Dio_WriteChannel(Dio_Channel_F1, STD_low);
        Dio_WriteChannel(Dio_Channel_F2, STD_low);
        flag = 0;
    }

}
