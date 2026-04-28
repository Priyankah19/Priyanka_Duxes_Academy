/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int num, reverse = 0, remainder;
  printf("Enter a number: ");
  scanf("%d", &num);
  
  while(num != 0) {
      remainder = num % 10;
      reverse = reverse * 10 + remainder;
      
      num = num / 10;
      
  }
  
  printf("Reversed number = %d", reverse);
    return 0;
}