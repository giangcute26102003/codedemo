#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
void rand_text(int length, char *result) {
    int i, rand_int;
    char char_set[] = "0123456789";
 
    for (i = 0; i <length; i++) {
        result[i] = char_set[rand() % sizeof(char_set)];
    }
    result[length] = 0;
}
 
int main(void){
   
    int length =4;

    char result[length + 1];
    srand(time(NULL));
 
    rand_text(length, result);
    printf("%s", result);
}

