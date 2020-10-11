#include <stdio.h>

int main(void)
{

    double x = 1.0;
    for(double i = 3.0; i <= 89; i+=2 )
    {
        x =  x + x/i;
    }
    printf("%f \n",x);
    return 0;
}
