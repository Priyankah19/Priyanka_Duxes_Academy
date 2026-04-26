
#include <stdio.h>

int main()

{
     int arr[] = {10, 10, 20, 30, 30, 40};
     int size = sizeof(arr) / sizeof(arr[0]);
     int i, j;
     int duplicate;
     
     
     for(i = 0; i < size; i++) {
         duplicate = 0;
         
         for(j = 0; j < i; j++) {
             if(arr[i] == arr[j]) {
                 duplicate = 1;
                 break;
             }
         }
         
         if(duplicate == 1) {
             continue;
         }
         
         printf("%d ", arr[i]);
     }
     
   
    return 0;
}
