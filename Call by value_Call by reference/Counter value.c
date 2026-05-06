#include <stdio.h>


void incrementCounter(int *counter)
{
    *counter = *counter + 1;

    
    printf("Counter inside function = %d\n", *counter);
}

int main()
{
    int count;

    
    printf("Enter counter value: ");
    scanf("%d", &count);

    
    printf("Counter before function call = %d\n", count);


    incrementCounter(&count);

    printf("Counter after function call = %d\n", count);

    return 0;
}