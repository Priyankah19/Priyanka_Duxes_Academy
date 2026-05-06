#include <stdio.h>


void modifyValue(int *num)
{
    *num = *num + 10;

    printf("Value inside function = %d\n", *num);
}

int main()
{
    int value = 25;

    
    printf("Value before function call = %d\n", value);

    
    modifyValue(&value);

    printf("Value after function call = %d\n", value);

    return 0;
}