/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    
    int i;
    

    
    for(i = 4; i >=0; i--) {
        
      printf("%d   ", arr[i]);
    
    }

    return 0;
}