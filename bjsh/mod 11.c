#include <stdio.h>

int mod5(int number2);

int main()
{
    
    int number;
    
    
    printf ("Enter your number:");
    scanf("%d", &number);
    
    number = mod5(number);
    
    return(0);
    
}

int mod5(int number2)
{
    if(number2 % 11 == 0)
    printf("Your number can divided by 11");
    else
    printf("Your number CAN'T divided by 11");

    
    return(number2);
    
}