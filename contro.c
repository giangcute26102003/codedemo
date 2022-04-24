#include<stdio.h>
int nhap(int a[],int n){
	int *p;
	int i;
	p=a;
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
}
int xuat(int a[],int n){
	int *p;
	int i;
	p=a;
	for(i=0;i<n;i++){
		printf("%d\t",(*p+i));
	}
}

int main(){
	int b[100];
	int n,*p;
	scanf("%d",&n);
	nhap(b,n,p);
	xuat(b,n,p);
}
