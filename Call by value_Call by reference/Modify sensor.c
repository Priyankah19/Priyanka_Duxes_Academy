/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void modifySensor(int value)
{
  value = value + 30;
  
  printf("value inside function = %d\n", value);
}
int main()
{
    int sensorValue = 40;
    printf("original value = %d\n", sensorValue);

    return 0;
}