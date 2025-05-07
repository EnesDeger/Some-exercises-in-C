#include <stdio.h>
#include <math.h>

double summition (double a,double b);

int main (void)
{
    
    double number1, number2;
    
    printf("Number 1:");
    scanf("%lf", &number1);
    
    
    printf("Number 2:");
    scanf("%lf", &number2);
    
    printf("number1 + (number2)*(number2)=%.1lf",summition(number1, number2));
    
    return(0);
    
}

double summition(double a,double b){
    
    double c, d;
    d = b*b;
    
    c= d + a;
    
    return(c);
    
    
    
}
