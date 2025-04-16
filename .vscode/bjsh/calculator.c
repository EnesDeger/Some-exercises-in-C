#include <stdio.h>

int summ(int a, int b);
int ext (int a, int b);
int prod(int a, int b);
int rate(int a, int b);
int gcd(int n, int m);


int main(){
    
    int a, b, result;
    int *c;
    char opt,go;
    c = &result;
    
    printf("Summition   = +\nExtraction  = -\nProduct     = *\nRate        = /\nGCD         = $\n");
    
    printf("Enter your expression (e.g. 3 + 5) : ");
    scanf("%d %c %d",&a,&opt,&b);
    
    
    if(opt == '+'){
    *c = summ(a,b);
    }
    else if(opt == '-'){
    *c = ext(a,b);
    }
    else if(opt == '*'){
    *c = prod(a,b);
    }
    else if(opt == '/'){
        if(b!=0){
        *c = rate(a,b);
        }
    else
    printf("Denominator can't be zero!");
    }
    else if(opt == '$'){
    *c = gcd(a,b);
    }
    else{
    printf("%c is an invalid operation!",opt);
    }
    printf("\nResult = %d", result);
}

int summ(int a, int b){
    int c;
    c = a + b;
    return(c);
}

int ext (int a, int b){
    int c;
    c = a - b;
    return(c);
}

int prod(int a, int b){
    int c;
    c = a * b;
    return(c);
}

int rate(int a, int b){
    int c;
    c = a / b;
    return(c);
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