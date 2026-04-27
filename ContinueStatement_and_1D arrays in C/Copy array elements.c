/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int original[5] = {10, 20, 30, 40, 50};
    int backup[5];
    
    int i;

    for(i = 0;i < 5; i++) {
         backup[i] = original[i];
        
    }
        printf("original array:\n");
        for(i = 0; i < 5; i++) {
            printf("%d ", original[i]);
        }
        printf("\nbackup array:\n");
        for(i = 0; i < 5; i++) {
            printf("%d ", backup[i]);
        }

    return 0;
}