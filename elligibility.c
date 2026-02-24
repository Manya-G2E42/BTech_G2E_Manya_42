//WAP TO CHECK ELLIGIBILITY FOR VOTING (AGE>=18)

#include <stdio.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    if (age >=18)
    {
        printf(" the person is elligible for voting");
    }
    else
    {
        printf("the person is not elligible for voting");
    }
    return 0;
}