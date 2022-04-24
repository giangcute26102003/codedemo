#include<stdio.h>
void nhapmatrix(int a[10][10] , int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmatrix(int a[10][10],int m, int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
	int main(){
		int a[10][10],b[10][10],c[10][10];
		int m,n;
		printf("kich thuoc ma tran A mxn là ");
	scanf("%d%d",&m,&n);
		printf("kich thuoc ma tran B pxq là ");	
			int p,q;
		scanf("%d%d",&p,&q);
			nhapmatrix(a,m,n);
		nhapmatrix(b,p,q);
		//ma tran A
			xuatmatrix(a,m,n);
			//ma tran b
		xuatmatrix(b,p,q);
		printf("\n");
		if(n==p){  
			int i,j,z,k;
			for(z=0;z<m;z++){
				for(k=0;k<q;k++){
				c[z][k]=0;
					for(i=0;i<n;i++){
					c[z][k]=c[z][k]+a[z][i]*b[i][k];
					}		
				}
			}
			xuatmatrix(c,m,q);
		}
		else printf("không thoa man ma tran tich");
		getch();
	}

