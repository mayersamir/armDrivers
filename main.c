

/**
 * main.c
 */
#include "StdTypes.h"
#include "BitMath.h"
#include "Port_Interface.h"
#include "Dio_Interface.h"
#include "SystCtrl_Interface.h"
#include "Nvic_Interface.h"

int main(void)
{
    nvicInit();

    SysCtr_init();
    PORT_init();

    Dio_WriteChannel(Dio_Channel_F0, STD_high);
    Dio_WriteChannel(Dio_Channel_F1, STD_high);
    Dio_WriteChannel(Dio_Channel_F2, STD_high);

    while(1)
    {

    }
	return 0;
}
