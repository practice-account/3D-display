/*
 * 2D DISPLAY.c
 *
 * Created: 31-05-2018 03:55:17
 * Author : ANUBHAV
 */ 

#include <avr/io.h>
#include <util/delay.h >
#include <math.h>

void light(int x,int y){
	     int a,b,c,d;
		  
		 b=x%2;
		 x=x/2;
		 a=x%2;
		 d=y%2;
		 y=y/2;
		 c=y%2;
		 
		 PORTA=(a<<PA0)|(b<<PA1)|(c<<PA2)|(d<<PA3);
	
}


int main(void)
{
    DDRA=0xFF;
    while (1) 
    { 
    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

        light(i,j);
        _delay_us(2);

          }
       }
    }
}



