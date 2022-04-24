//bai17
#include<stdio.h>
#include<conio.h>
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
	int a[10][10],b[10][10];
		int m,n, p,q;
		int i,j,t=0,arr[100];
		printf("kich thuoc ma tran A m x n là ");
	scanf("%d%d",&m,&n);
	printf("nhap ma tran A \n");
			nhapmatrix(a,m,n);
			for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(t<n*m){
				arr[t]=a[i][j];
				
			}
			t++;
		}
	}
	int u=0;
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(u<n*m){
			b[j][i]=arr[u];
				
			}
			u++;
		}
	}
	printf(" ma tran B \n");
		xuatmatrix(b,n,m);
		getch();
}

