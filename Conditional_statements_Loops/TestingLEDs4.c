
#include <stdio.h>

void LED_ON(int led) {
    printf("LED %d ON\n", led);
}
 void LED_OFF(int led) {
     printf("LED %d OFF\n", led);
 }
 
 void delay() {
     for(long int i =0; i < 100000000; i++);
 }
    int main() {
        printf("Testing LEDs:\n");
        
        for(int i = 1; i <=4; i++) {
            printf("Testing LED %d\n", i);
        
    }

    return 0;
}