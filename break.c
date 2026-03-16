#include <stdio.h>
int main()
{
    int n ;
    do {
        printf("enter the no.");
        scanf("%d", &n);

        if(n%7 !=0)
        {
            break;
        }
    }while (1);
    printf(" the no is not a multiple of 7",n);
    return 0;
}