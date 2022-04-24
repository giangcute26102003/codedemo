#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
typedef struct{
	char ten_hang[100];
	int don_gia, so_luong;
}hoadon;
typedef struct Node{
	hoadon data;
	struct Node *next;
}Node;
typedef struct {
	Node *head;
	Node *tail;
}List;
void init(List *l){
	l->head=NULL;
	l->tail=NULL;
}
Node *getNode(hoadon h){
	Node *p;
	p=(Node*) malloc(sizeof(Node));
	if(p==NULL){
		printf("cap phat loi");
		return NULL;
	}
	else{
		p->data=h;
		p->next=NULL;
		return p;
	}
}
void insert_head(List *l, Node *p){ 
	if(l->head==NULL){
		l->head=p;
		l->tail=p;
	}
	else{
		p->next=l->head;
		l->head=p;
	}
}
void nhaphoadon(hoadon *h){
	printf("nhap ten hang  ");
	fflush(stdin);
	gets(h->ten_hang);
	printf("don gia: ");
	fflush(stdin);
	scanf("%d",&h->don_gia);
	printf("so luong: ");
	scanf("%d",&h->so_luong);
}void xuat(List l){
	Node *p=l.head;
	int i=1;
	while(p!=NULL){
	
			printf("%d \t %s   \t %d \t\t %d\t\t %d \t\n",i,p->data.ten_hang,p->data.don_gia,p->data.so_luong,p->data.don_gia*p->data.so_luong );
		i++;
		p=p->next;
	}
}
int main(){
	List l;
	int i;
	hoadon h;
	init(&l);
	printf("nhap so hang: ");
	int n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		nhaphoadon(&h);
		insert_head(&l,getNode(h));
		
	}
	printf("___________HOA DON BAN HANG______________\n");
		printf("STT \t TEN HANG \t DON GIA \t SO LUONG \t THANH TIEN\n");
	xuat(l);
}

