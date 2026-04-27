/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {12, 45, 7, 89, 34};
    
    int maximum, i;
    
    maximum = arr[0];
    
    for(i = 1; i < 5; i++) {
        
        if(arr[i] > maximum) {
            
            maximum = arr[i];
        }
    
    }
    
    printf("Maximum value = %d\n", maximum);

    return 0;
}