#include <xc.h>
#include "XC8.h"

#define LED LATA4
#define motorpin1 LATB0 //pin 2 of L293D
#define motorpin2 LATB1 //pin 7 of L293D
#define motorpin3 LATB2 //pin 10 of L293D
#define motorpin4 LATB3 //pin 15 of L293D
#define enablepinA LATB4 ////pin 1 of L293D
#define enablepinB LATB5 ////pin 9 of L293D

#define XTAL_FREQ 8000000/64
#define Baud_value (((float)(XTAL_FREQ)/(float)baud_rate)-1)

void Bluetooth_Init(long);
void MSdelay(unsigned int val);
char get_char();

void Bluetooth_Init(long baud_rate)
{
float temp; 
ANSELC=0;
TRISC6=1;	
TRISC7=1;	
temp = Baud_value;
SPBRG = (int)temp;	
TXSTA=0x20;	
RCSTA=0x90;	
}

char get_char()
{
 while(RCIF==0) /*wait for receive interrupt flag*/
 {      
 
 }
 return(RCREG);	/*receive data is stored in RCREG register and return to main program */
}


void delay(unsigned int val)
{
unsigned int i,j; 
for(i=0;i<=val;i++)
for(j=0;j<100;j++);
}
 
void main()
{

OSCCON=0x62;	 

char data;

ANSELA=0;
TRISA = 0;
ANSELB=0;
TRISB = 0;
   
Bluetooth_Init(9600);
delay(50);

enablepinA = 1;
enablepinB = 1;


while(1)
{
data = get_char();

if(data =='1')
{
LED = 1;
}
if(data =='5')
{
LED = 0;
}




else if(data =='2')
{
motorpin1 = 0;
motorpin2 = 1;
motorpin3 = 0;
motorpin4 = 1;
delay(200);
}
else if(data =='6')
{
motorpin1 = 0;
motorpin2 = 0;
motorpin3 = 1;
motorpin4 = 0;
delay(200);
}
else if(data =='4')
{
motorpin1 = 1;
motorpin2 = 0;
motorpin3 = 0;
motorpin4 = 0;
delay(200);
}
else if(data =='8')
{
motorpin1 = 1;
motorpin2 = 0;
motorpin3 = 1;
motorpin4 = 0;
delay(200);
}
else if(data =='0')
{
motorpin1 = 0;
motorpin2 = 0;
motorpin3 = 0;
motorpin4 = 0;
delay(200);
}
else if(data =='9')
{
motorpin1 = 1;
motorpin2 = 0;
motorpin3 = 0;
motorpin4 = 1;
delay(200);
}
delay(200);
}
}
