#include <stdio.h>

// Function returning string
char* message()
{
    return "Priyanka";
}

int main()
{
    char *str;

    // Function call
    str = message();

    printf("Returned String: %s\n", str);

    return 0;
}