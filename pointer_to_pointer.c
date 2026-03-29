//WRITE A CODE TO PRINT THE VALUE OF I FROM IT'S PPOINTER TO POINTER 
#include<stdio.h>
int main(){


    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("the value of **pptr:%d \n",**pptr);
    return 0;


}