#include<stdio.h>
int main(){
	float a,b,c;
	printf("KIEM TRA 3 CANH CUA TAM GIAC\n");
	printf(" 3 canh a ,b ,c lan luot la : ");
	scanf("%f%f%f",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a)){
		printf(" a b c la 3 canh cua 1 tam giac ");
		if(a==b&&b==c) printf("va la tam giac deu ");
		if(a==b||b==c||a==c){
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b + c*c ==a*a) printf(" va la tam giac vuong can");
			else printf("va la tam giac can ");
			
			}
		if(a*a+b*b==c*c||a*a+c*c==b*b||b*b + c*c ==a*a) printf(" va la tam giac vuong");
	}
	else printf(" khong phai 1 tam giac");
}

