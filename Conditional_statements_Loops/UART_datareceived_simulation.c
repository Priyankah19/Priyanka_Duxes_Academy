/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dataReceived = 0;
    int count = 0;
    
    while(dataReceived == 0) {
        printf("Checking for UART data \n");
        
        count++;
        
        if(count == 5) {
            dataReceived = 1;
        }
    }
    printf("Data Received\n");
  
    
    
       return 0;
}
