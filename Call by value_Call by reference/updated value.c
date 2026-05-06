#include <stdio.h>

void increaseSensor(int *value)
{
    *value = *value + 20;

    printf("Updated sensor value inside function = %d\n", *value);
}

int main()
{
    int sensorValue;


    printf("Enter sensor value: ");
    scanf("%d", &sensorValue);

    
    printf("Sensor value before function call = %d\n", sensorValue);

    
    increaseSensor(&sensorValue);

    
    printf("Sensor value after function call = %d\n", sensorValue);

    return 0;
}