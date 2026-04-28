/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int arr[5];
  
  int i, sum = 0, count = 0;
  
  float average;
  
  printf("Enter 5 values:\n");
  
  for(i = 0; i < 5; i++) {
      
      scanf("%d", &arr[i]);
  }
  printf("\nValid values:\n");
  
  for(i = 0; i < 5; i++) {
      
      if(arr[i] == -1) {
          
          continue;
          
         
      }
      
      printf("%d", arr[i]);
      
      
      sum += arr[i];
      
      count++;
  }
  
  if(count > 0) {
      
      average = (float)sum/count;
      
      printf("\n\nSum = %d", sum);
      
      printf("\nAverage = %.2f", average);
      
  } else {
      printf("\nNo valid data entered");
  }

    return 0;
}