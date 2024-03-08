#include <stdio.h>
void main()
{
    int n;
    
    printf("Type the array length = ");
    scanf("%d", &n);
    
    printf("\n");
    
    int Array1[n], Array2[n];
    int Array3[2*n];
    
    printf("In Array 1");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type element number %d = ", x);
        scanf("%d", &Array1[x]);
    }
    
    printf("\n");
    
    printf("Array 2");
    printf("\n");
    
    for(int x = 0; x < n; x++)
    {
        printf("Type element number %d = ", x);
        scanf("%d", &Array2[x]);
    }
    
    int i, j, k;
    
    while(i < n && j < n)
    {
        if(Array1[i] < Array2[j])
        {
            Array3[k] = Array1[i];
            i++;
            k++;
        }
        
        else
        {
            Array3[k] = Array2[j];
            j++;
            k++;
        }
    }
    
    while (i < n)
    {
        Array3[k] = Array1[i];
        i++;
        k++;
    }
    
    while (j < n)
    {
        Array3[k] = Array2[j];
        j++;
        k++;
    }
    
    printf("\n");
    
    printf("Array 3 is ");
    
    for(int x; x < 2*n; x++)
    {
        printf("%d ", Array3[x]);
    }
}