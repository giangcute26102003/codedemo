#include<stdio.h>
typedef struct { 
	char ten_hang[100];
	int don_gia;
	int so_luong;
}hoadon;
int main(){

hoadon hd[100];
	int i;
	int n,thanh_tien[100];
	printf(" so luong mat hang \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("nhap ten mat hang thu %d",i);
	gets(hd[i].ten_hang);
	fflush(stdin);
	printf("don gia ");
	scanf("%d",&hd[i].don_gia);
	printf("so luong ");
	scanf("%d",hd[i].so_luong);
	fflush(stdin);
    thanh_tien[i]=hd[i].don_gia*hd[i].so_luong;
	}
	for(i=1;i<=n;i++){
		printf("___________SO LIEU BAN HANG______________\n");
		printf("STT \t TEN HANG \t DON GIA \t SO LUONG \t THANH TIEN\n ");
		printf("%d \t %s \t %d \t %d \t %d \n",i,hd[i].ten_hang,hd[i].don_gia,hd[i].so_luong,thanh_tien[i]);
	}
}
