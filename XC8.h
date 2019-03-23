// PIC18F45K50 Configuration Bit Settings

// 'C' source line config statements

#include <xc.h>

// CONFIG1L
#pragma config PLLSEL = PLL4X
#pragma config CFGPLLEN = ON
#pragma config CPUDIV = NOCLKDIV
#pragma config LS48MHZ = SYS24X4

// CONFIG1H
#pragma config FOSC = INTOSCIO // Oscillator Selection (Internal oscillator)
#pragma config PCLKEN = OFF
#pragma config FCMEN = OFF
#pragma config IESO = OFF

// CONFIG2L
#pragma config nPWRTEN = OFF
#pragma config BOREN = OFF
#pragma config BORV = 190
#pragma config nLPBOR = OFF

// CONFIG2H
#pragma config WDTEN = OFF
#pragma config WDTPS = 32768

// CONFIG3H
#pragma config CCP2MX = RC1
#pragma config PBADEN = ON
#pragma config T3CMX = RC0
#pragma config SDOMX = RB3
#pragma config MCLRE = OFF

// CONFIG4L
#pragma config STVREN = ON
#pragma config LVP = ON
#pragma config ICPRT = OFF
#pragma config XINST = OFF

// CONFIG5L
#pragma config CP0 = OFF
#pragma config CP1 = OFF
#pragma config CP2 = OFF
#pragma config CP3 = OFF

// CONFIG5H
#pragma config CPB = OFF
#pragma config CPD = OFF

// CONFIG6L
#pragma config WRT0 = OFF
#pragma config WRT1 = OFF
#pragma config WRT2 = OFF
#pragma config WRT3 = OFF

// CONFIG6H
#pragma config WRTC = OFF
#pragma config WRTB = OFF
#pragma config WRTD = OFF

// CONFIG7L
#pragma config EBTR0 = OFF
#pragma config EBTR1 = OFF
#pragma config EBTR2 = OFF
#pragma config EBTR3 = OFF

// CONFIG7H
#pragma config EBTRB = OFF
