#include "PORT_Config.h"
#include "Registers.h"
#include "Bit_Math.h"

#define PORT_Low 0
#define PORT_High 1

/******************************************************************************************************************************************************************************************
******													Pre configuration section																								***********
******************************************************************************************************************************************************************************************/

#ifdef PRE_CONFIG

	
#define HELPER(b7,b6,b5,b4,b3,b2,b1,b0) (0b##b7##b6##b5##b4##b3##b2##b1##b0)
#define CONCAT(p7,p6,p5,p4,p3,p2,p1,p0) HELPER(p7,p6,p5,p4,p3,p2,p1,p0)


	#if (DIO_Pin0 == INPUT_PU)							//setting of the first pin
	
		#define Pin0_DIR PORT_Low
		#define Pin0_PORT PORT_High
	

	#elif (DIO_Pin0 == INPUT_HIGH)
	
		#define Pin0_DIR PORT_Low
		#define Pin0_PORT PORT_Low
	

	#elif (DIO_Pin0 == OUTPUT_HIGH)
	
		#define Pin0_DIR PORT_High
		#define Pin0_PORT PORT_High
	

	#elif (DIO_Pin0 == OUTPUT_LOW)
	
		#define Pin0_DIR PORT_High
		#define Pin0_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	
	#endif



	#if (DIO_Pin1 == INPUT_PU)							//setting of the second pin
	
		#define Pin1_DIR PORT_Low
		#define Pin1_PORT PORT_High
	

	#elif (DIO_Pin1 == INPUT_HIGH)
	
		#define Pin1_DIR PORT_Low
		#define Pin1_PORT PORT_Low
	

	#elif (DIO_Pin1 == OUTPUT_HIGH)
	
		#define Pin1_DIR PORT_High
		#define Pin1_PORT PORT_High
	

	#elif (DIO_Pin1 == OUTPUT_LOW)
	
		#define Pin1_DIR PORT_High
		#define Pin1_PORT PORT_Low
	
	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	
	#if (DIO_Pin2 == INPUT_PU)							//setting of the third pin
	
		#define Pin2_DIR PORT_Low
		#define Pin2_PORT PORT_High
	

	#elif (DIO_Pin2 == INPUT_HIGH)
	
		#define Pin2_DIR PORT_Low
		#define Pin2_PORT PORT_Low
	

	#elif (DIO_Pin2 == OUTPUT_HIGH)
	
		#define Pin2_DIR PORT_High
		#define Pin2_PORT PORT_High
	

	#elif (DIO_Pin2 == OUTPUT_LOW)
	
		#define Pin2_DIR PORT_High
		#define Pin2_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin3 == INPUT_PU)							//setting of the forth pin
	
		#define Pin3_DIR PORT_Low
		#define Pin3_PORT PORT_High
	

	#elif (DIO_Pin3 == INPUT_HIGH)
	
		#define Pin3_DIR PORT_Low
		#define Pin3_PORT PORT_Low
	

	#elif (DIO_Pin3 == OUTPUT_HIGH)
	
		#define Pin3_DIR PORT_High
		#define Pin3_PORT PORT_High
	

	#elif (DIO_Pin3 == OUTPUT_LOW)
	
		#define Pin3_DIR PORT_High
		#define Pin3_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	
	#if (DIO_Pin4 == INPUT_PU)							//setting of the fifth pin
	
		#define Pin4_DIR PORT_Low
		#define Pin4_PORT PORT_High
	

	#elif (DIO_Pin4 == INPUT_HIGH)
	
		#define Pin4_DIR PORT_Low
		#define Pin4_PORT PORT_Low
	

	#elif (DIO_Pin4 == OUTPUT_HIGH)
	
		#define Pin4_DIR PORT_High
		#define Pin4_PORT PORT_High
	

	#elif (DIO_Pin4 == OUTPUT_LOW)
	
		#define Pin4_DIR PORT_High
		#define Pin4_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	
	#if (DIO_Pin5 == INPUT_PU)							//setting of the sixth pin
	
		#define Pin5_DIR PORT_Low
		#define Pin5_PORT PORT_High
	

	#elif (DIO_Pin5 == INPUT_HIGH)
	
		#define Pin5_DIR PORT_Low
		#define Pin5_PORT PORT_Low
	

	#elif (DIO_Pin5 == OUTPUT_HIGH)
	
		#define Pin5_DIR PORT_High
		#define Pin5_PORT PORT_High
	

	#elif (DIO_Pin5 == OUTPUT_LOW)
	
		#define Pin5_DIR PORT_High
		#define Pin5_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin6 == INPUT_PU)							//setting of the seventh pin
	
		#define Pin6_DIR PORT_Low
		#define Pin6_PORT PORT_High
	

	#elif (DIO_Pin6 == INPUT_HIGH)
	
		#define Pin6_DIR PORT_Low
		#define Pin6_PORT PORT_Low
	

	#elif (DIO_Pin6 == OUTPUT_HIGH)
	
		#define Pin6_DIR PORT_High
		#define Pin6_PORT PORT_High
	

	#elif (DIO_Pin6 == OUTPUT_LOW)
	
		#define Pin6_DIR PORT_High
		#define Pin6_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin7 == INPUT_PU)							//setting of the 8th pin
	
		#define Pin7_DIR PORT_Low
		#define Pin7_PORT PORT_High
	

	#elif (DIO_Pin7 == INPUT_HIGH)
	
		#define Pin7_DIR PORT_Low
		#define Pin7_PORT PORT_Low
	

	#elif (DIO_Pin7 == OUTPUT_HIGH)
	
		#define Pin7_DIR PORT_High
		#define Pin7_PORT PORT_High
	

	#elif (DIO_Pin7 == OUTPUT_LOW)
	
		#define Pin7_DIR PORT_High
		#define Pin7_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin8 == INPUT_PU)							//setting of the 9th pin
	
		#define Pin8_DIR PORT_Low
		#define Pin8_PORT PORT_High
	

	#elif (DIO_Pin8 == INPUT_HIGH)
	
		#define Pin8_DIR PORT_Low
		#define Pin8_PORT PORT_Low
	

	#elif (DIO_Pin8 == OUTPUT_HIGH)
	
		#define Pin8_DIR PORT_High
		#define Pin8_PORT PORT_High
	

	#elif (DIO_Pin8 == OUTPUT_LOW)
	
		#define Pin8_DIR PORT_High
		#define Pin8_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin9 == INPUT_PU)							//setting of the 10th pin
	
		#define Pin9_DIR PORT_Low
		#define Pin9_PORT PORT_High
	

	#elif (DIO_Pin9 == INPUT_HIGH)
	
		#define Pin9_DIR PORT_Low
		#define Pin9_PORT PORT_Low
	

	#elif (DIO_Pin9 == OUTPUT_HIGH)
	
		#define Pin9_DIR PORT_High
		#define Pin9_PORT PORT_High
	

	#elif (DIO_Pin9 == OUTPUT_LOW)
	
		#define Pin9_DIR PORT_High
		#define Pin9_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin10 == INPUT_PU)							//setting of the 11th pin
	
		#define Pin10_DIR PORT_Low
		#define Pin10_PORT PORT_High
	

	#elif (DIO_Pin10 == INPUT_HIGH)
	
		#define Pin10_DIR PORT_Low
		#define Pin10_PORT PORT_Low
	

	#elif (DIO_Pin10 == OUTPUT_HIGH)
	
		#define Pin10_DIR PORT_High
		#define Pin10_PORT PORT_High
	

	#elif (DIO_Pin10 == OUTPUT_LOW)
	
		#define Pin10_DIR PORT_High
		#define Pin10_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin11 == INPUT_PU)							//setting of the 12th pin
	
		#define Pin11_DIR PORT_Low
		#define Pin11_PORT PORT_High
	

	#elif (DIO_Pin11 == INPUT_HIGH)
	
		#define Pin11_DIR PORT_Low
		#define Pin11_PORT PORT_Low
	

	#elif (DIO_Pin11 == OUTPUT_HIGH)
	
		#define Pin11_DIR PORT_High
		#define Pin11_PORT PORT_High
	

	#elif (DIO_Pin11 == OUTPUT_LOW)
	
		#define Pin11_DIR PORT_High
		#define Pin11_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin12 == INPUT_PU)							//setting of the 13th pin
	
		#define Pin12_DIR PORT_Low
		#define Pin12_PORT PORT_High
	

	#elif (DIO_Pin12 == INPUT_HIGH)
	
		#define Pin12_DIR PORT_Low
		#define Pin12_PORT PORT_Low
	

	#elif (DIO_Pin12 == OUTPUT_HIGH)
	
		#define Pin12_DIR PORT_High
		#define Pin12_PORT PORT_High
	

	#elif (DIO_Pin12 == OUTPUT_LOW)
	
		#define Pin12_DIR PORT_High
		#define Pin12_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin13 == INPUT_PU)							//setting of the 14th pin
	
		#define Pin13_DIR PORT_Low
		#define Pin13_PORT PORT_High
	

	#elif (DIO_Pin13 == INPUT_HIGH)
	
		#define Pin13_DIR PORT_Low
		#define Pin13_PORT PORT_Low
	

	#elif (DIO_Pin13 == OUTPUT_HIGH)
	
		#define Pin13_DIR PORT_High
		#define Pin13_PORT PORT_High
	

	#elif (DIO_Pin13 == OUTPUT_LOW)
	
		#define Pin13_DIR PORT_High
		#define Pin13_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin14 == INPUT_PU)							//setting of the 15th pin
	
		#define Pin14_DIR PORT_Low
		#define Pin14_PORT PORT_High
	

	#elif (DIO_Pin14 == INPUT_HIGH)
	
		#define Pin14_DIR PORT_Low
		#define Pin14_PORT PORT_Low
	

	#elif (DIO_Pin14 == OUTPUT_HIGH)
	
		#define Pin14_DIR PORT_High
		#define Pin14_PORT PORT_High
	

	#elif (DIO_Pin14 == OUTPUT_LOW)
	
		#define Pin14_DIR PORT_High
		#define Pin14_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	
	
	
	#if (DIO_Pin15 == INPUT_PU)							//setting of the 16th pin
	
		#define Pin15_DIR PORT_Low
		#define Pin15_PORT PORT_High
	

	#elif (DIO_Pin15 == INPUT_HIGH)
	
		#define Pin15_DIR PORT_Low
		#define Pin15_PORT PORT_Low
	

	#elif (DIO_Pin15 == OUTPUT_HIGH)
	
		#define Pin15_DIR PORT_High
		#define Pin15_PORT PORT_High
	

	#elif (DIO_Pin15 == OUTPUT_LOW)
	
		#define Pin15_DIR PORT_High
		#define Pin15_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
	
	#if (DIO_Pin16 == INPUT_PU)							//setting of the 17th pin
	
		#define Pin16_DIR PORT_Low
		#define Pin16_PORT PORT_High
	

	#elif (DIO_Pin16 == INPUT_HIGH)
	
		#define Pin16_DIR PORT_Low
		#define Pin16_PORT PORT_Low
	

	#elif (DIO_Pin16 == OUTPUT_HIGH)
	
		#define Pin16_DIR PORT_High
		#define Pin16_PORT PORT_High
	

	#elif (DIO_Pin16 == OUTPUT_LOW)
	
		#define Pin16_DIR PORT_High
		#define Pin16_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin17 == INPUT_PU)							//setting of the 18th pin
	
		#define Pin17_DIR PORT_Low
		#define Pin17_PORT PORT_High
	

	#elif (DIO_Pin17 == INPUT_HIGH)
	
		#define Pin17_DIR PORT_Low
		#define Pin17_PORT PORT_Low
	

	#elif (DIO_Pin17 == OUTPUT_HIGH)
	
		#define Pin17_DIR PORT_High
		#define Pin17_PORT PORT_High
	

	#elif (DIO_Pin17 == OUTPUT_LOW)
	
		#define Pin17_DIR PORT_High
		#define Pin17_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin18 == INPUT_PU)							//setting of the 19th pin
	
		#define Pin18_DIR PORT_Low
		#define Pin18_PORT PORT_High
	

	#elif (DIO_Pin18 == INPUT_HIGH)
	
		#define Pin18_DIR PORT_Low
		#define Pin18_PORT PORT_Low
	

	#elif (DIO_Pin18 == OUTPUT_HIGH)
	
		#define Pin18_DIR PORT_High
		#define Pin18_PORT PORT_High
	

	#elif (DIO_Pin18 == OUTPUT_LOW)
	
		#define Pin18_DIR PORT_High
		#define Pin18_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin19 == INPUT_PU)							//setting of the 20th pin
	
		#define Pin19_DIR PORT_Low
		#define Pin19_PORT PORT_High
	

	#elif (DIO_Pin19 == INPUT_HIGH)
	
		#define Pin19_DIR PORT_Low
		#define Pin19_PORT PORT_Low
	

	#elif (DIO_Pin19 == OUTPUT_HIGH)
	
		#define Pin19_DIR PORT_High
		#define Pin19_PORT PORT_High
	

	#elif (DIO_Pin19 == OUTPUT_LOW)
	
		#define Pin19_DIR PORT_High
		#define Pin19_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin20 == INPUT_PU)							//setting of the 21th pin
	
		#define Pin20_DIR PORT_Low
		#define Pin20_PORT PORT_High
	

	#elif (DIO_Pin20 == INPUT_HIGH)
	
		#define Pin20_DIR PORT_Low
		#define Pin20_PORT PORT_Low
	

	#elif (DIO_Pin20 == OUTPUT_HIGH)
	
		#define Pin20_DIR PORT_High
		#define Pin20_PORT PORT_High
	

	#elif (DIO_Pin20 == OUTPUT_LOW)
	
		#define Pin20_DIR PORT_High
		#define Pin20_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin21 == INPUT_PU)							//setting of the 22th pin
	
		#define Pin21_DIR PORT_Low
		#define Pin21_PORT PORT_High
	

	#elif (DIO_Pin21 == INPUT_HIGH)
	
		#define Pin21_DIR PORT_Low
		#define Pin21_PORT PORT_Low
	

	#elif (DIO_Pin21 == OUTPUT_HIGH)
	
		#define Pin21_DIR PORT_High
		#define Pin21_PORT PORT_High
	

	#elif (DIO_Pin21 == OUTPUT_LOW)
	
		#define Pin21_DIR PORT_High
		#define Pin21_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin22 == INPUT_PU)							//setting of the 23th pin
	
		#define Pin22_DIR PORT_Low
		#define Pin22_PORT PORT_High
	

	#elif (DIO_Pin22 == INPUT_HIGH)
	
		#define Pin22_DIR PORT_Low
		#define Pin22_PORT PORT_Low
	

	#elif (DIO_Pin22 == OUTPUT_HIGH)
	
		#define Pin22_DIR PORT_High
		#define Pin22_PORT PORT_High
	

	#elif (DIO_Pin22 == OUTPUT_LOW)
	
		#define Pin22_DIR PORT_High
		#define Pin22_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin23 == INPUT_PU)							//setting of the 24th pin
	
		#define Pin23_DIR PORT_Low
		#define Pin23_PORT PORT_High
	

	#elif (DIO_Pin23 == INPUT_HIGH)
	
		#define Pin23_DIR PORT_Low
		#define Pin23_PORT PORT_Low
	

	#elif (DIO_Pin23 == OUTPUT_HIGH)
	
		#define Pin23_DIR PORT_High
		#define Pin23_PORT PORT_High
	

	#elif (DIO_Pin23 == OUTPUT_LOW)
	
		#define Pin23_DIR PORT_High
		#define Pin23_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
						
	#if (DIO_Pin24 == INPUT_PU)							//setting of the 25th pin
	
		#define Pin24_DIR PORT_Low
		#define Pin24_PORT PORT_High
	

	#elif (DIO_Pin24 == INPUT_HIGH)
	
		#define Pin24_DIR PORT_Low
		#define Pin24_PORT PORT_Low
	

	#elif (DIO_Pin24 == OUTPUT_HIGH)
	
		#define Pin24_DIR PORT_High
		#define Pin24_PORT PORT_High
	

	#elif (DIO_Pin24 == OUTPUT_LOW)
	
		#define Pin24_DIR PORT_High
		#define Pin24_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin25 == INPUT_PU)							//setting of the 26th pin
	
		#define Pin25_DIR PORT_Low
		#define Pin25_PORT PORT_High
	

	#elif (DIO_Pin25 == INPUT_HIGH)
	
		#define Pin25_DIR PORT_Low
		#define Pin25_PORT PORT_Low
	

	#elif (DIO_Pin25 == OUTPUT_HIGH)
	
		#define Pin25_DIR PORT_High
		#define Pin25_PORT PORT_High
	

	#elif (DIO_Pin25 == OUTPUT_LOW)
	
		#define Pin25_DIR PORT_High
		#define Pin25_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin26 == INPUT_PU)							//setting of the 27th pin
	
		#define Pin26_DIR PORT_Low
		#define Pin26_PORT PORT_High
	

	#elif (DIO_Pin26 == INPUT_HIGH)
	
		#define Pin26_DIR PORT_Low
		#define Pin26_PORT PORT_Low
	

	#elif (DIO_Pin26 == OUTPUT_HIGH)
	
		#define Pin26_DIR PORT_High
		#define Pin26_PORT PORT_High
	

	#elif (DIO_Pin26 == OUTPUT_LOW)
	
		#define Pin26_DIR PORT_High
		#define Pin26_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin27 == INPUT_PU)							//setting of the 28th pin
	
		#define Pin27_DIR PORT_Low
		#define Pin27_PORT PORT_High
	

	#elif (DIO_Pin27 == INPUT_HIGH)
	
		#define Pin27_DIR PORT_Low
		#define Pin27_PORT PORT_Low
	

	#elif (DIO_Pin27 == OUTPUT_HIGH)
	
		#define Pin27_DIR PORT_High
		#define Pin27_PORT PORT_High
	

	#elif (DIO_Pin27 == OUTPUT_LOW)
	
		#define Pin27_DIR PORT_High
		#define Pin27_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin28 == INPUT_PU)							//setting of the 29th pin
	
		#define Pin28_DIR PORT_Low
		#define Pin28_PORT PORT_High
	

	#elif (DIO_Pin28 == INPUT_HIGH)
	
		#define Pin28_DIR PORT_Low
		#define Pin28_PORT PORT_Low
	

	#elif (DIO_Pin28 == OUTPUT_HIGH)
	
		#define Pin28_DIR PORT_High
		#define Pin28_PORT PORT_High
	

	#elif (DIO_Pin28 == OUTPUT_LOW)
	
		#define Pin28_DIR PORT_High
		#define Pin28_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin29 == INPUT_PU)							//setting of the 30th pin
	
		#define Pin29_DIR PORT_Low
		#define Pin29_PORT PORT_High
	

	#elif (DIO_Pin29 == INPUT_HIGH)
	
		#define Pin29_DIR PORT_Low
		#define Pin29_PORT PORT_Low
	

	#elif (DIO_Pin29 == OUTPUT_HIGH)
	
		#define Pin29_DIR PORT_High
		#define Pin29_PORT PORT_High
	

	#elif (DIO_Pin29 == OUTPUT_LOW)
	
		#define Pin29_DIR PORT_High
		#define Pin29_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin30 == INPUT_PU)							//setting of the 31th pin
	
		#define Pin30_DIR PORT_Low
		#define Pin30_PORT PORT_High
	

	#elif (DIO_Pin30 == INPUT_HIGH)
	
		#define Pin30_DIR PORT_Low
		#define Pin30_PORT PORT_Low
	

	#elif (DIO_Pin30 == OUTPUT_HIGH)
	
		#define Pin30_DIR PORT_High
		#define Pin30_PORT PORT_High
	

	#elif (DIO_Pin30 == OUTPUT_LOW)
	
		#define Pin30_DIR PORT_High
		#define Pin30_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		
		
		
		
	#if (DIO_Pin31 == INPUT_PU)							//setting of the 32th pin
	
		#define Pin31_DIR PORT_Low
		#define Pin31_PORT PORT_High
	

	#elif (DIO_Pin31 == INPUT_HIGH)
	
		#define Pin31_DIR PORT_Low
		#define Pin31_PORT PORT_Low
	

	#elif (DIO_Pin31 == OUTPUT_HIGH)
	
		#define Pin31_DIR PORT_High
		#define Pin31_PORT PORT_High
	

	#elif (DIO_Pin31 == OUTPUT_LOW)
	
		#define Pin31_DIR PORT_High
		#define Pin31_PORT PORT_Low
	

	#else
	
		#error "Invalid configuration"
	

	#endif
		

