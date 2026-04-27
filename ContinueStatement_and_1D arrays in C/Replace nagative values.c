/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {10, -5, 20, -3, 30};
    
    int i;

    for(i = 0;i < 5; i++) {
        
        if(arr[i] < 0) {
            
            arr[i] = 0;
        }
    }
        printf("Updated array:\n");
        for(i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }

    return 0;
}