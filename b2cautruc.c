#include <stdio.h>
#include <conio.h>
void main()
{
typedef struct
{
char xa[20];
char huyen[20], tinh[20];
} que_quan;
typedef struct
{
char ho[10],ten[15],tendem[15];
} ho_ten; 
 typedef struct{
	float toan,ly,hoa;
}diem_thi;
typedef struct{
	char truong[100],sbd[100];
	int tuoi;
	ho_ten ht;
	que_quan qq;
	diem_thi dt;
} phieudiem;
int i,s[20],j;
phieudiem p[20];
for( i=1 ;i <=20;i++){

printf("Nhap thong tin ve sinh vien thu %d\n", i);
printf("Nhap ho\n");
gets(p[i].ht.ho);
printf("Nhap tendem\n");
gets(p[i].ht.tendem);
printf("Nhap ten\n");
gets(p[i].ht.ten);

printf("nhap tuoi ");
scanf("%d",&p[i].tuoi);
printf("Nhap diem toan\n");
scanf("%f",&p[i].dt.toan);
printf("Nhap diem ly\n");
scanf("%f",&p[i].dt.ly);
printf("Nhap diem hoa\n");
scanf("%f",&p[i].dt.hoa);
printf("Nhap dia chi sinh vien\n");
fflush(stdin);
printf("Nhap xa:");
gets(p[i].qq.xa);

 printf("Nhap huyen:"); 
gets(p[i].qq.huyen);

printf("Nhap tinh:"); 
gets(p[i].qq.tinh);
s[i]=p[i].dt.toan +p[i].dt.ly+ p[i].dt.hoa;
}
for(i=1;i<20;i++){
	for(j=1;j<=20;j++){
		if(s[j]>s[i]){
			int tg =s[j];
			s[j]=s[i];
			s[i]=tg;
			
		}
	}
}
for(i=1 ;i<=20;i++){
printf("In thong tin ve sinh vien co diem tren 15 \n");
	printf("Ho ten \t             tuoi \t               diem 3 mon toan ly hoa \t         dia chi\n");
printf("%s %s %s\t %d %2.lf %2.lf %2.lf\t %s %s %s ",p[i].ht.ho, p[i].ht.tendem,p[i].ht.ten,p[i].tuoi,p[i].dt.toan,p[i].dt.ly,p[i].dt.hoa ,p[i].qq.xa, p[i].qq.huyen,p[i].qq.tinh);
}
getch();
}
