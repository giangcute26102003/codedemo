#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define sv 100
typedef struct
{
    char maSv[sv];
    char hoTen[sv];
    char lop[sv];
    int tuoi;
    double diem;
} info;
 
typedef struct Node
{
    info t;
    struct Node *next;
} Node;
 
typedef struct
{
    Node *dau;
    Node *cuoi;
} DSLK;
 
void khoiTaoDSLK(DSLK *plist)
{
    plist -> dau = NULL;
    plist -> cuoi = NULL;
}
 
Node* taoNodeMoi(info t)
{
    Node *node = (Node*)malloc(sizeof(Node));
    node->t = t;
    node -> next = NULL;
 
    return node;
}
 
void themVaoCuoiDSLK(DSLK *plist, Node *pNode)
{
    if(plist->dau == NULL)
    {
        plist->dau = pNode;
        plist->cuoi = pNode;
    }
    else
    {
        plist->cuoi->next = pNode;
        plist->cuoi = pNode;
    }
}
 
void duyetDSLK(DSLK *plist)
{
    Node *tmp = plist->dau;
    while(tmp != NULL )
    {
        if(tmp->t.diem > 7)
        {
            printf("%s %s %s %d %f\n", tmp->t.maSv, tmp->t.hoTen, tmp->t.lop, tmp->t.tuoi, tmp->t.diem);
        }
        tmp = tmp->next;
    }
}
 
int main()
{
    DSLK *plist = (DSLK*)malloc(sizeof(DSLK));
    khoiTaoDSLK(plist);
    int i;
    info t;
    printf("Nhap vao 10 sinh vien!!\n");
    for(i = 1;  i <= 10; i++)
    {
        printf("nhap vao ma sinh vien: ");
        fflush(stdin);
        gets(t.maSv);
        printf("nhap vao ten cua sinh vien: ");
        fflush(stdin);
        gets(t.hoTen);
        printf("nhap vao lop cua sinh vien: ");
        fflush(stdin);
        gets(t.lop);
        printf("nhap vao diem cua sinh vien: ");
        scanf("%lf", &t.diem);
        printf("Nhap vao tuoi sinh vien: ");
        scanf("%d", &t.tuoi);
        themVaoCuoiDSLK(plist, taoNodeMoi(t));
    }
    duyetDSLK(plist);
    return 0;
}
