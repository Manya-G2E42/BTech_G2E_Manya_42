//WAP TO CHECK IF A CHARACTER IS VOWEL OF CONSONANT.
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:%c", &ch);
    scanf("%c",&ch);

    if( ch =='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U') {

       printf(" the character is a vowel ");
    }
    else
    {
        printf("the character is consonant ");
    }


    return 0;
}