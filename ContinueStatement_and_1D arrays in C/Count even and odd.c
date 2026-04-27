/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    
    int i, even = 0, odd = 0;
    

    
    for(i = 0;i < 5; i++) {
        
        if(arr[i] % 2 == 0) {
            
            even++;
            
        } else {
            
            odd++;
        }
        
    }
        
      printf("Even numbers = %d\n", even);
      printf("Odd numbers = %d\n", odd);
    
    

    return 0;
}