/******************************************************************************

REQUIREMENTS:
DATA TYPE: int
VARIABLES: i , largest, arr[]
FUNCTIONS: printf() and scanf()
LOOP: for loop
STATEMENT: if STATEMENT
EXPECTED OUTPUT: Enter numbers
                 -1 -11 11 12 15
                 Largest number: 15
                 
              

*******************************************************************************/
#include<stdio.h>

int main()
{
     int arr[5];
    int i, largest;

    printf("Enter numbers:\n");


    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    largest = arr[0];

    
    for(i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest number = %d\n", largest);
}

