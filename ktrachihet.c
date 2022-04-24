#include<stdio.h>
int main()
{
	int i,d,a,b;
	scanf("%d%d",&a,&b);
	d=a % b;
	for(i=1;i<=d;i++){
		printf("0 ");
		break;
	}
		for(i=d;i>1;i--){
		printf("1 ");
		break;
	}
}
