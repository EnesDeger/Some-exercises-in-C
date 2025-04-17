#include<stdio.h>
#include<math.h>

int isPrime(int n){
    
    int a, b,c;
    a=sqrt(n);
    
    for(b=a;b>1;b--){
        
        if(n % b==0){
            c=1;
            
        }
        else
        c=0;
        return(c);
    }
}

int main(){
    
    int num,k,l;
    
    printf("Enter your number:");
    scanf("%d", &num);
    
    for(k=1;k<num;k++){
        
        l = num - k;
        
        if(isPrime(k)==0 & isPrime(l)==0){
        
        printf("%d = %d + %d\n",num,k,l);
        }
        else{
        continue;
        }
        
    }
    return(0);
    
}
