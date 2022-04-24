#include<stdio.h>
#include<malloc.h>
#include<string.h>
typedef struct{// tao kieu cau truc
	char masv[10], ten[20], lop[10];
	int tuoi;
	float diem;
}Sinhvien;
typedef struct Node{//khoi tao node
	Sinhvien data;
	struct Node* next;
}Node;
typedef struct{//thiet lap danh sach dau cuoi
	Node *head;
	Node *tail;
}List;
void init(List *l){// gan dau cuoi 
	l->head=NULL;
	l->tail=NULL;
}
Node *getNode(Sinhvien s){// Cap   phat dong 
	Node *p;
	p=(Node*) malloc(sizeof(Node));
	if(p==NULL){
		printf("cap phat loi");
		return NULL;
	}
	else{
		p->data=s;
		p->next=NULL;
		return p;
	}
}
void insert_last(List *l, Node *p){//chen cuoi dsach 
	if(l->head==NULL){
		l->head=p;
		l->tail=p;
	}
	else{
		l->tail->next=p;
		l->tail=p;
	}
}
//xoa Node
void delete_nodehead(List *l){
	Node*p = l->head;
	if(l->head==NULL)
	{
		printf("Rong !");
	}
	else{
		l->head=p->next;
		if(l->head==NULL){
			l->tail=NULL;
		}
		free(p);
	}
}
void nhap(Sinhvien *s){
	printf("Nhap ma sinh vien:");
	fflush(stdin);
	gets(s->masv);
	printf("Nhap ten sinh vien:");
	gets(s->ten);
	printf("Nhap lop sinh vien:");
	gets(s->lop);
	printf("Nhap tuoi sv:");
	scanf("%d", &s->tuoi);
	printf("Nhap diem sinh vien:");
	scanf("%f", &s->diem);
}
void xuat(List l){
	Node *p=l.head;
	while(p!=NULL){
	
			printf("%s\t%s\t%s\t%d\t%f \n", p->data.masv,p->data.ten, p->data.lop, p->data.tuoi, p->data.diem);
		
		p=p->next;
	}
}
void delete_mid(List *l, char xoa_ten[20]){
	Node *p=l->head;
	Node *q=NULL;
	while(p!=NULL)
	{
		if(p->data.ten==xoa_ten){
			break;
		}
		else{
			q=p;
			p=p->next;
		}
	}
	if(p==NULL){
		printf("khong tim thay node co ten can xoa ");
	}
	else{
		if(q==NULL){
			delete_nodehead(l);
		}
		else{
			q->next=p->next;
			if(q->next==NULL){
				l->tail=q;
			}
		}
	}
	
	free(p);
}
/*Node timten(char &xoa_ten){
	for(node*i = first; i!=NULL; i=i->next)
    {
        if(strcmp(tencantim,i->data.hoTen)==0)
            return i;
    }
    return NULL;
}*/
int main(){
	char xoa_ten[20];
	char chen_ten[20];
	List l;
	Sinhvien sv;
	init(&l);
	int i;
	for(i=0; i<2; i++){
		nhap(&sv);
		insert_last(&l, getNode(sv));
	}
	xuat(l);
    printf("nhap ten can xoa ");
    fflush(stdin);
    gets(xoa_ten);
	delete_mid(&l,xoa_ten);
	xuat(l); 
	insert_last(&l,getNode(sv));
	xuat(l);
}
