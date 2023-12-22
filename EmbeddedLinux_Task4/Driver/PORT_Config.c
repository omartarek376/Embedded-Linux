#include "PORT.h"
#include "PORT_Config.h"

#ifdef POST_CONFIG

DIO_enumOptions_t DIO_Pin_Cfg[PINS_PER_PORT * NUM_PORTS] = 
{
	DIO_enumOutputLow,
	DIO_enumOutputLow,
	DIO_enumOutputLow,
	DIO_enumOutputLow,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_PU,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI,
	DIO_enumInput_HI
};


#endif //POST_CONFIG
