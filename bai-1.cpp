#include<stdio.h>
 int main(){
 	float a,b,c,d,e,f;
 	printf("                       GIAI HE PHUONG TRINH BAC 1\n");
 	printf("                               aX + bY = c\n");
 	printf("                               dX + eY = f\n");
 	printf("nhap a b c "); scanf("%f%f%f",&a,&b,&c);
 	printf("nhap d e f "); scanf("%f%f%f",&d,&e,&f);
 	float D= (a*e) - (b*d);
 	float Dx=(c*e)- (b*f);
 	float Dy=(a*f)- (c*d);
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
