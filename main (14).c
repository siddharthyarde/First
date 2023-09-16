#include <stdio.h>
void main()
{
    int n;
    printf("Type the value for n = ");
    scanf("%d", &n);
    
    int Array[n];
    
    for(int x = 0; x < n; x++)
    {
        printf("Type the value for number %d = ", x);
        scanf("%d", &Array[x]);
    }
    
    printf("The inverse of the array is ");
    
    for(int x = 0; x < n/2; x++)
    {
        int Temporary = Array[x];
        Array[x] = Array[n - x - 1];
        Array[n - x - 1] = Temporary;
    }
    
    for(int x = 0; x < n; x++)
    {
        printf("%d ", Array[x]);
    }
}