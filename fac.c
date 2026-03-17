//WAP TO FIND FACTORISL OF A NO. N
#include <stdio.h>
int main()
{
    int n, fac=1;
    printf("enter the no:");
    scanf("%d",&n);
    for(int i=1;i<=n; i++)
    {
        (fac = fac*i);
        
    }printf("factorial is:%d",fac);
    return 0;
}