/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char str[] = "hello";
    int len = 0;

    while(str[len] != '\0')
        len++;

    for(int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}