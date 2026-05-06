/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int batteryUsage(int battery)
{
    battery = battery - 5;
    
    return battery;
}
 int main()
 {
     int batteryPercent, remainingBattery;
     
     
     printf("Enter battery percentage: ");
     scanf("%d", &batteryPercent);
     
     
     remainingBattery = batteryUsage(batteryPercent);
     
     printf("remaining Battery = %d%%\n", remainingBattery);
 
  
    return 0;
}