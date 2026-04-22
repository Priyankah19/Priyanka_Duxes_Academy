
#include <stdio.h>
void display()
{
    auto int x = 10;
    printf("value of x inside display function :%d\n" , x);
    
}
int main()
{
    auto int a = 5;
    printf("variable of a in main: %d\n", a);
    display();
    
    return 0;
}
