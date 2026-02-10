# include <stdio.h>

int main()
{
    int a,b,c,d,e;
    float sum, percentage;
    printf("enter the five nos:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum= a+b+c+d+e;
    percentage=((float) sum/500* (100));

    printf("sum= %f", sum);
    printf("percentage= %f", percentage);
    return 0;
}