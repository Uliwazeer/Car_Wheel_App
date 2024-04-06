
#ifndef MEMMAP_H_
#define MEMMAP_H_

/********************** UTIlS **********************************************/


/*********************** Macro Func *******************************/
#define SET_BIT(reg,bit)				(reg|=(1<<(bit)))
#define CLR_BIT(reg,bit)				(reg&=(~(1<<(bit))))
#define	READ_BIT(reg,bit)				((reg>>(bit))&0x01)
#define TOGGLE_BIT(reg,bit)				(reg^=(1<<(bit)))
#define WRITE_BIT_VAL(reg,bit,val)		(reg&=~(1<<(bit))); \
(reg|=(val<<(bit)))


/*********************** DIO REGISTERS *************************************/
#define DDRA		(*(volatile unsigned char *)0x3A)
#define PORTA		(*(volatile unsigned char *)0x3B)
#define PINA		(*(volatile const unsigned char *)0x39)

#define DDRB		(*(volatile unsigned char *)0x37)
#define PORTB		(*(volatile unsigned char *)0x38)
#define PINB		(*(volatile const unsigned char *)0x36)

#define DDRC		(*(volatile unsigned char *)0x34)
#define PORTC		(*(volatile unsigned char *)0x35)
#define PINC		(*(volatile const unsigned char *)0x33)

#define DDRD		(*(volatile unsigned char *)0x31)
#define PORTD		(*(volatile unsigned char *)0x32)
#define PIND		(*(volatile const unsigned char *)0x30)

/****************************************************************************/





#endif /* MEMMAP_H_ */