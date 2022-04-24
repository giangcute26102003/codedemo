#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
int a,b;
int c=1;
printf ("nhap so thu nhat ");
scanf("%d",&a);
printf ("nhap so thu hai ");
scanf("%d",&b);
int d;

for(c=1;c<=a;c=c+1){
	if((a%c==0)&&(b%c==0)){
		d=c;
	
	}
	}
	printf("%d",d);
}
