#include<stdio.h>
int main(){
	int arr1[100],arr2[100];
	int i,n;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	int j;
	for(j=3;j<1000;j++){
		arr2[1]=1;
		arr2[2]=1;
		arr2[j]=arr2[j-1]+arr2[j-2];
	}
	printf("*****************\n");
	for(i=1;i<100;i++){
			printf("%d\n",arr2[arr1[i]]);
		
	}
}
