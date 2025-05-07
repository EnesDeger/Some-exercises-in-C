#include<stdio.h>


int main()
{
    
    int a,b,c,x,y,t,r;
    
    
    printf("Enter your number:");
    scanf("%d", &a);
    
    y=1;
    r=a;
    if(a>20)
    printf("Number must be less than 20!");
    else{
    
    
    if(a % 2 == 0)
    {
        for(c=a;c>0;c--)
        {
            
        for(x=1;x<=y;x++)
            {
            printf(" %d",x);
            }
        y=y+1;
        printf("\n");
        }
    }  
      
        
    
    else
        {
        
       
        
          for(c=a;c>0;c--)
            {
            
            for(x=a;x>=r;x--)
                {
                printf(" %d",x);
                }
            r=r-1;
            printf("\n");
        
        
            }
        }
    }
}
