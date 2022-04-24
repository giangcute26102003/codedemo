//bai16
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
		int m,n, p,q;
		printf("kich thuoc ma tran A m x n là ");
	scanf("%d%d",&m,&n);
		printf("kich thuoc ma tran B p x q là ");	
			
		scanf("%d%d",&p,&q);
		printf("nhap ma tran A \n");
			nhapmatrix(a,m,n);
				printf("nhap ma tran B \n");
		nhapmatrix(b,p,q);
		printf(" ma tran A \n");
			xuatmatrix(a,m,n);
			printf(" ma tran B \n");
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
					printf(" ma tran C \n");
			xuatmatrix(c,m,q);
		}
		else printf("không thoa man ma tran tich");
		
 
	}

