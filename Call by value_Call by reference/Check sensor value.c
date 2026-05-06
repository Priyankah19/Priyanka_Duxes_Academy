/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


void Sensor(int value) {
    
    if(value > 50) {

    printf("HIGH\n");
}
else {
    printf("LOW\n");
}

}

int main()
{
    int sensorValue;
    
    printf("Enter sensor value: ");
    scanf("%d" , &sensorValue);
    
    Sensor(sensorValue);
    

    return 0;
}