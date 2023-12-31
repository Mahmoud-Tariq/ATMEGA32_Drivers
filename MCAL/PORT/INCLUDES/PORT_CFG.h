/*
 * PORT_CFG.h
 *
 * Created: 10/20/2023 11:57:54 AM
 *  Author: Mahmoud Tariq
 */ 


#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/*PIN MODE OPTIONS
1-   INPUT_PULL_UP
2-   INPUT_FLOATING
3-   OUTPUT_HIGH
4-	 OUTPUT_LOW
*/

/*PORT A PINS INITIAL STATE*/
#define PORT_PINMODE00     INPUT_FLOATING		//PA0
#define PORT_PINMODE01     INPUT_FLOATING		//PA1
#define PORT_PINMODE02     INPUT_FLOATING		//PA2
#define PORT_PINMODE03     INPUT_FLOATING		//PA3
#define PORT_PINMODE04     INPUT_FLOATING		//PA4
#define PORT_PINMODE05     INPUT_FLOATING		//PA5
#define PORT_PINMODE06     INPUT_FLOATING		//PA6
#define PORT_PINMODE07     INPUT_FLOATING		//PA7

/*PORT B PINS INITIAL STATE*/
#define PORT_PINMODE08     INPUT_FLOATING		//PB0
#define PORT_PINMODE09     INPUT_FLOATING		//PB1
#define PORT_PINMODE10     INPUT_FLOATING	    //PB2
#define PORT_PINMODE11     INPUT_FLOATING		//PB3
#define PORT_PINMODE12     INPUT_FLOATING		//PB4
#define PORT_PINMODE13     INPUT_FLOATING		//PB5
#define PORT_PINMODE14     INPUT_FLOATING		//PB6
#define PORT_PINMODE15     INPUT_FLOATING		//PB7
/*PORT C PINS INITIAL STATE*/

#define PORT_PINMODE16     INPUT_FLOATING		//PC0
#define PORT_PINMODE17     INPUT_FLOATING		//PC1
#define PORT_PINMODE18     INPUT_FLOATING		//PC2
#define PORT_PINMODE19     INPUT_FLOATING		//PC3
#define PORT_PINMODE20     INPUT_FLOATING		//PC4
#define PORT_PINMODE21     INPUT_FLOATING	     //PC5
#define PORT_PINMODE22     INPUT_FLOATING	    //PC6
#define PORT_PINMODE23     INPUT_FLOATING		//PC7

/*PORT D PINS INITIAL STATE*/

#define PORT_PINMODE24     INPUT_PULL_UP		//PD0
#define PORT_PINMODE25     INPUT_PULL_UP  		//PD1
#define PORT_PINMODE26     INPUT_PULL_UP  		//PD2
#define PORT_PINMODE27     INPUT_FLOATING		//PD3
#define PORT_PINMODE28     INPUT_FLOATING		//PD4
#define PORT_PINMODE29     INPUT_FLOATING		//PD5
#define PORT_PINMODE30     INPUT_FLOATING		//PD6
#define PORT_PINMODE31     INPUT_FLOATING		//PD7
     



#endif /* PORT_CFG_H_ */