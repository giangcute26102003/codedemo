#include<stdio.h>
typedef struct {
	char ten[20];
	int tuoi ;
	float diem;
}sinhvien;
int main(){
	int n,i,j;
	FILE *f;
	sinhvien a[1000];
	printf("nhap n ");
	scanf("%d",&n);
	f=fopen("vao.txt","wb");
	for(i=1;i<=n;i++){
		printf("----ten----");
	    fflush(stdin);
		gets(a[i].ten);
		printf("-----tuoi----");
		scanf("%d",&a[i].tuoi);
		printf("-----diem-----");
		scanf("%f",&a[i].diem);
	if(f!=NULL){
		fwrite(&a[i],sizeof(sinhvien),1,f);
	}
	}
	fclose(f);
	j=1;
	f=fopen("vao.txt","rb");
	while(!feof(f)){
		if(fread(&a[j],sizeof(sinhvien),1,f)==1){
		printf("%d\t\t%s\t\t%d\t\t%f\n",j,a[j].ten,a[j].tuoi,a[j].diem);
			}
			j++;
	}		
	fclose(f);
}
