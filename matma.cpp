#include<stdio.h>
main(){
	char plaintext;
	scanf("%c",&plaintext);
	int key;
	scanf("%d",&key);
	if(key>=0&&key<=25&&plaintext>='A'&&plaintext<='Z'){
		int D=plaintext - key;
		if(D<65){
			D=90-(64-D);
			printf("%c",D);
		}
		else
	printf("%c",D);
}
}
