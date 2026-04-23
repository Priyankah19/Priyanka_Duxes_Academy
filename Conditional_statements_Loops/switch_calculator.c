
#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;
    
    printf("operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    
    printf("Enter two numbers: ");
    scanf("%f%f",&num1, &num2);
    
    
    switch(operator) {
        case '+':
        result = num1 + num2;
        printf("%f + %f = %f\n", num1, num2, result);
        break;
        
        case '-':
        result = num1 - num2;
        printf("%f - %f = %f\n", num1, num2, result);
        break;
        
        case '*':
        result = num1 * num2;
        printf("%f * %f = %f\n", num1, num2, result);
        break;
        
        case '/':
        if (num2 != 0) {
            result = num1 / num2;
            printf("%f / %f =%f\n", num1, num2, result);
        } else {
            printf("Error! you cannot divide by zero\n");
        }
        break;
        
        default:
        printf("Error! operator is not correct\n");
    
   
   }
   return 0;
}