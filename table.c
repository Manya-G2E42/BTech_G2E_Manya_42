//WAP TO FIND MULTIPLICATION TABLE OF A GIVEN NO

#include <stdio.h>
int main()
{
    int n,tab;
    printf("enter the no: ");
    scanf("%d",&n);

    for(int i=1;i<=10;i++){
        tab = n*i;
        printf("%d \n", tab);
    }
    return 0;
}