#include <stdio.h>
#include <stdbool.h>
void main()
{
    int s;
    
    printf ("type the no. of numbers you want = ");
    scanf ("%d", &s);
    
    int Number[s];
    int n;
    bool noOddNumberPresent = true;
    for(n = 0; n < s; n++)
    {
        printf("Number %d = ", n);
        scanf("%d", &Number[n]);
    }
    
    for (int n = 0; n < s; n++)
    {
        if (Number[n] % 2 == 1)
        {
            printf("%d ", Number[n]);
            noOddNumberPresent = false;
        }
    }  
    if(noOddNumberPresent)
    {
        printf("No odd numbers in this array");
    }
    
}