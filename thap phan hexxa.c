
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main ()
{
  int a,j;
  char buffer [33];
  scanf ("%d",&a);
  if(a>=0&&a<=20000000000000)
{
  	char xau[]="0x";
  	printf("%s",xau);
  itoa (a,buffer,16);
    int n;
	n = strlen(buffer);
   for(j=0;j<8-n;j++){
  	printf("0");
  }
  printf ("%s",buffer);
  }
  return 0;
}
