/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


float average(int a, int b) {
    
    return (a + b) / 2;
}

int main() {
    
    int sensor1, sensor2;
    float avg;

  printf("Enter first reading: ");
  scanf("%d", &sensor1);
    

    printf("Enter second reading: ");
    scanf("%d", &sensor2);

    avg = average(sensor1, sensor2);
    printf("Average value = %.2f\n", avg);

    

    return 0;
}