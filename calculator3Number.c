#include <stdio.h>

void main()

{
    float FirstNumber;
    float SecondNumber;
    float ThirdNumber;
    
    char operation1;
    char operation2;
    
    printf ("type the FirstNumber = ");
    scanf ("%f", &FirstNumber);
    
    printf ("enter the operation1 ");
    scanf (" %c", &operation1);
    
    printf ("type the SecondNumber = ");
    scanf ("%f", &SecondNumber);
    
    printf ("enter the operation2 ");
    scanf (" %c", &operation2 );
    
    printf ("type the ThirdNumber = ");
    scanf ("%f", &ThirdNumber);
    
    float result1;
    
    if (operation1 == '+')
    {
        result1 = FirstNumber + SecondNumber;
    }
    
    else if (operation1 == '-')
    {
        result1 = FirstNumber - SecondNumber;
    }
    
    else if (operation1 == '*')
    {
        result1 = FirstNumber * SecondNumber;
    }
    
    else if (operation1 == '/')
    {
        result1 = FirstNumber/ SecondNumber;
    }
    
    printf ("result1 = %f\n", result1);
    
    float result2;
    
    if (operation2 == '+')
    {
        result2 = result1 + ThirdNumber;
    }
    
    else if (operation2 == '-')
    {
        result2 = result1 - ThirdNumber;
    }
    
    else if (operation2 == '*')
    {
        result2 = result1 * ThirdNumber;
    }
    
    else if (operation2 == '/')
    {
        result2 = result1 / ThirdNumber;
    }
    
    printf ("result2 = %f\n", result2);
}