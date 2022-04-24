#include<stdio.h>  
#include<conio.h> 
#include<string.h>  

typedef struct  
{  
	int tuoi;
	float diemtb; 
	char HoTen[40];  
} SinhVien;  
///----------- 
void ReadFile(char *FileName)  
{  
	FILE *f;   	
	SinhVien sv;   	
	f=fopen(FileName,"rb");   	
	printf("  | Ho va ten\n");   	
	fread(&sv,sizeof(sv),1,f);   	
	while (!feof(f))  
	{  
		printf(" %s | %d  | %f \n",sv.HoTen,sv.tuoi,sv.diemtb);  
		fread(&sv,sizeof(sv),1,f);  
	}  
	fclose(f);  
	printf("Bam phim bat ky de tiep tuc!!!");  
	getch();  
}  
void WriteFile(char *FileName)  
{  
	FILE *f;   
	int n,i;  
	SinhVien sv;   	
	f=fopen(FileName,"ab");   	
	printf("Nhap vao so luong sinh vien "); 
	scanf("%d",&n);   	
	for(i=1;i<=n;i++)  
	{  
		printf("Sinh vien thu %i\n",i);   	 	
		fflush(stdin); 
		printf(" - Ho va ten: ");
		gets(sv.HoTen);    
		printf(" - tuoi : ");
		scanf("%d",&sv.tuoi); 
		  	printf(" - diemtb : ");
		scanf("%d",&sv.diemtb); 
		fwrite(&sv,sizeof(sv),1,f);  
	}  
	fclose(f);  
	printf("Bam phim bat ky de tiep tuc");  
	getch();  
}  

void ReadFile(char *FileName);
void WriteFile(char *FileName);
int main()  
{  
FILE *f;
	int c;  
	for (;;)  
	{  
		printf("1. Nhap DSSV\n");  
		printf("2. In DSSV\n");    
		printf("4. Thoat\n");  
		printf("Ban chon 1, 2, 4: ");  
		scanf("%d",&c);  
		fflush(stdin); 
		if(c==1)  
		{ 
			WriteFile("SinhVien.Dat");  
		} 
		else if (c==2)  
		{ 
			ReadFile("SinhVien.Dat");  
		} 
		else break;  
	}
} 

