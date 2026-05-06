#include <stdio.h>

void increaseThreshold(int threshold)
{
    threshold = threshold + 10;

    
    printf("Threshold inside function = %d\n", threshold);
}

int main()
{
    int thresholdValue;

    
    printf("Enter threshold value: ");
    scanf("%d", &thresholdValue);

    
    printf("Threshold before function call = %d\n", thresholdValue);

    
    increaseThreshold(thresholdValue);

    
    printf("Threshold in main = %d\n", thresholdValue);

    return 0;
}