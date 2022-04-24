#include<stdio.h>
#include<string.h>
typedef struct {
    int tuoi;
    char ten[30];
    float diem;
}data;
int main(){
    data t[10];
    printf("nhap ten ");
    gets(t[1].ten);
    printf("nhap tuoi ");
    scanf("%d",&t[1].tuoi);
    printf("nhap diem ");
    scanf("%f",&t[1].diem);
    printf("ten\t tuoi\t diem \n");
    printf("%s \t %d\t %f",t[1].ten,t[1].tuoi,t[1].diem);
}