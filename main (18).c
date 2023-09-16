#include <stdio.h>
void main()
{
    int n;
    printf("Type the value of n = ");
    scanf("%d", &n);
    printf("\n");
    
    int Array[n];
    
    printf("Type the values for Array \n ");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type the value of number %d = ", x);
        scanf("%d", &Array[x]);
    }
    
    int FirstMax = 0;
    int SecondMax = 0;
    
    for(int x = 0; x < n; x++)
    {
        if(FirstMax < Array[x])
        {
            FirstMax = Array[x];
        }
    }
    
    printf("First Max is %d \n", FirstMax);
    
    for(int x = 0; x < n; x++)
    {
        if(Array[x] != FirstMax &&  SecondMax < FirstMax && SecondMax < Array[x])
        {
            SecondMax = Array[x];
        }
    }
    
    printf("Second Max is %d", SecondMax);
}