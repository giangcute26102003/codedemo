#include <stdio.h>
#include <conio.h>
#include<string.h>
int main(){
	typedef struct{
char que[100];
char ho_ten[100];
char gioi_tinh[10];
float tong;
int stt;
} chung;
 typedef union{
 	float diem_hat;
 	float diem_mua;
 }nu;
 typedef union {
 	float diem_td;
 	float diem_tin;
 }nam;
 typedef struct{
 	chung c;
 	nam a;
 	nu b;
 	
 }dslop;
 dslop p[100];
 int n;
 printf("nhap so sinh vien cua lop: ");
 scanf("%d",&n);
 char s1[10]="nam",s2[10]="nu";

 for(int i=1;i<=n;i++){
 	p[i].c.stt=i;
 	printf("nhap ho ten "); 
 	fflush(stdin);
 	gets(p[i].c.ho_ten);
 	printf("Que: ");
 	gets(p[i].c.que);
 	printf("gioi tinh : " );
 	gets(p[i].c.gioi_tinh);
 	if(strcmp(p[i].c.gioi_tinh, s2)==0){
 		printf("nhap diem hat ");
 		fflush(stdin);
		scanf("%f",&p[i].b.diem_hat);
			printf("nhap diem mua ");
		scanf("%f",&p[i].b.diem_mua);
		p[i].c.tong=p[i].b.diem_hat+p[i].b.diem_mua;
	
	}
	else {
			printf("nhap diem the duc  ");
			fflush(stdin);
		scanf("%f",&p[i].a.diem_td);
			printf("nhap diem tin ");
		scanf("%f",&p[i].a.diem_tin);
			p[i].c.tong=p[i].a.diem_tin+p[i].a.diem_td;
			
	}
	}
	fflush(stdin);
	printf("--DANH SACH NU--\n");
	for(int i=1;i<=n;i++){ 	
	if(strcmp(p[i].c.gioi_tinh, s2)==0){
	
		printf("STT %d\t Ho Ten %s\t  Que %s\t Diem hat %f\t Diem mua %f\t Tong %f\n",i,p[i].c.ho_ten,p[i].c.que,p[i].b.diem_hat,p[i].b.diem_mua,p[i].c.tong);
	}
	}
	printf("--DANH SACH NAM--\n");
	for(int i=1;i<=n;i++){ 
	if(strcmp(p[i].c.gioi_tinh, s1)==0){
		
		printf("STT %d\t Ho Ten %d\t  Que %s\t Diem the duc %f\t Diem tin %f\t Tong %f\n",i,p[i].c.ho_ten,p[i].c.que,p[i].a.diem_td,p[i].a.diem_tin,p[i].c.tong);
	}
	}
}
