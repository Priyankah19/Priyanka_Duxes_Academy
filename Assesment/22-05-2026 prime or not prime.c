/*************************************************************
 REQUIREMENTS:
 DATATYPE: unsigned int
 VARIABLES: n , i  , prime
 FUNCTIONS: printf() and scanf()
 LOOP: for LOOP
 STATEMENT: if and else if
 
 EXPECTED OUTPUT: Enter a number
                  1 is a not a prime number
                  Enter a number
                  7 is a prime number
                  
                  
 
 
 ****************************************************************/
 #include<stdio.h>

int main()
{
     unsigned int n, i, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);


    if(n <= 1)
    {
        prime = 0;
    }
    else
    {
        
        for(i = 2; i <= n / 2; i++)
        {
            if(n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if(prime == 1)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is Not a Prime Number\n", n);
    }

    return 0;
}