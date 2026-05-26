/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < 5; i++) {

        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("%d %d", largest, second);
}