#include <stdio.h>
void main()
{
    int s;
    printf ("Total No. of Students = ");
    scanf ("%d",&s);
    
    float MaxMarks;
    {
        printf("type the max marks = ");
        scanf("%f", &MaxMarks);
    }
    
    float MarksObtained[s];
    
    for (int n=0; n<s; n++)
    {
       printf("type marks by student %d obtained =  ", n + 1);
       scanf("%f", &MarksObtained[n + 1]);
    }
    
    for (int n=0; n<s; n++)
    {
        float Percentage =   (MarksObtained[n + 1] * 100) / MaxMarks ;
        
        printf("Student %d got %f Percent\n", n + 1, Percentage);
    }
}