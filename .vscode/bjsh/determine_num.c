#include <stdio.h>
#include <math.h>

void determine (double number,int *c,double *b,char *sign);

int main(){
    
    double number, frac_num;
    int whole_num;
    char signs;
    
    
    printf("enter number:");
    scanf("%lf", &number);
    
    determine(number, &whole_num, &frac_num, &signs);
    
    printf("whole number      : %d \n",whole_num);
    printf("fractional number : %f \n" ,frac_num);
    printf("sign of number    : %c \n", signs);
    
    return(0);
    
}
    
    void determine (double number,int *c,double *b,char *sign){
        
        double a;
    
    a = fabs(number);
    *c = floor(a);
    *b = a - *c;
    

    
    if (number < 0){
    *sign = '-';
    }
    else if (number =0)
    *sign = ' ';
    else
    *sign = '+';


}