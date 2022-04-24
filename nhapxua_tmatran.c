
#include<stdio.h>
#include<conio.h>
#include<string.h>
void nhap(int a[100][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
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
    f=fopen("MA_TRAN.dat","rt");
	int a[100][100],b[100][100],c[100][100];
		int m,n, p,q;
		int i,j,t=0,arr[100];
	scanf("%d%d",&n,&m);
	printf("nha a\n ");
	nhap(a,n,m);
	xuatmatrix(a,n,m,f);
	printf("nha b \n ");
	nhap(b,n,m);
	xuatmatrix(b,n,m,f);
        tongmatrix(a,b,c,n,m,f);
	   fclose(f);
       f=fopen("MA_TRAN.dat","wt");
       fprintf(f,"Ma tran C \n");
		xuatmatrix(a,n,m,f);
        fclose(f);
}

