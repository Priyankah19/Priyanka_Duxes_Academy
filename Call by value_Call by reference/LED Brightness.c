/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void increaseBrightness(int brightness)
{
    brightness = brightness + 10;
    
    printf("brightness inside function = %d\n", brightness);
}

int main()
{
    int ledBrightness;
    
    printf("Enter LED brightness value: ");
    scanf("%d", &ledBrightness);
    
    increaseBrightness(ledBrightness);
    
    printf("Brightness in main = %d\n", ledBrightness);

  
    return 0;
}