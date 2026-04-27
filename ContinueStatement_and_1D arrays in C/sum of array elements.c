/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5];
    int i, sum = 0;
    
    printf("Enter 5 numbers:\n");
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
      for(i = 0; i < 5; i++) {
          sum = sum + arr[i];
      }
      
      printf("Sum of array elements = %d\n", sum);
    return 0;
}