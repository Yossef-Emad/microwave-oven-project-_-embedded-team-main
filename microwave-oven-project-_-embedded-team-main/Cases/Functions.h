#ifndef Functions_H
#define Functions_H
#include "Std_INT.h"
#include "Gpio.h"
#include "delay.h"


extern char O[4];
extern char y,m,n,z;
extern char temp;


enum states { initial_state = 1 , choosing_state , popcorn_state, beef_state, chicken_state, setTime_state, cooking_state, puase_state, stop_state, done_state } ;
int super_timer(u8 min,u8 mmin,u8 sec,u8 msec);
                         

// call RGB_BLINK() to blink the RGB array
void RGB_BLINK();                           
  
  
// call RGB_FlASH() to Flash the RGB array 3 times
void RGB_FLASH();    


void Error_msg1();

void Error_msg2();


#endif
