# include <stdio.h>
int main()
{
    int a;
    printf("enter a =");
    scanf("%d", &a);
    {
         if (a %2==0)
         { printf("%d is even\n", a);
        } else
        { printf("%d is odd", a);
        }    
    }
    return 0;
}