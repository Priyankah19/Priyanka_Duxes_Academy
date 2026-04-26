
#include <stdio.h>

int main()

{
    int sensor[] = {10, 20, -1, 30, -1, 40};
    
    int i;
    
    int size = sizeof(sensor) / sizeof(sensor[0] );
    
    
    for(i = 0; i < size; i++)
    {
        if(sensor[i] == -1) {
            continue;
        }
        printf("%d ", sensor[i]);
    }
    
    return 0;
}
