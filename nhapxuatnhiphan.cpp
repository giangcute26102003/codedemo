#include<stdio.h>
int main(){
    FILE *f;
	char c[100];
    f=fopen("vao.c","wb");
    char s[100];
    gets(s);
    fwrite(&s,sizeof(s),1,f);
    fclose(f);
    f=fopen("vao.c","rb");
    while (!feof(f))
    {
        
        fread(&c,sizeof(s),1,f);
        
    }printf("%s",c);
    fclose(f);
}
