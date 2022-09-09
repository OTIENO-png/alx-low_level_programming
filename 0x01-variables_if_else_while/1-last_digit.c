#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n,x;
    scrand (time(O));
    n = rand() - RAND_MAX/2;
    x = n % 10;
    if (x>5)
    {
        printf(" last digit of %d is %d and is greater than 5/n",n,x);
    }
    else if (x > 6 && n != 0)
    {
        printf("last digit of %d is %d and is less than 6 and not 0/n",n,x);
    }
    else
    {
        printf("last digit of %d is %d and is 0/n",n,x);
    }
    return(0);
    
}