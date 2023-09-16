#include <stdio.h>
void main()
{
    int s;
    
    printf ("type the no. of numbers you want = ");
    scanf ("%d", &s);
    
    int Number[s];
    
    for(int n = 0; n < s; n++)
    {
        printf("Number %d = ", n);
        scanf("%d", &Number[n]);
    }
    
    int sum  = 0;
    
    for(int n = 0; n < s; n++)
    {
        sum = sum + Number[n];
    }
    
    printf("%d\n", sum);
    
    int average = sum / s;
    
    printf("Average = %d", average);
    
}