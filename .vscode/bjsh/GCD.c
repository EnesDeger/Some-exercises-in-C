#include <stdio.h>

int gcd(int n, int m);


int main(){
    
    int a, b;
    
    printf("Enter the first number  :");
    scanf("%d", &a);
    
    printf("Enter the second number :");
    scanf("%d", &b);
    
    printf("GCD of the numbers      : %d",gcd(a,b));
    
    return(0);
    
    
}


int gcd(int n, int m){
    
    int c,k,l,h,t;
    
    if(n>=m)
    k=n , l=m;
    else k=m , l=n;
    
    do
    {
    
    c=k/l;
    
    h=k-l*c;
    
    t=l;
    
    l=h;
    }
    while(h>0);
    
    return(t);
    
}