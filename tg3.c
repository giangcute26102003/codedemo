#include<stdio.h>
#include<string.h>
#include<conio.h>
main(){ 
int i,n;
scanf("%d",&n);
	char s1[100]="*";
	char s2[100]="*";
for(i=1;i<=n;i++){
	printf("%s\n",s1);
	strcat(s1,s2);
}
for(i<n-1;i>=0;i--){
	char s3[100]="";
	strncpy(s3,s1,i);
	printf("%s\n",s3);
}
	return 0;
}
