
#include <stdio.h>

void LED_ON()
{
    printf("LED ON\n");
}
    void LED_OFF(){
        printf("LED_OFF()\n");
    }
    void delay() {
    for(int   i = 0; i < 100000000; i++);
    }
    int main() {
        for(int i = 0; i < 10; i++) {
            LED_ON();
            delay();
            
            LED_OFF();
            delay();
        }
    

    return 0;
}