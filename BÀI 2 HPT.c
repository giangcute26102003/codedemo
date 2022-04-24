#include<stdio.h>
 int main(){
 	float a1,b1,c1,a2,b2,c2;
 	printf("                       GIAI HE PHUONG TRINH BAC 1\n");
 	printf("                               a1x + b1 = c1\n");
 	printf("                               a2x + b2 = c2\n");
 	printf("nhap a1 b1 c1 "); scanf("%f%f%f",&a1,&b1,&c1);
 	printf("nhap a2 b2 c2 "); scanf("%f%f%f",&a2,&b2,&c2);
 	float D= (a1*b2) - (b1*a2);
 	float Dx=(c1*b2)- (b1*c2);
 	float Dy=(a1*c2)- (c1*a2);
 	if(D!=0){
 		printf("HPT co nghiem duy nhat ");
 	        printf("          =>     x = %f ; y = %f",Dx/D,Dy/D);
	 }
	 if(D==0){
	 	if(Dy!=0||Dx!=0){
		 
	 	printf("=> HPT vo nghiem ");
	 }
	 }
	 if(D==0&&Dx==0&&Dy==0){
	 	printf("=> HPT vo so nghiem ");
	 }
 }
