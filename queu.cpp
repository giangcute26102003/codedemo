#include<stdio.h>
#include<malloc.h>
typedef struct Node{
     int data;
    struct Node* next;
}Node;
typedef struct {
	Node *head;
	Node *tail;
}queu;
 void khoitao(queu* s){
     s->head = NULL;
     s->tail = NULL;
 }
 Node *khoitaoNode(int x){
    Node* p =(Node*)malloc(sizeof(Node));
    p->next=NULL;
    p->data=x;
    return p;
 }
bool  ktra(queu* s){
    if(s->head==NULL) return true;
    else return false ;
}
int pop(queu *s){
    if(ktra(s)==false){
        Node *p=s->head;
        int x =p->data;
        s->head =p->next;
        free(p);
        return x;
    }
}
void push(queu *s, Node *p){
    if(ktra(s)==false){
         s->tail =p ;
        s->tail =p->next;
    }
    else {
        s->tail = p->next ;
        s->tail =p;
    }

}
int  nhap(queu *s, int n ){
    int a[100];
   for(int i =0;i<n;i++) {
       scanf("%d",&a[i]);
        push(s,khoitaoNode(a[i]));
    }
}
void xuat(queu s){
    Node *p=s.head;
 while(p!=NULL){
  printf("%d",p->data);
 }
}
int main(){
    int n, x;
    printf("nhap n  ");
    scanf("%d",&n);
 queu s;
nhap(&s,n);
 xuat(s);

}