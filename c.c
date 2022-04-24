#include<stdio.h>
void so_luong(int t[100],int soluong){
	int x;
	for(x=1;x<=soluong;x++){
	 scanf("%d",&t[x]);
	}
}
void nhap(int a[100][100],int n){
	int i,j;
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			a[i][j]=42;
			
		}
	}
}
void xuat(int a[100][100],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c ",a[i][1]);
		}
		printf("\n");
	}
}
int main(){
	int i,j,x,soluong;
	int a[100][100],t[100];
	printf("so luong = "); 
	scanf("%d",&soluong);
	so_luong(t,soluong);
	for(x=0;x<=soluong;x++){
		nhap(a,t[x]);
		
		xuat(a,t[x]);
	}
}

