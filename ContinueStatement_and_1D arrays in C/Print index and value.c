/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[4] = {5, 10, 15, 20};
    
    int i;
    
    printf("Index\tvalue\n");
    

    for(i = 0; i < 4; i++) {
        
         
            printf("%d\t%d\n", i , arr[i]);
    }
        

    return 0;
}