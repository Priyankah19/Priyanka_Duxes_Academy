/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


 char* checkTemperature(int temp)
 {
    if(temp > 70)
    {
        return "OVERHEAT";
    }
    else
    {
        return "NORMAL";
    }
    
}

int main() {
    
    int temperature;
    

  printf("Enter temperature value: ");
  scanf("%d", &temperature);
    

  printf("%s\n", checkTemperature(temperature));

  
    return 0;
}