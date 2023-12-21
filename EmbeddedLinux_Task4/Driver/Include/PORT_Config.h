#ifndef PORT_CONFIG_H
#define PORT_CONFIG_H

// Define the number of ports and pins based on user requirements

#define NUM_PORTS 4 
#define PINS_PER_PORT 8  

// choose which option you want to use and comment out the other one

//#define PRE_CONFIG 0
#define POST_CONFIG 1

#ifdef PRE_CONFIG

// DO not change these


#define INPUT_PU 0
#define INPUT_HIGH 1
#define OUTPUT_HIGH 2
#define OUTPUT_LOW 3


// Define the config of the pin based on user requirements

/** Here are the main options to choose from:
* INPUT_PU				for input with internal pull up
* INPUT_HIGH			for input without internal pull up
* OUTPUT_HIGH			for output set to high
* OUTPUT_LOW			for output set to low
this was created initially for the atmega32 so feel free to either leave out or comment the pins that are not on your target board
*/
#define DIO_Pin0 OUTPUT_LOW

#define DIO_Pin1 OUTPUT_LOW

#define DIO_Pin2 OUTPUT_LOW

#define DIO_Pin3 OUTPUT_LOW

#define DIO_Pin4 OUTPUT_HIGH

#define DIO_Pin5 OUTPUT_HIGH

#define DIO_Pin6 OUTPUT_HIGH

#define DIO_Pin7 OUTPUT_HIGH

#define DIO_Pin8 OUTPUT_HIGH

#define DIO_Pin9 OUTPUT_HIGH

#define DIO_Pin10 OUTPUT_HIGH

#define DIO_Pin11 OUTPUT_HIGH

#define DIO_Pin12 INPUT_PU

#define DIO_Pin13 OUTPUT_HIGH

#define DIO_Pin14 OUTPUT_HIGH

#define DIO_Pin15 OUTPUT_HIGH

#define DIO_Pin16 OUTPUT_HIGH

#define DIO_Pin17 OUTPUT_HIGH

#define DIO_Pin18 OUTPUT_HIGH

#define DIO_Pin19 OUTPUT_HIGH

#define DIO_Pin20 OUTPUT_HIGH

#define DIO_Pin21 OUTPUT_HIGH

#define DIO_Pin22 OUTPUT_HIGH

#define DIO_Pin23 OUTPUT_HIGH

#define DIO_Pin24 OUTPUT_HIGH

#define DIO_Pin25 OUTPUT_HIGH

#define DIO_Pin26 OUTPUT_HIGH

#define DIO_Pin27 OUTPUT_HIGH

#define DIO_Pin28 OUTPUT_HIGH

#define DIO_Pin29 OUTPUT_HIGH

#define DIO_Pin30 OUTPUT_HIGH

#define DIO_Pin31 OUTPUT_HIGH

#define DIO_Pin32 OUTPUT_HIGH

#endif // PRE_CONFIG

//Enums needed for the post config to work please don't touch them

#ifdef POST_CONFIG 

typedef enum{
	DIO_enumInput_PU,
	DIO_enumInput_HI,
	DIO_enumOutputHigh,
	DIO_enumOutputLow
}DIO_enumOptions_t;

typedef enum{
	PORT_enumPORTA,
	PORT_enumPORTB,
	PORT_enumPORTC,
	PORT_enumPORTD
}PORT_enumPortID_t;

#endif

#endif // PORT_CONFIG_H
