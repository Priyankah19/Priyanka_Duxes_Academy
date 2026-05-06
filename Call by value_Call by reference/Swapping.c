/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int a, int b)
{
  int temp;
  
  temp = a;
  
  
  a = b;
  b = temp;
  printf("After swapping :\n");
  
  printf("a = %d\n", a);
  
  printf("b = %d\n", b);
}
 int main()
 {
     int x, y;
     
     printf("Enter two values: ");
    scanf("%d %d", &x, &y);
     
     
     printf("Before swapping: \n");
     
     printf("x = %d\n", x);
     
     printf("y = %d\n", y);
     
     
     
     swap(x, y);
     
     printf("After function call: \n");
     
     printf("x = %d\n", x);
     
     printf("y = %d\n", y);
 

    return 0;
}