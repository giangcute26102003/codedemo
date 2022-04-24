#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x1,x2, delta;
	printf("    PHUON TRINH BAC 2\n");
	printf("nhap a, b , c =");scanf("%d%d%d",&a,&b,&c);
	printf("\n%dX2 + %dx + %d",a,b,c);
	delta=(b*b) -(4*a*c);
	if (delta<0){printf("\nvo nghiem");
	}
	if(delta == 0){	
	x1=-b/(2*a);
	printf("\nnghiem kep = %f",x1);
	}
	if (delta>0){
		x1=(-b+ sqrt(delta))/(2*a);
		x2=(-b- sqrt(delta))/(2*a);
		printf("\n x1 , x2  = %f %f ",x1,x2);
	}
	return 0;
	
}
