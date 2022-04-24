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
phieudiem p;
printf("Nhap thong tin ve sinh vien\n");
printf("Nhap ho\n");
gets(p.ht.ho);
printf("Nhap tendem\n");
gets(p.ht.tendem);
printf("Nhap ten\n");
gets(p.ht.ten);

printf("nhap tuoi ");
scanf("%d",&p.tuoi);
printf("Nhap diem toan\n");
scanf("%f",&p.dt.toan);
printf("Nhap diem ly\n");
scanf("%f",&p.dt.ly);
printf("Nhap diem hoa\n");
scanf("%f",&p.dt.hoa);
printf("Nhap dia chi sinh vien\n");
fflush(stdin);
printf("Nhap xa:");
gets(p.qq.xa);

 printf("Nhap huyen:"); 
gets(p.qq.huyen);

printf("Nhap tinh:"); 
gets(p.qq.tinh);
printf("In thong tin ve sinh vien ra man hinh\n");
printf("Ho ten \t             tuoi \t               diem 3 mon toan ly hoa \t         dia chi\n");
printf("%s %s %s\t %d %2.lf %2.lf %2.lf\t %s %s %s ",p.ht.ho, p.ht.tendem,p.ht.ten,p.tuoi,p.dt.toan,p.dt.ly,p.dt.hoa ,p.qq.xa, p.qq.huyen,p.qq.tinh);
getch();
}
