#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *pnext;
}Node;
typedef struct{
	Node *phead;
	Node *ptail;
}List;
Node *getNode(int x){
Node *p;
p=(Node*)malloc(sizeof(Node));
if(p==NULL){
	printf("cap phat loi");
	return NULL;
}
else{
	p->data=x;
	p->pnext=NULL;
	return p;
}
}
void init(List *l){
	l->phead=NULL;
	l->ptail=NULL;
}
void insert_head(List *l , Node *p){
	if(l->phead==NULL){
		l->phead=p;
		l->ptail;
	}
	
}
void delete_node(List *l){
	Node*p = l->head;
	if(l->head==NULL)
	{
		printf("Rong !");
	}
	else{
		l->head=p->pnext;
		if(l->head==NULL){
			l->tail=NULL;
		}
		free(p);
	}
}
int main(){
	List l;
	Node *p=getNode(200);
	insert_head(&l , p);
	printf("%d",l.phead->data);
}
