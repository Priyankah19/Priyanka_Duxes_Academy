/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int password, correctPassword = 1234;
   int attempts = 0;
   
   do {
       printf("Enter Password: ");
       scanf("%d", &password);
       
       
       if(password == correctPassword) {
           printf("Access Granted\n");
           break;
       } else {
           printf("Try again\n");
       }
   
    attempts++;
} while(attempts < 3);

 if(attempts == 3 &&password != correctPassword) {
     printf("Access Denied\n");
 }
        
    
       return 0;
}
