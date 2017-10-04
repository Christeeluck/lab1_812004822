/*lab1 prelab code Christopher Teelucksingh 812004822*/
#include <p18f452.h>

#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main (void)
{
    //test//
    int a;
    a=1;
   
    TRISB=0;
    while (a<= 15)
    { 
        PORTB= a;
        a++;
      }
    return (0);
}
