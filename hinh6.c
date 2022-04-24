#include<stdio.h>
void so_luong(int r[],int c[],int soluong){
	int x;
	for(x=0;x<soluong;x++){
	 scanf("%d",&r[x]);
	 scanf("%d",&c[x]);
	}
}
void nhap(int a[100][100],int r , int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		if(i%2==0) a[i][j]=42;
		else a[i][j]=46;
			if(j%2==0) a[i][j]=42;
			else a[i][j]=46;
		}
	}	
}
void xuat(int a[100][100],int r , int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int i,j,x,soluong;
	int a[100][100],t[100],r[100],c[100];
	scanf("%d",&soluong);
	so_luong(r,c,soluong);
	for(x=0;x<=soluong;x++){
		nhap(a,r[x],c[x]);
		printf("\n");
		xuat(a,r[x],c[x]);
	}
	
	}


