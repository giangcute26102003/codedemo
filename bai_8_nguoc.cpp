#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include <stdlib.h>
#include<conio.h>
#define length 100
#define true 1
#define false 0
typedef struct{
	char hoten[30];
	char gioitinh[10];
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
	printf("Nhap ho ten sinh vien %d : ",dem);
    fflush(stdin);
	gets(s->hoten);
	printf("Nhap gioi tinh  ");
	gets(s->gioitinh);
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
	if(l->Ptail==NULL){
		l->Phead=p;
		l->Ptail=p;
	}
	else{
		p->pnext=l->Ptail;
        l->Ptail= p;
	}
}
void delete_nodehead(List *l){
	Node*p = l->Ptail;
	if(l->Ptail==NULL)
	{
		printf("Rong !");
	}
	else{
Node*q = p;
	delete(q);
    l->Ptail=p->pnext;
	}
}
void delete_last(List *l){
	Node*p = l->Ptail;
	if(l->Phead==NULL)
	{
		printf("Rong !");
	}
	for(p;p!=NULL;p=p->pnext){
		if(p->pnext==l->Phead){
			delete(l->Phead);
			p->pnext=NULL;
			l->Phead=p;
		}
	}
}
void xuat(List l){
	int i=1;
	printf("----DANH SACH SINH VIEN-----\n");
	printf("STT\tHO VA TEN\t\tGIOI TINH\t\tDIEM TRUNG BINH\n");
	Node *p=l.Ptail;
	while(p!=NULL){
		printf("%d            %s               %s                      %f\n", i,p->data.hoten, p->data.gioitinh, p->data.diemtb);
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
		if(q==l->Ptail){
			l->Ptail=p;
		}
	}
}
Node *search(List l, char k[30]){
	Node *p=l.Ptail;
	while(p!=NULL){
		if(stricmp(p->data.hoten, k)==0){  //so sanh con tro h�m x�u 
			return p;
		}
		p=p->pnext;
	}
	return 0;
}
Node *search_truoc(List l, char k[30]){
	Node *p=l.Ptail;
	while(p!=NULL){
		Node *q=p->pnext;
		if(stricmp(q->data.hoten, k)==0){  //so sanh con tro h�m x�u 
			return p;
		}
		p=p->pnext; // i++
	}
	return 0;
}
void delete_mid(List *l, char ten_xoa[20]){
	Node* p=l->Ptail;
	Node* q=NULL;
	if(l->Ptail==NULL)
	{
		printf("Rong !");
	}
	if(stricmp(l->Phead->data.hoten, ten_xoa)==0){
 		delete_last(l);
	 }
	 if(stricmp(l->Ptail->data.hoten, ten_xoa)==0){
	 	delete_nodehead(l);
	 } 
 for(p;p!=NULL;p=p->pnext){
 	q=p->pnext;
 	 if(stricmp(q->data.hoten, ten_xoa)==0){
 	 	p->pnext=q->pnext;
		  free(q);
		  break;
	  }
}
if(q==NULL) printf("khong co ten can xoa \n");
}
void hoanvi(Node *p , Node *q){
	Sinhvien tmp;
				tmp  = p->data;
				p->data=q->data;
				q->data=tmp;
}
 /*void sapxep(List *l){
        Node* p=l->Phead;
	 Node* q;
	for(p;p!=NULL;p=p->pnext){
		for( q=p->pnext;q!=NULL;q=q->pnext){
			if((p->data.diemtb)<( q->data.diemtb)){
				hoanvi(p,q);
			}
		}
	}
}*/
void sapxep(List *l){
      Node* p=l->Ptail; 
        while (p!=NULL) {
            Node* q = p->pnext;
            while (q!=NULL) {
               if(p->data.diemtb>q->data.diemtb) hoanvi(p,q);
                q = q->pnext;
            }
           p=p->pnext; 
    }
}
void sua(Node* p  ){
/*	printf("nhap lai ten ");
	char ten_moi[20];
	gets(ten_moi);
	 strcpy(p->data.hoten,ten_moi);
	printf("nhap lai gioi tinh ");
	char gioi_tinh[10];
	gets(gioi_tinh);
	strcpy(p->data.gioitinh,gioi_tinh);
	printf("nhap lai diem tb ");
	float dtb;
	scanf("%f",&dtb);
	p->data.diemtb=dtb;*/
    printf("\n1.Ho ten\n2.Gioi tinh\n3.Diem TB\nNhap thong tin muon sua: ");
            int chon;
            scanf("%d",&chon);
            switch(chon){
            case 1:
                fflush(stdin);
                printf("Nhap ten moi: ");
                gets(p->data.hoten);
                break;
            case 2:
                fflush(stdin);
                printf("Nhap gioi tinh moi: ");
                gets(p->data.gioitinh);
                break;
            case 3:
                fflush(stdin);
                printf("Nhap diem trung binh moi: ");
                scanf("%f",p->data.diemtb);
}
}
void dsachtren7(List l){
	Node* p=l.Ptail;
	int i=1;
	while (p!=NULL)
	{
		if(p->data.diemtb>=7){
			printf("%d            %s               %s                      %f\n", i,p->data.hoten, p->data.gioitinh, p->data.diemtb);
			i++;
		}
		p=p->pnext;
	}
	if(i==0)  printf("khong co ai tren 7 \n");
	} 
  void menu(){
      printf("----------menu-----------\n");
      printf("1 tao danh sach sinh vien \n");
      printf("2 in danh sach \n");
      printf("3 sua in4 sinh vien \n");
      printf("4 sap xep theo diem tang dan \n");
      printf("5 hien thi sanh sach sinh vien co diem tren 7 \n");
      printf("6 xoa 1 sinh vien khoi danh sach \n");
      printf("7 them 1 sinh vien vao danh sach \n");
      printf("8 hien thi thong tin cua 1 sinh vien can tim \n");
      printf("*****nhap 9 de exit***** \n");
  }
