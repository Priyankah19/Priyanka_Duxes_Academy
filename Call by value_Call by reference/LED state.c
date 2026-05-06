#include <stdio.h>

void updateLED(int *led)
{
    *led = 1;

    printf("LED state inside function = %d\n", *led);
}

int main()
{
    int ledState = 0;

    
    printf("LED state before function call = %d\n", ledState);


    updateLED(&ledState);

    printf("LED state after function call = %d\n", ledState);

    return 0;
}