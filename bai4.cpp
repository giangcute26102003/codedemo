#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct {
	int stt;
	char ten_hang[100];
	int don_gia;
	int so_luong;
	int thanh_tien;
}hoadon;

int main(){
  FILE *f;
  f=fopen("vao.txt","wb");

	int n;
	hoadon hd[100];

	printf(" so luong mat hang:\t");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		hd[i].stt=i;
	printf("nhap ten mat hang  %d \t",i);
fflush(stdin);
	gets(hd[i].ten_hang);
	
	printf("don gia ");
	fflush(stdin);
	scanf("%d",&hd[i].don_gia);
	
	printf("so luong ");
	scanf("%d",&hd[i].so_luong);
	
    hd[i].thanh_tien=hd[i].don_gia*hd[i].so_luong;
	if (f!=NULL)
	{
		fwrite(&hd[i], sizeof(hoadon),1,f);
	}
	}
	fclose(f);
	

int j=1;
	
	printf("___________SO LIEU BAN HANG______________\n");
	printf("STT \t TEN HANG \t DON GIA \t SO LUONG \t THANH TIEN\n ");
	f=fopen("vao.txt", "rb");
while (!feof(f)){
	if(fread(&hd[j],sizeof(hoadon),1,f)==1){
			printf("%d  \t %s \t %d  \t %d \t\t\t %d\n",hd[j].stt,hd[j].ten_hang,hd[j].don_gia,hd[j].so_luong,hd[j].thanh_tien);
		 }
		 j++;
	}
	fclose(f);
	  }
			