int main(){
	List l;
    Node* tim;
	char ten_chen[30];
	char ten_xoa[30];
	Sinhvien sv;
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
    printf("nhap so luong sinh vien : ");
    scanf("%d",&n);
     
	for(int i=1; i<=n; i++){
		Nhap(&sv , dem);
		insert_last(&l, getNode(sv));
        dem ++;
	}
        break;
    case 2 :
        xuat(l);
        getch();
    break;
    case 3 :
    printf("nhap ten can sua ");
   char ten_sua[10];
   fflush(stdin);
   gets(ten_sua);
   sua(search(l,ten_sua));
    xuat(l);
    getch();
    break;
    case 4:
printf("----DANH SACH TANG DAN \n");
	sapxep(&l);
	xuat(l);
    getch();
    break;
    case 5 :
printf("----DANH SACH > 7 \n");
    dsachtren7(l);
    getch();
    break;
    case 6 :
printf("nhap ten muon xoa :  ");
fflush(stdin);
	gets(ten_xoa);
	delete_mid(&l,ten_xoa);	
    printf("----DS SAU KHI XOA -----\n");
	xuat(l);
    getch();
    break ;
    case 7 :
printf("Nhap ten muon chen truoc :  ");
fflush(stdin);
	gets(ten_chen);
	Nhap(&sv , dem ++);
	if(stricmp(l.Ptail->data.hoten,ten_chen)==0) insert_last(&l, getNode(sv));
	else
	insert_mid(&l, getNode(sv), search_truoc(l, ten_chen));
	printf("----DS SAU KHI CHEN ---\n");
	xuat(l);
    getch();
    break;
    case 8 :
    char ten_tim[20];
    fflush(stdin);
    gets(ten_tim);
    tim = search(l,ten_tim);
	printf("\tHO VA TEN\t\tGIOI TINH\t\tDIEM TRUNG BINH\n");
    printf("            %s               %s                      %f\n",tim->data.hoten, tim->data.gioitinh, tim->data.diemtb);
    getch();
    break;
    case 9 :
    exit(1);
    break;
    default: 
    printf("nhap 1->8 \n ");
    }
	   printf("Bam phim bat ki de tro ve menu \n");
        getchar();
        }
       return 0;
}

