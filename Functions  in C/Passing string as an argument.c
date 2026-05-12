#include <stdio.h>

void display(char str[]);

int main()
{
    char name[] = "Priyanka";

    
    display(name);

    return 0;
}

void display(char str[])
{
    printf("String = %s", str);
}