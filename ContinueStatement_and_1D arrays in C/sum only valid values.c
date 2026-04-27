/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] ={10, -1, 20, -1, 30};
    
    int i, sum = 0;
    

    for(i = 0; i < 5; i++) {
        
        if(arr[i] == -1) {
            
        
            continue;
        }
        sum += arr[i];
    }
         
            printf("Sum of valid values = %d\n", sum);
        

    return 0;
}