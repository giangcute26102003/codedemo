//bai14
#include<stdio.h>
int main(){
	int i,j,n,t=1;
	int a[10][10];
	printf("nhap n = ");
	scanf("%d",&n);
	int h1=0,h2=n-1,c1=0,c2=n-1;
	while(h1<=h2&&c1<=c2){
		for(i=c1;i<=c2;i++){
			a[h1][i]=t;
			t++;
		}
	++h1;
		for(i=h1;i<=h2;i++){
			a[i][c2]=t;
			t++;
		}
		--c2;
			for(i=c2;i>=c1;i--){
				a[h2][i]=t;
				t++;
			}
			--h2;
			
			for(i=h2;i>=h1;i--){
				a[i][c1]=t;
				t++;
			}
		++c1;	
	}
	FILE *f;
	f=fopen("bai14.c","wt");
			for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf( f,"%d\t",a[i][j]);
		}
		fprintf(f,"\n");
		}
	fclose(f);
	}
	

