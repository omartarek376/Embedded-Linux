
#ifndef DIO_REGISTERS_H_
#define DIO_REGISTERS_H

#define DDRA *((volatile char*)0x3A)
#define PORTA *((volatile char*)0x3B)
#define PINA *((volatile char*)0x39)

#define DDRB *((volatile char*)0x37)
#define PORTB *((volatile char*)0x38)
#define PINB *((volatile char*)0x36)

#define DDRC *((volatile char*)0x34)
#define PORTC *((volatile char*)0x35)
#define PINC *((volatile char*)0x33)

#define DDRD *((volatile char*)0x31)
#define PORTD *((volatile char*)0x32)
#define PIND *((volatile char*)0x30)

#endif /*DIO_REGISTERS_H*/