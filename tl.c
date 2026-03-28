#include <reg51.h>
void delay()
{
    int i,j;
    for (i=0;i<=500;i++)
        for (j=0;j<=300;j++);
}
void main()
{
    while (1)
    {
        P0=0x03;// for road 1 and 4 red
        P2=0x0A;// for road 2 and 3 green
        delay();
        P0=(1<<6)+(1<<7);// for road 2 and 3 yellow
        P2=0x00;
        delay();
        P0=0x10;// for road 2 and 3 red
        P2=0x5;// for road 1 and 4 green
        delay();
        P0=(1<<4)+(1<<5);// for road 1 and 4 yellow
        P2=0x00;
        delay();
    }
}