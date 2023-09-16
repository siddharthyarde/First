#include <stdio.h>
void main()
{
    int a;
    
    printf("type the length of array = ");
    scanf("%d", &a);
    
    int x[a];
    
    if(a % 2 == 0 )
    {
        for (int n = 0; n < a; n++)
            {
                printf("Type the number = ");
                scanf("%d", &x[n]);
            }
            
            int sum1 = 0;
            
            for (int n = 0; n < a/2; n ++)
            {
                sum1 = sum1 + x[n];
            }
            
            int sum2 = 0;
            
            for (int n = a/2; n < a; n ++)
            {
                sum2 = sum2 + x[n];
            }
            
            if(sum1 > sum2)
            {
                printf("sum of first half i.e. %d is greater than second half i.e. %d", sum1, sum2);
            }
            
            else
            {
                printf("sum of first half i.e. %d is less than second half i.e. %d", sum1, sum2);
            }
    }
    
    else
    {
        printf ("ERROR! Type the value of array as even.");
    }
}