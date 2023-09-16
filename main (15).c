#include <stdio.h>
void main()
{
    int n;
    printf("Type the value of n = ");
    scanf("%d", &n);
    printf("\n");
    
    int Array1[n];
    int Array2[n];
    
    printf("Type the values for Array 1\n");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type the value of number %d = ", x);
        scanf("%d", &Array1[x]);
    }
    
    printf("\n");
    
    printf("Type the values for Array 2\n");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type the value of number %d = ", x);
        scanf("%d", &Array2[x]);
    }
    
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Sum of value %d of both Arrays is = %d\n", x, Array1[x] + Array2[x]);
    }
}