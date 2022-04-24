#include<stdio.h>
int main(){
	int i,a[1000],n;
	printf("nhap so luong gia tri n = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	float s1=0,s2=0;
	int d1=0,d2=0;
	for(i=0;i<n;i++){
		if(a[i]>0){
			s1=s1+a[i];
			d1++;
		}
	}
	printf("\n");
		for(i=0;i<n;i++){
		if(a[i]<0){
			s2=s2+a[i];
			d2++;
		} 
	}
	if(d1>0){
	printf("tbc so duong trong day = %f\n",s1/d1);
    } else printf("trong day khong co so duong");
    if(d2>0){
	printf("tbc so am trong day = %f\n",s2/d2);
    } else printf("trong day khong co so am");
	
}
