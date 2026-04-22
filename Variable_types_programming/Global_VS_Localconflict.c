
#include <stdio.h>

int value = 50;
void printGlobal()
{
 printf("Global value = %d\n", value);
}
int main()
{
    int value = 20;
    printf("Local value = %d\n",  value);
    
    printGlobal();

    return 0;
}
