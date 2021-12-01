#include <avr/io.h>
#include "M2_Embedded_Water_Level_Controller/3_Implementation/inc/relay.h"

void relayInit(void)
{
	DDRB |= (1<<1); //set pinB1 as output
	PORTB &= ~(1<<1); //set portB1 low
}
