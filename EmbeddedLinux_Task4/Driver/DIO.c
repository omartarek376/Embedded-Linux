#include <stddef.h>
#include "DIO.h"


DIO_enumError_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t* Add_Pu8PinValue)
{
	DIO_enumError_t Ret_enumErrorStatus = DIO_enumNOK;
	if(Copy_enumPortNum > DIO_enumPortD)
	{
		return Ret_enumErrorStatus = DIO_enumWrongPort;
	}
	
	else if (Copy_enumPinNum > DIO_enumPin7)
	{
		return Ret_enumErrorStatus = DIO_enumWrongPin;
	}
	
	else if (Add_Pu8PinValue == NULL)
	{
		return Ret_enumErrorStatus = DIO_enumNullPointer;
	}
	
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			if(GET_BIT(PINA,Copy_enumPinNum))
			{
				*Add_Pu8PinValue = DIO_enumLogicHigh;
			}
			else
			{
				*Add_Pu8PinValue = DIO_enumLogicLow;
			}
			break;
			
			case DIO_enumPortB:
			if(GET_BIT(PINB,Copy_enumPinNum))
			{
				*Add_Pu8PinValue = DIO_enumLogicHigh;
			}
			else
			{
				*Add_Pu8PinValue = DIO_enumLogicLow;
			}
			break;
			
			case DIO_enumPortC:
			if(GET_BIT(PINC,Copy_enumPinNum))
			{
				*Add_Pu8PinValue = DIO_enumLogicHigh;
			}
			else
			{
				*Add_Pu8PinValue = DIO_enumLogicLow;
			}
			break;
			
			case DIO_enumPortD:
			if(GET_BIT(PIND,Copy_enumPinNum))
			{
				*Add_Pu8PinValue = DIO_enumLogicHigh;
			}
			else
			{
				*Add_Pu8PinValue = DIO_enumLogicLow;
			}
			break;
		}
	}
	return Ret_enumErrorStatus;
}





DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t Ret_enumErrorStatus = DIO_enumNOK;
	if(Copy_enumPortNum > DIO_enumPortD)
	{
		return Ret_enumErrorStatus = DIO_enumWrongPort;
	}
	
	else if (Copy_enumLogicState > DIO_enumLogicHigh)
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else if (DDRA > 0x00)				/*in case the user attempts to write on a input pin by mistake*/
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else if (DDRB > 0x00)				/*in case the user attempts to write on a input pin by mistake*/
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else if (DDRC > 0x00)				/*in case the user attempts to write on a input pin by mistake*/
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else if (DDRD > 0x00)				/*in case the user attempts to write on a input pin by mistake*/
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				PORTA = 0xff;
			}
			
			else
			{
				PORTA = 0x00;
			}
			break;
			
			case DIO_enumPortB:
			if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				PORTB = 0xff;
			}
			
			else
			{
				PORTB = 0x00;
			}
			break;
			
			case DIO_enumPortC:
			if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				PORTC = 0xff;
			}
			
			else
			{
				PORTC = 0x00;
			}
			break;
			
			case DIO_enumPortD:
			if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				PORTD = 0xff;
			}
			
			else
			{
				PORTD = 0x00;
			}
			break;
		}
	}
	return Ret_enumErrorStatus;
}




DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPins_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState)
{
	DIO_enumError_t Ret_enumErrorStatus = DIO_enumNOK;
	if(Copy_enumPortNum > DIO_enumPortD)
	{
		return Ret_enumErrorStatus = DIO_enumWrongPort;
	}
	
	else if (Copy_enumPinNum > DIO_enumPin7)
	{
		return Ret_enumErrorStatus = DIO_enumWrongPin;
	}
	
	else if (Copy_enumLogicState > DIO_enumLogicHigh)
	{
		return Ret_enumErrorStatus = DIO_enumWrongConfig;
	}
	
	else
	{
		Ret_enumErrorStatus = DIO_enumOk;
		switch(Copy_enumPortNum)
		{
			case DIO_enumPortA:
			
			
			if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				SET_BIT(PORTA,Copy_enumPinNum);
			}
			else
			{
				CLR_BIT(PORTA,Copy_enumPinNum);
			}
			break;
			
			case DIO_enumPortB:
			
			if(GET_BIT(DDRB,Copy_enumPinNum) == 0)   /*in case the user attempts to write on a input pin by mistake*/
			{
				return Ret_enumErrorStatus = DIO_enumWrongConfig;
			}
			
			else if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				SET_BIT(PORTB,Copy_enumPinNum);
			}
			else
			{
				CLR_BIT(PORTB,Copy_enumPinNum);
			}
			break;
			
			case DIO_enumPortC:
			
			if(GET_BIT(DDRC,Copy_enumPinNum) == 0)   /*in case the user attempts to write on a input pin by mistake*/
			{
				return Ret_enumErrorStatus = DIO_enumWrongConfig;
			}
			
			else if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				SET_BIT(PORTC,Copy_enumPinNum);
			}
			else
			{
				CLR_BIT(PORTC,Copy_enumPinNum);
			}
			break;
			
			case DIO_enumPortD:
			
			if(GET_BIT(DDRD,Copy_enumPinNum) == 0)   /*in case the user attempts to write on a input pin by mistake*/
			{
				return Ret_enumErrorStatus = DIO_enumWrongConfig;
			}
			
			else if (Copy_enumLogicState == DIO_enumLogicHigh)
			{
				SET_BIT(PORTD,Copy_enumPinNum);
			}
			else
			{
				CLR_BIT(PORTD,Copy_enumPinNum);
			}
			break;
		}
	}
	return Ret_enumErrorStatus;
}


void delay_ms(unsigned int milliseconds) {

	for (unsigned int i = 0; i < milliseconds; ++i) {
		for (unsigned int j = 0; j < 100; ++j) {
			asm volatile("nop");
		}
	}
}

