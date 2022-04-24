#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct{
	char hoten[30];
	int tuoi;
	float diemtb;
}Sinhvien;
typedef struct Node{
	Sinhvien data;
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
void Nhap(Sinhvien *s , int dem ){
	printf("Nhap ho ten sin vien %d : ",dem);
    fflush(stdin);
	gets(s->hoten);
	printf("Nhap tuoi ");
	scanf("%d", &s->tuoi);
	printf("Nhap diem trung binh: ");
	scanf("%f", &s->diemtb);
	fflush(stdin);
}
Node *getNode(Sinhvien s){
	Node *p;
	p=(Node*)malloc(sizeof(Node));
	p->data=s;
	p->pnext=NULL;
	return p;
}
void insert_last(List *l, Node *p){
	if(l->Phead==NULL){
		l->Phead=p;
		l->Ptail=p;
	}
	else{
			 p->pnext=l->Ptail;
        l->Ptail=p;
	}
}
void delete_nodehead(List *l){
	Node*p = l->Phead;
	if(l->Phead==NULL)
	{
		printf("Rong !");
	}
	else{
Node*q = p;
	delete(q);
    l->Phead=p->pnext;
	}
}
void delete_last(List *l){
	Node*p = l->Phead;
	if(l->Phead==NULL)
	{
		printf("Rong !");
	}
	for(p;p!=NULL;p=p->pnext){
		if(p->pnext==l->Ptail){
			delete(l->Ptail);
			p->pnext=NULL;
			l->Ptail=p;
		}
	}
	
}
void xuat(List l){
	int i=1;
	printf("----DANH SACH SINH VIEN-----\n");
	printf("STT\tHO VA TEN\t\tTUOI\t\tDIEM TRUNG BINH\n");
	Node *p=l.Phead;
	while(p!=NULL){
		printf("%d            %s               %d                      %f", i,p->data.hoten, p->data.tuoi, p->data.diemtb);
		i++;
		p=p->pnext;
        printf ("\n");
	}
}
void insert_mid(List *l, Node *p, Node *q){
	if(l->Phead==NULL){
		l->Phead=p;
		l->Ptail=p;
	}
	else{
		p->pnext=q->pnext;
		q->pnext=p;
		if(q==l->Ptail){
			l->Ptail=p;
		}
	}
}
Node *search(List l, char k[30]){
	Node *p=l.Phead;
	while(p!=NULL){
		if(stricmp(p->data.hoten, k)==0){  //so sanh con tro h�m x�u 
			return p;
		}
		p=p->pnext;
	}
	return 0;
}
void delete_mid(List *l, char ten_xoa[20]){
	Node* p=l->Phead;
	Node* q=NULL;
	if(l->Phead==NULL)
	{
		printf("Rong !");
	}
	if(stricmp(l->Phead->data.hoten, ten_xoa)==0){
 		delete_nodehead(l);
	 }
	 if(stricmp(l->Ptail->data.hoten, ten_xoa)==0){
	 	delete_last(l);
	 } 
 for(p;p!=NULL;p=p->pnext){
 	q=p->pnext;
 	 if(stricmp(q->data.hoten, ten_xoa)==0){
 	 	p->pnext=q->pnext;
		  free(q);
		  break;
	  }
}
if(q==NULL) printf("*******khong co ten can xoa**** \n");
}

int main(){
	List l;
	char ten_chen[30];
	char ten_xoa[30];
	Sinhvien sv;
	init(&l);
	int n;
    printf("nhap so luong sinh vien : ");
    scanf("%d",&n);
     int dem=1;
	for(int i=1; i<=n; i++){
		Nhap(&sv , dem);
		insert_last(&l, getNode(sv));
        dem ++;
	}
	xuat(l);
	printf("Nhap ten muon nhap sau:  ");
	gets(ten_chen);
	Nhap(&sv , dem ++);
	insert_mid(&l, getNode(sv), search(l, ten_chen));
	printf("----DS SAU KHI CHEN ---\n");
	xuat(l);
	printf(" ----nhap ten muon xoa :  ");
	gets(ten_xoa);
	delete_mid(&l,ten_xoa);	
    printf("----DS SAU KHI XOA -----\n");
	xuat(l);
}
