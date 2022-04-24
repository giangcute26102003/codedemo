#include<stdio.h>
#include<math.h>
int main(){
    int n , k=2;
    int q,i;
    printf("nhap n  ");
    scanf("%d",&n);
     if(n==2) q=2;
	 if(n<2) printf("khong co so nguyen to nao ca ");
	 else{
    while(k<n){
	k++;
        int d=0;
        int t= (int)(sqrt(k));
        for(i=2;i<=t;i++){
            if(k%i==0){
               d++; 
            } 
        }
        if(d==0){
            q=k;
			
        }
    
}
    printf(" so nguyen to cuoi cung la : %d   \n",q);
	}
}
