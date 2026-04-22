
#include <stdio.h>
int num = 5;
int main()
{
    extern int num;
    printf("num = %d\n", num);

    
    return 0;
}
