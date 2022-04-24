#include<stdio.h>
int *p;
int nhap(int a[],int n){
	p=a;
	int i;
	for( i=0;i<n;i++){
		scanf("%d",p+i);
	}
}
int xuat(int a[],int n){
	int i;
	p=a;
	for( i=0;i<n;i++){
		printf("%d\t",(*p+i));
	}
}

int main(){
	int b[100];
	int n,*p;
	scanf("%d",&n);
	nhap(b,n);
	xuat(b,n);
}
