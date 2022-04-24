//bai12
#include<stdio.h>
int main(){
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	int a[n],b[n],c[2*n];
	printf("nhap day A ");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
		printf("nhap day b ");
	for(int i=0;i<n;i++) scanf("%d",&b[i]);
	int i=0,j=0,k=0;
	while(i<n&&j<n){
		if(a[i]<=b[j]){
			c[k++]=a[i];
			i++;
		}
		else {
			c[k++]=b[j];
			j++;
		}
	}
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<n){
		c[k++]=b[j++];
	}
	FILE *f;
	f=fopen("bai12.c","wt");
	for(i=0;i<2*n;i++){
		fprintf(f," %d\t",c[i]);
	}
	fclose(f);
}
