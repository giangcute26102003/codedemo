#include <stdio.h>

int factorial(int n) {
    
    return n*factorial(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
