#include <stdio.h>

int main()
{
    int n,i;
    
    
    printf("Enter the length of the array:");
    scanf("%d", &n);
    int x[n];
    
    for(i=0; i<n; i++)
    {
         switch(i)
         {
            case 0: printf("enter the %dst number:",i+1);
            scanf("%d", &x[i]);
            break;
            case 1: printf("enter the %dnd number:",i+1);
            scanf("%d", &x[i]);
            break;
            case 2: printf("enter the %drd number:",i+1);
            scanf("%d", &x[i]);
            break;
            default: printf("enter the %dth number:",i+1);
            scanf("%d", &x[i]);
            break;
         }
         
    }
    for(i=0; i<n; i++)
    {
        printf("Element %d = %d \n",i+1,x[i]);
        
    }
    return 0;
}