#include <stdio.h>
void main()
{
    int x[5];

    for (int n = 0; n < 5; n++)
    {
        printf("Type the number = ");
        scanf("%d", &x[n]);
    }
    
    int sum = 0;
    
    for (int n = 0; n < 5; n += 2)
    {
        if( x[n] % 2 == 0)
        {
            sum = sum + x[n];
        }
    }
    
    printf("sum of all the even numbers are = %d", sum);
}