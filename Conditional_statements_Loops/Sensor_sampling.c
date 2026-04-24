/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, total = 0;
    
    int sensor[5] = {25, 26, 27, 28, 29};
    
    printf("Sensor readings:\n");
    
    for(i = 0; i < 5; i++) {
        printf("Reading %d = %d\n", i + 1, sensor[i]);
        total = total + sensor[i];
    }
printf("Total of 5 sensor readings = %d\n", total);
    return 0;
}
