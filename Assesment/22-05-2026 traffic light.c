/******************************************************************************
    REQUIREMENTS:
  HEADER FIE:  unistd.h used for a delay in sec, sleep() function
  FUNCTIONS: printf() and scanf()
   DATATYPE: unsigned char
   LOOP: while(1)
   EXPECTED OUTPUT: RED LIGHT
                    YELLOW LIGHT
                    GREEN LIGHT
                    Emergency pressed 
                    1
                    RED LIGHT
                    Emergency pressed
                    0
                    RED LIGHT
                    YELLOW LIGHT
                    GREEN LIGHT
                    

*******************************************************************************/
#include<stdio.h>
#include<unistd.h>
int main(){       
unsigned char emergency; 
    while(1)   
    { 
        printf ("RED LIGHT\n"); 
        sleep(5);    
        printf  ("YELLOW LIGHT\n"); 
        sleep(5); 
        printf ("GREEN LIGHT\n");  
        sleep(5);         
        printf ("Emergency pressed\n"); 
        // printf(" press 1 if yes and press 0 if no\n");// 
        scanf("%d", &emergency);    
        while (emergency == 1)    
        {       // printf("Emergency detected\n");   
        printf( "RED LIGHT\n");      
        sleep(5);              
        printf ("Emergency pressed\n");
        // For emergency 0 it should come out of the loop    
        scanf("%d", &emergency);      
        }     
        
        }
    
}    
