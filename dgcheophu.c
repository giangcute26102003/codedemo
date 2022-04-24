#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, t;

    scanf("%d", &t);
    do
    {
        scanf("%d", &a);
int i,j;
        for( i=1; i <= a; i++)
        {
            for( j=1; j <= a; j++)
            {
                if(i == a || j == a || i == 1 || j == 1 || i == a - j + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
        t--;
    }while(t > 0);
}
