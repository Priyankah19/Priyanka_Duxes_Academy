/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temp[5];
    float sum = 0, average;
    int i;
    
    printf("Enter 5 temperature readings:\n");
    
    for(i = 0; i < 5; i++) {
        
        scanf("%f", &temp[i]);
        sum += temp[i];
        
        average = sum / 5;
        
        printf("Average temperature = %.2f\n", average);
    }

    return 0;
}