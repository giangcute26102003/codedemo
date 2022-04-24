#include<stdio.h>
#include<malloc.h>
typedef struct Node{
     int data;
    struct Node* next;
}Node;
typedef struct {
    Node* top;
}stack;
 void khoitao(stack* s){
     s->top=NULL;
 }
 Node *khoitaoNode(int x){
    Node* p =(Node*)malloc(sizeof(Node));
    p->next=NULL;
    p->data=x;
    return p;
 }
bool  ktra(stack* s){
    if(s->top==NULL) return true;
    else return false ;
}
int pop(stack *s){
    if(ktra(s)==false){
        Node *p=s->top;
        int x =p->data;
        free(p);
        return x;
    }
}
void push(stack *s, Node *p){
    if(ktra(s)==false){
        p->next=s->top;
        s->top =p ;
    }
    else s->top = p;

}
int  doicoso(stack *s, int n , int x){
    while(n>0){
        int q = n%x;
        push(s,khoitaoNode(q));
        n/=x;
    }
}
void xuat(stack s){
    Node *p=s.top;
 while(p!=NULL){
   if(p->data>=0&&p->data<=9)  printf("%d",p->data);
   else{ 
       int q = p->data + 55;
       printf("%c",q);
       }
     p=p->next;
 }
}
int main(){
    int n, x;
    printf("nhap so can doi ");
    scanf("%d",&n);
 printf("nhap co so 2 , 8 , 10 or 16 ");
 scanf("%d",&x);
 stack s;
 doicoso(&s,n,x);
 xuat(s);

}