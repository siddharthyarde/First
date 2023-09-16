#include <stdio.h>
void main()
{
    float first;
    float second;
    float third;
    float fourth;
    float fifth;
    
    char operation1;
    char operation2;
    char operation3;
    char operation4;
    
    printf("type first number = ");
    scanf("%f", &first);
    
    printf(" type operation 1 ");
    scanf(" %c",&operation1);
    
    printf("type second number = ");
    scanf("%f", &second);
    
    printf(" type operation 2 ");
    scanf(" %c",&operation2);
    
    printf("type third number = ");
    scanf("%f", &third);
    
    printf(" type operation 3 ");
    scanf(" %c",&operation3);
    
    printf("type fourth number = ");
    scanf("%f", &fourth);
    
    printf(" type operation 4 ");
    scanf(" %c",&operation4);
    
    printf("type fifth number = ");
    scanf("%f", &fifth);
    
    float result1;
    
    if (operation1 == '+')
    {
        result1 = first + second;
    }
    
    else if(operation1 == '-')
    {
        result1 = first - second;
    }
    
    else if(operation1 == '*')
    {
        result1 = first * second;
    }
    
    else if(operation1 == '/')
    {
        result1 = first / second;
    }
    
    float result2;
    
    if (operation2 == '+')
    {
        result2 = result1 + third;
    }
    
    else if(operation2 == '-')
    {
        result2 = result1 - third;
    }
    
    else if(operation2 == '*')
    {
        result2 = result1 * third;
    }
    
    else if(operation2 == '/')
    {
        result2 = result1 / third;
    }
    
   float result3;
    
    if (operation3 == '+')
    {
        result3 = result2 + fourth;
    }
    
    else if (operation3 == '-')
    {
        result3 = result2 - fourth;
    }
    
    else if (operation3 == '*')
    {
        result3 = result2 * fourth;
    }
    
    else if (operation3 == '/')
    {
        result3 = result2 / fourth;
    }
    
    float result4;
    
    if (operation4 == '+')
    {
        result4 = result3 + fifth;
    }
    
    else if (operation4 == '-')
    {
        result4 = result3 - fifth;
    }
    
    else if (operation4 == '*')
    {
        result4 = result3 * fifth;
    }
    
    else if (operation4 == '/')
    {
        result4 = result3 / fifth;
    }
    
    printf ("Ultimate Result = %f", result4);
}