void PORT_Init()
{
	
DDRA = CONCAT(Pin7_DIR,Pin6_DIR,Pin5_DIR,Pin4_DIR,Pin3_DIR,Pin2_DIR,Pin1_DIR,Pin0_DIR);
PORTA = CONCAT(Pin7_PORT,Pin6_PORT,Pin5_PORT,Pin4_PORT,Pin3_PORT,Pin2_PORT,Pin1_PORT,Pin0_PORT);
	
DDRB = CONCAT(Pin15_DIR,Pin14_DIR,Pin13_DIR,Pin12_DIR,Pin11_DIR,Pin10_DIR,Pin9_DIR,Pin8_DIR);
PORTB = CONCAT(Pin15_PORT,Pin14_PORT,Pin13_PORT,Pin12_PORT,Pin11_PORT,Pin10_PORT,Pin9_PORT,Pin8_PORT);
	
#if (NUM_PORTS >= 3)

	DDRC = CONCAT(Pin23_DIR,Pin22_DIR,Pin21_DIR,Pin20_DIR,Pin19_DIR,Pin18_DIR,Pin17_DIR,Pin16_DIR);
	PORTC = CONCAT(Pin23_PORT,Pin22_PORT,Pin21_PORT,Pin20_PORT,Pin19_PORT,Pin18_PORT,Pin17_PORT,Pin16_PORT);

#endif
	
#if (NUM_PORTS >= 4)

	DDRD = CONCAT(Pin31_DIR,Pin30_DIR,Pin29_DIR,Pin28_DIR,Pin27_DIR,Pin26_DIR,Pin25_DIR,Pin24_DIR);
	PORTD = CONCAT(Pin31_PORT,Pin30_PORT,Pin29_PORT,Pin28_PORT,Pin27_PORT,Pin26_PORT,Pin25_PORT,Pin24_PORT);

#endif

}

