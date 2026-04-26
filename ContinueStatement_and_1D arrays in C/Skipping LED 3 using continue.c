
#include <stdio.h>

int main()

{
     int i;
    
    for(i = 1; i <= 5; i++)
    
    {
        if(i == 3) {
            continue;
        }
        printf("Testing LED %d\n", i);
    }
    
    return 0;
}
