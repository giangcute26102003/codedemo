#include<stdio.h>
int main()
{
	unsigned long t;
	scanf("%u",&t);
	unsigned long gio = (unsigned long)t/3600;
	int phut = (int)(t-gio*3600)/60;
	int giay = t - (3600*gio) - (phut*60);
	printf("%ld gio %d phut %d giay",gio,phut,giay);
    
	
}
