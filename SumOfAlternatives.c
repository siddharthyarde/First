#include <stdio.h>
int main()
{
    int arrayLength;
    printf("Type the number of elements in array = ");
    scanf("%d", &arrayLength);
    
    int Array1[arrayLength];
    int Array2[arrayLength];
    int x;
    
    for(x = 0; x < arrayLength; x++)
    {
        printf("Type your input for element number %d in Array1 = ", x);
        scanf("%d", &Array1[x]);
    }
    
    printf("\n");
    
    for(x = 0; x < arrayLength; x++)
    {
        printf("Type your input for element number %d in Array2 = ", x);
        scanf("%d", &Array2[x]);
    }
    
    printf("\n");
    
    for(x = 0; x < arrayLength; x++)
    {
        int sum = Array1[x] + Array2[arrayLength - x - 1];
        printf("sum of the term %d of Array1 and term %d of Array2 is = %d", x, arrayLength - x - 1, sum);
        printf("\n");
    }

}