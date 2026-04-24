/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice;
    
    do {
        printf("\n MENU \n");
        printf("1. LED Control\n");
        printf("2. Sensor Status\n");
        printf("3. Motor Start\n");
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
            printf("LED Control selected\n");
            break;
            
            case2:
            printf("Sensor status selected\n");
            break;
            
            case3:
            printf("Motor start selected\n");
            break;
            
            case4:
            printf("Exiting \n");
            break;
            
            default:
            printf("Invalid choice! Try again \n");
        }
            
        } while(choice != 4);
        
    
       return 0;
}
