//bai18
#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhapmatrix(int a[10][10] , int n){
	int i,j;
	for(i=0;i<n;i++){

		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmatrix(int a[10][10], int n){
    

	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
int ktra_matrandonvi(int a[10][10], int n ){
	int i,j,d=0,k=0;
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){
	if(a[i][j]==0) k=k+1;
	}
}
for(i=0;i<n;i++){
	if(a[i][i]==1){
		d=d+1;
	}
}
if(d==n&&k==n*(n-1) ) printf("A la ma tran don vi \n");
else printf("A khong la ma tran don vi  \n");
printf("Bam phim bat ky de tiep tuc!!!\n\n\n");  
  getch ();
}
void tinh_tong_hang(int a[10][10], int n , int hang){
		int i,j=0;
	for(i=0;i<n;i++){
	j+=a[hang][i];
	}
	printf("tong hang %d = %d \n",hang,j);
	printf("Bam phim bat ky de tiep tuc!!!\n\n\n");  
  getch ();
}
void tinh_tich_cot(int a[10][10], int n , int cot){
		int i,j=1;
	for(i=0;i<n;i++){
	j*=a[i][cot];
	}
	printf("tich cot %d = %d \n",cot,j);
	printf("Bam phim bat ky de tiep tuc!!!\n\n\n");  
  getch ();
}
int  ktra_snt(int a[10][10],int n , int hang){
	int i,j,d=0,k=0;
	for(i=0;i<n;i++){ 
	if(a[hang][i]<2){
		d=1;
	} else{
		for(j=2;j<=(sqrt(a[hang][i]));j++){
			if(a[hang][i]%j==0) {
				d=1;
				break;
			}
		}
		if(d==0) 	k=k+1;
		
	}
		
	}
return k;
}
void ktra_slsnt(int a[10][10],int n ){
	int i,j,d,k;
	int arr[100];
    int max;
    	for(i=0;i<n;i++){
    		arr[i]=ktra_snt(a,n,i);
		}
		max = arr[0];
		for(i=1;i<n;i++){
			if(arr[i]>max){
				max=arr[i];
				d=i;
			}
		}
	printf("hang nhieu so nguyen to nhat la %d \n\n",d );
}

int main(){
	int a[10][10];
	int n;
	printf("---nhap n= ");
	scanf("%d",&n);
	nhapmatrix(a,n);
	int c;  
	for (;;)  
	{  
		printf("1. kiem tra ma tran don vi \n");  
		printf("2. Tong cac phan tu nam tren hang i (hang chay tu 0 -> n-1) \n");    
		printf("3. Tich cac phan tu nam tren cot j (cot chay tu 0 -> n-1) \n");  
		printf("4. ktra co so nguyen to tren hang i (hang chay tu 0 -> n-1) va hang co nhieu so nguyen to nhat \n");
		printf("5. So luong so am duong trong ma tran \n");
		printf("---chon phim khac de exit --------\n\n");
		printf("Ban chon 1, 2, 3, 4, 5 : ");  
		scanf("%d",&c);      
		fflush(stdin); 
		if(c==1){
			ktra_matrandonvi(a,n);
		}
		else if(c==2){
			int hang;
			printf("nhap hang i (hang chay tu 0 -> n-1) =");
			scanf("%d",&hang);
			tinh_tong_hang(a,n,hang);
		}
		else if(c==3){
			int cot;
			printf("nhap cot j (cot chay tu 0 -> n-1) = ");
			scanf("%d",&cot );
			tinh_tich_cot(a,n,cot);
		}
		else if(c==4){
			int hang;
			int k,d;
			printf("nhap hang i muon ktra (hang chay tu 0 -> n-1) ");
			scanf("%d",&hang);
			k=ktra_snt(a,n,hang);
			if(k>0){
				printf("hang co chua so nguyen to \n");
			}
			else 	printf("hang khong chua so nguyen to \n");
			ktra_slsnt(a,n);
				printf("Bam phim bat ky de tiep tuc!!!\n\n\n");  
  getch ();
		}
		else if(c==5){ 
		int i,j;
		int am , duong ;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]>0) duong++;
			if(a[i][j]<0) am++;
		}
	}
	printf(" so luong so am , duong lan luot la %d , %d \n",am , duong);
		printf("Bam phim bat ky de tiep tuc!!!\n\n\n");  
  getch ();
		}
		
	 else {
	 break;
	 }
}
}
