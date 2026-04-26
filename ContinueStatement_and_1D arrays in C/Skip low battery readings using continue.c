
#include <stdio.h>

int main()

{
     int battery[] = {80, 25, 60, 20, 90};
     int i;
     int size = sizeof(battery) / sizeof(battery[0]);
    
    for(i = 0; i < size; i++) {
        
        if(battery[i] < 30) {
            
            continue;
        }
        
        printf("%d ", battery[i]);
    }
    
   
    return 0;
}
