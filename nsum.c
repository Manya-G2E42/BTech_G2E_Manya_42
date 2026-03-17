//WAP TO FIND THE SUN OF NATURAL NOS. UPTO N.

#include <stdio.h>
int main()
{
    int n , sum=0;
    printf("enetr the no :");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        sum=sum +i;
    }
    printf("the sum of natural nos upto n = %d", sum);
    return 0;
}