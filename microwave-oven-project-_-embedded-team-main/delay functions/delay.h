#ifndef delay_H
#define delay_H
#include "Std_INT.h"


// to initialize the SysTick Timer
void SysTick_Init();
  
//to make delay one millisecond
void delay_onems(); 

//to make delay one microsecond
void delay_oneus();

// call delay_ms(*time*)
void delay_ms(unsigned int x);

// call delay_us(*time*)
void delay_us(unsigned int y);

/*
void delay_m_s(unsigned int x);

void delay_o();
*/
int delay_m_s(unsigned int x);

// Function to stop count down when switch is pressed
int delay_portA_interrupt(unsigned int x);


	
#endif
