#include<stdio.h>
#include<math.h>
int main(){
	int i;
	int d=0;
	int a,b;
	scanf("%d",&a);
	b=(int)sqrt(a);
	for(i=2;i<=b;i++){
	if(a % i == 0){
		
		d=d+1;
		break;
	}
	}
if(d==0){
		printf(" la so nguyen to");
	}
if(d==1) {
		printf("khong la so nguyen to");
	}
}


