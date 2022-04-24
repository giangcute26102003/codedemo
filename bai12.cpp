//bai12
#include<stdio.h>
void nhapmang(int a[100], int n){
	for(int i=0 ;i<n ;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
     int n,t=0;
     int a[100],b[100];
     printf("--nhap n= ");
     scanf("%d",&n);
     printf("mang A = \n");
     nhapmang(a,n);
       printf("mang b = \n");
     nhapmang(b,n);
     int c[200];
     for(int i=0;i<n;i++){
     c[i]=a[i];
	 }
	   for(int i=n;i<2*n;i++){
     c[i]=b[t];
     t++;
	 }
	 int tmp;
	 for(int i= 1;i<2*n;i++){
	 	for(int j=0;j<2*n;j++){
	 		if(c[j]>c[i]){
	 			tmp=c[j];
	 			c[j]=c[i];
	 			c[i]=tmp;
			 }
		 }
	 }
	 FILE *f;
	 f=fopen("bai12.c","wt");
	 for(int i=0;i<2*n;i++){
	 	fprintf(f,"%d\t",c[i]);
	 }
	 fclose(f);
}
