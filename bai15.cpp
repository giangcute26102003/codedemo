//bai15
#include<stdio.h>
int main(){
	int n,p=1;
	printf("nhap n =  ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]<0) p*=a[i];
	}
	
	FILE *f;
	f=fopen("bai15.c","wt");
	if(p==1) {
	fprintf(f,"khong co gia tri am nao ca");
	}
	else
	fprintf(f,"tich cac gia tri am trong day la = %d",p);
	fclose(f);
}
