#include<stdio.h>
void nhapheso(int a[100], int n){
    for(int i=0;i<n;i++){
     scanf("%d",&a[i]);
    }
}
void xuat(int a[100], int n){
     for(int i=0;i<n;i++){
     printf("%d\t",a[i]);
    }
    printf("\n");
}
int  luy_thua (int n , int x){
    for(int i=0;i<n+1;i++){
     x*=x;
    }
    return x;
}
int tinh_giatri(int a[100],int n, int x){
    int s=0;
    for(int i=0 ;i<n;i++){
      s+=a[i]*luy_thua(i,x);
    }
    return s;
}
int main() {
    printf("nhap so luong he so cua P(x) ");
    int n , m ;
    scanf("%d",&n);
      printf("nhap so luong he so cua Q(x) ");
     scanf("%d",&m);
     int P[n],Q[m];
     printf("nhap he so cua P(x) = ");
     nhapheso(P,n);
      printf("nhap  he so cua Q(x) = ");
     nhapheso(Q,m);
     int i=0 , j=0,k=0;
     int T[100];
     while(i<n&&j<m){
      T[k++]=P[i++]+Q[j++];
     }
     while(i<n){
     T[k++]=P[i++];
     }
     while(j<m){
         T[k++]=Q[j++];
     }
     printf("nhap x = ", n);
     int x;
     scanf("%d",&x);
     int s1 = tinh_giatri(P,n,x);
     printf("vd gia tri P(x) = %d \n",s1);
     
     printf(" P(x)= ");
     xuat(P,n);
     printf(" Q(x)= ");
     xuat(Q,m);
     printf(" T(x)= ");
     xuat(T,k);
}