#endif //PRE_CONFIG




/******************************************************************************************************************************************************************************************
******													POST configuration section																								***********
******************************************************************************************************************************************************************************************/

#ifdef POST_CONFIG

extern DIO_enumOptions_t DIO_Pin_Cfg[PINS_PER_PORT * NUM_PORTS];

void PORT_Init()
{
	int Total_Pins = NUM_PORTS * PINS_PER_PORT;	
	int Loc_enum_PortNum;
	int Loc_enum_PinNum;
	for (int i = 0; i < Total_Pins ;i++)
	{
		Loc_enum_PortNum = i / 8;
		Loc_enum_PinNum = i % 8;
		switch(Loc_enum_PortNum)
		{
			case PORT_enumPORTA:
			switch(DIO_Pin_Cfg[i])
			{
				case DIO_enumInput_PU:
				CLR_BIT(DDRA,Loc_enum_PinNum);
				SET_BIT(PORTA,Loc_enum_PinNum);
				break;
				
				case DIO_enumInput_HI:
				CLR_BIT(DDRA,Loc_enum_PinNum);
				CLR_BIT(PORTA,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DDRA,Loc_enum_PinNum);
				SET_BIT(PORTA,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputLow:
				SET_BIT(DDRA,Loc_enum_PinNum);
				CLR_BIT(PORTA,Loc_enum_PinNum);
				break;
				
				default:
				/*Do Nothing*/
				break;
			}
			
			
			case PORT_enumPORTB:
			switch(DIO_Pin_Cfg[i])
			{
				case DIO_enumInput_PU:
				CLR_BIT(DDRB,Loc_enum_PinNum);
				SET_BIT(PORTB,Loc_enum_PinNum);
				break;
				
				case DIO_enumInput_HI:
				CLR_BIT(DDRB,Loc_enum_PinNum);
				CLR_BIT(PORTB,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DDRB,Loc_enum_PinNum);
				SET_BIT(PORTB,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputLow:
				SET_BIT(DDRB,Loc_enum_PinNum);
				CLR_BIT(PORTB,Loc_enum_PinNum);
				break;
				
				default:
				/*Do Nothing*/
				break;
			}
			
			
			
			case PORT_enumPORTC:
			switch(DIO_Pin_Cfg[i])
			{
				case DIO_enumInput_PU:
				CLR_BIT(DDRC,Loc_enum_PinNum);
				SET_BIT(PORTC,Loc_enum_PinNum);
				break;
				
				case DIO_enumInput_HI:
				CLR_BIT(DDRC,Loc_enum_PinNum);
				CLR_BIT(PORTC,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DDRC,Loc_enum_PinNum);
				SET_BIT(PORTC,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputLow:
				SET_BIT(DDRC,Loc_enum_PinNum);
				CLR_BIT(PORTC,Loc_enum_PinNum);
				break;
				
				default:
				/*Do Nothing*/
				break;
			}
			
			
			
			
			case PORT_enumPORTD:
			switch(DIO_Pin_Cfg[i])
			{
				case DIO_enumInput_PU:
				CLR_BIT(DDRD,Loc_enum_PinNum);
				SET_BIT(PORTD,Loc_enum_PinNum);
				break;
				
				case DIO_enumInput_HI:
				CLR_BIT(DDRD,Loc_enum_PinNum);
				CLR_BIT(PORTD,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputHigh:
				SET_BIT(DDRD,Loc_enum_PinNum);
				SET_BIT(PORTD,Loc_enum_PinNum);
				break;
				
				case DIO_enumOutputLow:
				SET_BIT(DDRD,Loc_enum_PinNum);
				CLR_BIT(PORTD,Loc_enum_PinNum);
				break;
				
				default:
				/*Do Nothing*/
				break;
			}
			default:
			/*Do Nothing*/
			break;
			
			
		}
	}
}



#endif //POST_CONFIG
