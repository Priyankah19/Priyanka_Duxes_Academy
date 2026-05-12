#include <stdio.h>


int* fun()
{
    static int x = 10;

    return &x;
}

int main()
{
    int *ptr;

    
    ptr = fun();

    printf("Value = %d\n", *ptr);

    return 0;
}