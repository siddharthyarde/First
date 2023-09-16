#include <stdio.h>
void main()
{
    int n;
    printf("Type the value of n = ");
    scanf("%d", &n);
    printf("\n");
    
    int Array[n];
    
    printf("Type the values for the Array \n ");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type the value of number %d = ", x);
        scanf("%d", &Array[x]);
    }
    
    int Max = 0;
    
    for(int x = 0; x < n; x++)
    {
        if(Max < Array[x])
        {
            Max = Array[x];
        }
    }
    
    printf("Max number is %d", Max);
}