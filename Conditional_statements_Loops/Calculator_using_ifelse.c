/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    
    printf(" Enter first number: ");
    scanf("%d" , &num1);
    
    
    printf("Enter an operator (+ , -, *, /) ");
    scanf(" %c" , &operator);
    
    printf("Enter second number: ");
    scanf("%d" ,  &num2);

     
     if (operator == '+') {
         printf("Result = %d" , num1 + num2);
     }
     else {
         if(operator == '-') {
             printf("Result = %d" , num1 - num2);
         }
         else {
             if(operator == '*') {
                 printf("Result = %d", num1 * num2);
             }
             else {
                 if(operator == '/') {
                     if (num2 != 0) { 
                         printf("Result = %d", num1 / num2);
                     } else {
                         printf("Error! division by zero");
                     }
                 } else {
                     printf("Invalid operator! ");
                 }
             }
         }
     }
    return 0;
}