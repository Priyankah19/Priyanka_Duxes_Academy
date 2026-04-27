/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20,30, 40, 50};
    
    int i, key, found = 0;
    
    
    printf("Enter value to search: ");
    scanf("%d", &key);
    

    
    for(i = 0;i < 5; i++) {
        
        if(arr[i] == key) {
            
            found = 1; 
            
            break;
        }
    }
         if(found == 1) {
             printf("value found\n");
         }
           else {
               printf("Value not found\n");
           }


    return 0;
}