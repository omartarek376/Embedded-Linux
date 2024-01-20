#ifndef PORT_H_
#define PORT_H_


#include "PORT_Config.h"

/*
 * Description :
 * Setup the direction of the required pin from the options of (DIO_enumOutput, DIO_enumInputInternalPullUp, DIO_enumExInputExternalPullDown)
 * If the input port number or pin number are not correct, The function will not handle the request and return an Error.
 */
void PORT_Init();

#ifdef POST_CONFIG
extern DIO_enumOptions_t DIO_Pin_Cfg[PINS_PER_PORT * NUM_PORTS];

#endif //POST_CONFIG

#endif //PORT_H_ 
