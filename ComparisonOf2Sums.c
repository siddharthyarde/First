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
            int sum2 = 0;
        for (int n = 0; n < a; n ++)
        {
            if(n < a/2)
            {
                sum1 = sum1 + x[n];
            }
            
            else
            {
                sum2 = sum2 + x[n];
            }
        }
        
        if(sum1 > sum2)
        {
            printf("Sum 1(%d) is greater", sum1);
        }
        
        else if(sum1 = sum2)
        {
            printf("Sum 1(%d) is equal to Sum 2(%d)", sum1, sum2);   
        }
        
        else
        {
            printf("Sum 2(%d) is greater", sum2);
        }
    }
    
    else
    {
        printf ("ERROR! Type the value of array as even.");
    }
}