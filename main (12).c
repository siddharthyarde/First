#include <stdio.h>
void main()
{
    int x;
    printf("Type the value of x = ");
    scanf("%d", &x);
    
    int Numbers[x];
    
    for(int n = 0; n < x; n++)
    {
        printf("Type number %d = ", n);
        scanf("%d", &Numbers[n]);
    }
    
    for(int n = x - 1; n >= 0 ; n--)
    {
        int Temporary = Numbers[n];
        Numbers[n] = Numbers[x - n - 1];
        Numbers[n] = Temporary;
        
        printf(" %d", Numbers[n]);
    }
    
}