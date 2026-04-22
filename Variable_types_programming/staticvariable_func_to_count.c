
#include <stdio.h>

void countcalls()
{
 static int count = 0;
 count++;
 printf("Function called %d times\n", count);
}
int main() {
    countcalls();
    countcalls();
    countcalls();
    countcalls();
    countcalls();

    return 0;
}
