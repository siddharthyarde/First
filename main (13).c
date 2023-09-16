#include <stdio.h>
void
main ()
{
  int a;
  printf ("Type value for a = ");
  scanf ("%d", &a);
    
  int Number[a];
  
  for (int n = 0; n < a; n++)
  {
    printf ("Type value of number %d = ", n);
    scanf ("%d", &Number[n]);
  }
    
    int Max = 0;
    for(int n = 0; n < a; n++)
    {
        if(Number[n] > Max)
        {
            Max = Number[n];
        }
    }
    
    printf("Max no. is %d", Max);
    
}
