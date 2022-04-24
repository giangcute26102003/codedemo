#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include <stdlib.h>
#include<conio.h>
#define length 100
#define true 1
#define false 0
typedef struct{
    char masach[20];
	char tensach[30];
    int soluong;
	char tacgia[20];
}thuvien;
typedef struct Node{
	thuvien data;
	struct Node *pnext;
}Node;
typedef struct {
	Node *Phead;
	Node *Ptail;
}List;
void init(List *l){
	l->Phead=NULL;
	l->Ptail=NULL;
}
void Nhap(thuvien *s , int dem ){
    printf("nhap ma sach %d : ", dem);
    fflush(stdin);
    gets(s->masach);
	printf("Nhap  ten sach  : ");
    fflush(stdin);
	gets(s->tensach);
    printf("Nhap so luong : ");
    fflush(stdin);
	scanf("%d", &s->soluong);
	printf("Nhap ten tac gia :  ");
    fflush(stdin);
	gets(s->tacgia);
	
}
Node *getNode(thuvien s){
	Node *p;
	p=(Node*)malloc(sizeof(Node));
	p->data=s;
	p->pnext=NULL;
	return p;
}
void insert_last(List *l, Node *p){
	if(l->Ptail==NULL){
        l->Ptail=p;
		l->Phead=p;
	}
	else{
		p->pnext=l->Ptail;
        l->Ptail= p;
	}
}
void xuat(List l){
	int i=1;
	printf("----DANH SACH SACH-----\n");
	printf("STT\tMA SACH\t TEN SACH\t\tSO LUONG\t\tTAC GIA\n");
	Node *p=l.Ptail;
	while(p!=NULL){
		printf("%d            %s          %s         %d           %s                    \n", i,p->data.masach, p->data.tensach, p->data.soluong,p->data.tacgia);
		i++;
		p=p->pnext;
	}
}
void insert_mid(List *l, Node *p, Node *q){
	
    if(l->Ptail==NULL){
		l->Phead=p;
		l->Ptail=p;
	}
	else{
		p->pnext=q->pnext;
		q->pnext=p;
		if(q==l->Phead){
			l->Phead=p;
		}
	}
}
Node *search_truoc(List l, char k[30]){
	Node *p=l.Ptail;
	while(p!=NULL){
		Node *q=p->pnext;
		if(stricmp(q->data.masach, k)==0){  //so sanh con tro h�m x�u 
			return p;
		}
		p=p->pnext; // i++
	}
}

  void menu(){
      printf("----------menu-----------\n");
      printf("1 tao danh sach  \n");
      printf("2 in danh sach \n");
      printf("3 chen 1 sach vao thu vien \n");
      printf("*****nhap 9 de exit***** \n");
  }
int main(){
	List l;
    Node* tim;
	char MS_chen[30];
	thuvien tv;
	init(&l);
    int dem=1;
    int c;
    while (true)
    {
    menu();
    
    scanf("%d",&c);
    switch (c)
    {
    case 1 :
        int n;
    printf("nhap so luong sach : ");
    scanf("%d",&n);
     
	for(int i=1; i<=n; i++){
		Nhap(&tv , dem);
		insert_last(&l, getNode(tv));
        dem ++;
	}
        break;
    case 2 :
        xuat(l);
        getch();
    break;
    case 3 :
printf("Nhap MS sach muon chen truoc :  ");
fflush(stdin);
	gets(MS_chen);
	Nhap(&tv , dem ++);
    if(strcmp(l.Ptail->data.masach,MS_chen)==0) insert_last(&l,getNode(tv));
	else insert_mid(&l, getNode(tv), search_truoc(l, MS_chen));
	printf("----DS SAU KHI CHEN ---\n");
	xuat(l);
    getch();
    break;
  
    case 9 :
    exit(1);

    break;
    default: 
    printf("nhap 1->3 \n ");
    }
	   printf("Bam phim bat ki de tro ve menu \n");
        getchar();
        }
       return 0;
}

