//bai13
#include<stdio.h>
void nhapmang(int a[100], int n){
	for(int i=0 ;i<n ;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
     int n,t=0,d=0;
     int a[100],b[100];
     printf("--nhap n= ");
     scanf("%d",&n);
     printf("mang A = \n");
     nhapmang(a,n);
     int c[200];
     for(int i=0;i<n;i++){
     if(a[i]>0) 
	 {
	 b[t]=a[i];
	 t++;
	 }
     if(a[i]<0) 
	 {
	 c[d]=a[i];
	 d++;
	 }
	 }
	 FILE *f;
	 f=fopen("bai13.c","wt");
	 fprintf(f,"mang so duong B \n");
	 for(int i=0;i<t;i++){
	 	fprintf(f,"%d\t",b[i]);
	 }
	 fprintf(f,"\n");
	fprintf(f,"mang so am C \n");
	 for(int i=0;i<d;i++){
	 	fprintf(f,"%d\t",c[i]);
	 }
	 fclose(f);
}
