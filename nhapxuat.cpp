
#include<stdio.h>
#include<conio.h>
#include<string.h>
void nhap(int a[10][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int a[10][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
	}
}
void nhapmatrix(int a[10][10] , int m, int n,FILE *f){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			fscanf(f,"%d\t",&a[i][j]);
		}
		fscanf(f,"\n");
	}
    xuat(a,m,n);
}
void xuatmatrix(int a[10][10],int n, int m,FILE *f){
    

	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			fprintf(f,"%d\t",a[i][j]);
		}
		fprintf(f,"\n");
	}

}
void tongmatrix(int a[10][10], int b[10][10], int c[10][10], int n , int m ,FILE *f){
    int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
}
int main(){
    FILE *f ;
    f=fopen("MA_TRAN.dat","wt");
	int a[10][10],b[10][10],c[10][10];
		int m,n, p,q;
		int i,j,t=0,arr[100];
	scanf("%d%d",&n,&m);
	printf("nha a\n ");
	nhap(a,n,m);
    fprintf(f,"ma tran a \n");
	xuatmatrix(a,n,m,f);
	printf("nha b \n ");
	nhap(b,n,m);
    fprintf(f,"ma tran b \n");
	xuatmatrix(b,n,m,f);
    tongmatrix(a,b,c,n,m,f);
     fprintf(f,"ma tran c \n");
    xuatmatrix(c,n,m,f);
	fclose(f);
       f=fopen("MA_TRAN.dat","rt");
       fprintf(f,"Ma tran a \n");
		nhapmatrix(b,n,m,f);
        fclose(f);
}

