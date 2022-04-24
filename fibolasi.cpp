#include<stdio.h>
int main(){

int i,n;
scanf("%d",&n);
long a[1000];
a[1]=1;
a[2]=1;
for(i=3;i<=n;i++){
	a[i]=a[i-1]+a[i-2];
}
for(i=1;i<=n;i++){
	printf("%d ",a[i]);
}
}
