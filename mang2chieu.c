#include<stdio.h>

int main() {
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int arr[n][m];
     for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(i=1;i<=n;i++){
        for(j=1;i<=m;j++){
        sum=sum+ arr[i][j];
        }
    }
    printf("%d",n);
        return 0;
}

