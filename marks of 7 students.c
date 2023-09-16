#include <stdio.h>
void main()
{
    int Student[7];
    
    for(int n=0; n<7; n++)
    {
        printf("type the marks obtained by Student %d out of 250 = ",n + 1);
        scanf("%d", &Student[n + 1]);
    }
    for (int n=0; n<7; n++)
    {
        printf("Student %d got %f percent out of 100\n", n + 1, Student[n + 1] * 0.4);
    }
}