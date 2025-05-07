#include <stdio.h>

int mysqrt (int a);


int main(){
    
    
    int number;
    
    printf("Enter your number:");
    scanf("%d", &number);
    
    
    printf("Integer square root of %d = %d", number, mysqrt(number));
    
    
}

int mysqrt (int a){
    
    double k;
    
    for(k=1 ; k * k <=a ; k++){
    
    k == k;
    
    }
    
    return(k-1);
    
    
}
