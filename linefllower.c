#inclde<stdio.h>
#include<reg52.h>

#define stop=0x00;
#define st=0x0a;
#define lt=0x06;
#define rt=0x09;

unsigned int a;
void main()
{
	while(1)
	{
	a=P1&0x0c;
	if(a==0x0c)
		P2=st;
	if(a==0x04)
		P2=lt;
	if(a=0x08)
		P2=rt;
	if(a==0x00)
		P2=stop;
}
	}