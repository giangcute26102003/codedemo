#include<stdio.h>
#include<string.h>
#include<conio.h>
main(){ 
int i,n;
int s[10];
s[1]="/\";
s[2]="/**\";
s[3]="/****\";
s[4]="/******\";
s[5]="/********\";
s[10]="\/";
s[9]="\**/";
s[8]="\****/";
s[7]="\******/";
s[6]="\********/";
int  r,c,s;
scanf("%d%d%d",&r,&c,&s);
for(i=1;i<=r;i++){
	for(j=1;j<=c;j++){
		printf("%s",s[i]);
	}
}
}
