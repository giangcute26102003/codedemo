int i,j,n;
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define true 1
#define false 0
void tinh_ma_tran(int a[100][100],int n){
int h1=0,h2=n-1,c1=0,c2=n-1,t=n*n;
	while(h1<=h2&&c1<=c2){
		for(i=c1;i<=c2;i++){
			a[h1][i]=t;
			t--;
		}
	++h1;
		for(i=h1;i<=h2;i++){
			a[i][c2]=t;
			t--;
		}
		--c2;
			for(i=c2;i>=c1;i--){
				a[h2][i]=t;
				t--;
			}
			--h2;
			
			for(i=h2;i>=h1;i--){
				a[i][c1]=t;
				t--;
			}
		++c1;	
	}
}
void hien_thi(int a[100][100], int n){
	
			for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf( "%d\t",a[i][j]);
		}
		printf("\n");
		}
}
void menu(){
	printf("----------menu-----------\n");
      printf("1.Tinh ma tran xoay \n");
      printf("2. Hien ma tran xoay\n");
      printf("3. Ket thuc \n");
}
int main(){
	
	int a[100][100];
	printf("nhap n = ");
	scanf("%d",&n);
     int c;
	 while(true){
		 menu();
		 scanf("%d",&c);
		 switch(c)
		 {
			 case 1 : 
			 tinh_ma_tran(a,n);
			 break;
			 case 2 :  
			 hien_thi(a,n);
			 break;
			 case 3 : 
			 exit(1);
			 break;
			 default : printf("unknown \n");
		 }
	 }
	}
	

