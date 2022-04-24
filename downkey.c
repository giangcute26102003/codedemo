#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main() {
	int j =0 ;
	do {
	
    char str[100];
    char str2[100];
    scanf("%s", str);
    scanf("%s",str2);
    int i;
    for( i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
            str2[i] += 32;
        }
    }
     
    printf("%s%s", str,str2);
    int r;
    
        r = rand();
        printf("%d", r);   
    printf("@textverified.store\n");
    j++;  
} while(j=1000000);
    return 0;
}
