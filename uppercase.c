//WAP TO FIND WHETHER THE CHAR InPUT BY THE USER IS UPPER CASE OR NOT
#include <stdio.h>
int main()
{
    char ch;
    printf(" enter the character:");
    scanf("%c", &ch);

    if(ch>= 'A' && ch<= 'Z')
    {
        printf("The entered character is upper case ");
    }
    else if (ch>= 'a' && ch<= 'z')
    {
        printf("The entered character is lower case ");
    }
    else 
    {
        printf("The entered character is invalid");
    }
    return 0;
}

