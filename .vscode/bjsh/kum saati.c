#include <stdio.h>
int main()
{
    int i, j, k, l,d,a, number;
    printf("Enter your number:");
    scanf("%d", &number);    
    if(number % 2 == 0)
    printf("Number can't be even!");

    else
{
    k = number /2;
    l= number;
    d= number;
    for(j=1; j<=k; j++ )
{
    for(i=1; i<=l; i++)
{
    printf("$");
}
    printf("\n");

    for(a=number; a>=l && a>2; a-=2)
{
    
    
     printf(" ");
    
}
    l = l - 2;
}

   for(j=number; j>k; j-- )
{

    for(i=number; i>=d; i--)
{
    printf("$");
}
    printf("\n");
        for(i=4; i<=d; i+=2)
{
    printf(" ");
}
    d = d - 2;
}
return(0);
}
}