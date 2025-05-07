#include <stdio.h>
#define NOT_FOUND -1

int search(int arr[], int num_search, int length, int *m);

int main(){
    int n, result, srch, loc;
    int  x[7] = {5,8,7,3,9,1,2};
    
    printf("Enter the number to search:");
    scanf("%d", &srch);
    n= 7;
    result = search(x, srch,n,&loc);
    
    
    if(result != NOT_FOUND){
        
    printf("Number has found as element %d in array.", loc);
    }
    else{
        
    printf("Number has not found in array.");
    }
    
}

int search(int arr[], int num_search, int length, int *m){
    int i,k;
    for(i=0; i<length; i++){
    
    if(arr[i] == num_search){
        *m = i+1;
        return(i);
    }
    }
    return(NOT_FOUND);
}