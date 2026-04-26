
#include <stdio.h>

int main()

{
     int sensor[5];
     
    printf("Enter 5 sensor readings:\n");
     
     for(int i = 0; i < 5; i++) {
         printf("Reading %d: ", i + 1);
         scanf("%d", &sensor[i]);
     }
         printf("Sensor readings are:\n");
         for(int i = 0; i < 5; i++) {
             
             printf("Reading %d = %d\n", i + 1, sensor[i]);
         }
   
    return 0;
}
