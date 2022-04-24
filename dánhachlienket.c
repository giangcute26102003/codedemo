
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct 
{
    char ten[20];
    char MSSV[10];
    char lop[20];
    int dtb;
}sv;
typedef struct NODE
{
    sv info;
    struct NODE* next;
};
typedef struct 
{
    NODE *head;
    NODE *tail;
}LIST;
NODE* CreateNode (sv x)
{
    NODE *p;
    p=new NODE;
    if(p==NULL)  exit(1);
    p->info=x;
    p->next=NULL;
    return p;
}
void CreateList (LIST &L)
{
    L.head=L.tail=NULL;
}
void input (sv &x)
{
    printf("\nNhap MSSV: ");  fflush(stdin); gets(x.MSSV);
    printf("\nNhap ten: ");  fflush(stdin); gets(x.ten);   
    printf("\nNhap lop : ");  fflush(stdin); gets(x.lop); 
    printf("\nNhap dtb: "); scanf("%d", &x.dtb);
}
void AddLast (LIST &L, NODE *p)
{
    if(L.head==NULL)  L.head=L.tail=p;
    else
    {
        L.tail->next=p;
        L.tail=p;
    }
}
void nhap (LIST &L)
{
    sv x;
    char kt;   
    printf("\nNhan phim bat ki de tiep tuc nhap.");
    printf("\nNhan 0 de dung nhap.");
    do
    {
        kt=getch();
        if(kt=='0')  break;
        input(x);
        NODE *p=CreateNode(x);
        AddLast(L,p);
    } while (1);
}
void output (sv x)
{
    printf("\n%s    %s   %s   %d",x.MSSV,x.lop,x.ten,x.dtb);
}
void xuat (LIST L)
{
    NODE *p;
    p=L.head;
    while(p!=NULL)
    {
        output(p->info);
        p=p->next;
    }
}

void thongkedtb (LIST L)
{
    NODE *p;
    int dem=0;
    p=L.head;
    while (p!=NULL)
    {       
        if(p->info.dtb>7)  dem++;
        p=p->next;
    }
    if(dem==0)  printf("\nKo co sv co dtb>7.");
    else printf("\nCo %d sv co dtb >7.",dem);
}
void menu()
{
    LIST L;
    NODE *p,*q,*moi;
    sv x;
    char chon;
    CreateList(L);
    do
    {
        printf("\n\t\t\tMENU");
        printf("\n\t1. Nhap ds");
        printf("\n\t2. In ds");
        printf("\n\t4. Ds sv co dtb >7");
        chon=getch();
        switch(chon)
        {
            case '1': { nhap(L); break;}
            case '2': { xuat(L); break;}
            case '4': { thongkedtb(L); break;}
            case '0': exit(1);
            default: printf("\nNhap lai.");
        }
    } while (chon!='0');
}
int main()
{
    while(1)
    {
        menu();
        getch();
    }
}
