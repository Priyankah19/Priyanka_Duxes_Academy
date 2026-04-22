
#include <stdio.h>
int num = 20;
void display()
{
    printf("The value of global variable: %d\n", num);
}
int main()
{
    display();
    printf("Accessing global variable in main: %d\n", num);


    return 0;
}
