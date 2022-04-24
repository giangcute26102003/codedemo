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
void Nhap(Sinhvien *s){
	printf("Nhap ho ten:");
	gets(s->hoten);
	printf("Nhap tuoi");
	scanf("%d", &s->tuoi);
	printf("Nhap diem trung binh:");
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
void insert_head(List *l, Node *p){ 
	if(l->Phead==NULL){
		l->Phead=p;
		l->Ptail=p;
	}
	else{
		p->next=l->head;
		l->head=p;
	}
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
	free(p);
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
			free(l->Ptail);
			p->pnext=NULL;
			l->Ptail=p;
		}
	}
	
}
void xuat(List l){
	int i=1;
	printf("DANH SACH SINH VIEN\n");
	printf("STT\t\t\tHO VA TEN\t\t\t\t\tTUOI\t\t\tDIEM TRUNG BINH\n");
	Node *p=l.Phead;
	while(p!=NULL){
		printf("%d%s%25d%40f\n", i,p->data.hoten, p->data.tuoi, p->data.diemtb);
		i++;
		p=p->pnext;
	}
}
void xuat1(List l){
	int i=1;
	printf("DANH SACH SINH VIEN\n");
	printf("STT\t\t\tHO VA TEN\t\t\t\t\tTUOI\t\t\tDIEM TRUNG BINH\n");
	Node *p=l.Phead;
	while(p!=NULL){
		printf("%s\n", p->data.hoten);
		i++;
		p=p->pnext;
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
 	 	free(p);
	  }
 	q=p;
 }
}
int main(){
	List l;
	char ten_chen[30];
	char ten_xoa[30];
	Sinhvien sv;
	init(&l);
	int i;
	for(i=0; i<3; i++){
		Nhap(&sv);
		insert_last(&l, getNode(sv));
	}
	xuat(l);
	printf("Nhap ten muon nhap sau:");
	gets(ten_chen);
	Nhap(&sv);
	insert_mid(&l, getNode(sv), search(l, ten_chen));
	printf("sau khi chen \n");
	xuat(l);
	printf("nhap ten muon xoa ");
	gets(ten_xoa);
	delete_mid(&l,ten_xoa);	
	xuat1(l);

}
