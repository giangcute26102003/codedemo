#include<stdio.h>
int main(){
	int n,d,i;
	scanf("%d",&n);
	d=n;
	for(i=1;i<=n;i+=2){
		d=n-i;
	}
	printf("%d",d);

}
