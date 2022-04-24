#include <stdio.h>
int flb(int n, int a[100]){
	a[1]=1;
	a[2]=1;
	int j;
	for( j=3;j<=n;j++){
		a[j]=a[j-1]+a[j-2];
	}
	return a[n];
}
int main() {
    int n,i;
    int a[100];
	printf("nhap so thu n trong day fibolasi = ");
    scanf("%d", &n);
    int q=flb(n,a);
	printf("so thu n trong day fibolasi = %d",q);
    return 0;
}

