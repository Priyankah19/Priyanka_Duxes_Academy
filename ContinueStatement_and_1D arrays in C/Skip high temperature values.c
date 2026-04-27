/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] ={30, 40, 45, 55, 60};
    
    int i;
    
    printf("Safe values:\n");
    
    
    for(i = 0;i < 5; i++) {
        if(arr[i] > 50) {
            
        
            continue;
        }
         
            printf("%d ", arr[i]);
        }

    return 0;
}