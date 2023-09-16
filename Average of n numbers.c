#include <stdio.h>
void main()
{
    int s;
    
    printf ("type the no. of numbers you want = ");
    scanf ("%d", &s);
    
    int Number[s];
    
    for(int n = 0; n < s; n++)
    {
        printf("Number %d = ", n + 1);
        scanf("%d", &Number[n + 1]);
    }
    
    int sum  = 0;
    
    for(int n = 0; n < s; n++)
    {
        sum = sum + Number[n + 1];
    }
    
    printf("%d\n", sum);
    
    int average = sum / s;
    
    printf("Average = %d", average);
    
}