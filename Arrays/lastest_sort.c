//This code sorts the entered number by using 2 new arrays,
//One of theese arrays gets the number respectively and turns into the shorted array
//The other array is the same with the entered array initially, then changes the smallest value as 2147483647 (max value for int) step by step
#include <stdio.h>
#define Max_Value 2147483647
#define Min_Value -2147483647

void sortIntegers(int *nums, int len);
int location_of_smallest(int arr[], int length);

int main()
{
    int length;
    
    printf("Enter the length:");
    scanf("%d", &length);
    printf("(Numbers must be between %d and %d)\n",Max_Value,Min_Value);
    if(length<=0){
        printf("Length must be positive!");
        return(0);
    }
    int x[length];
    for(int j=0; j<length;j++){
    printf("Enter number %d:",j+1);
    scanf("%d",&x[j]);
    }
    sortIntegers(x,length);
    return(0);
}

void sortIntegers(int *nums, int len){
    
    int smallest;
    int new_array[len], last_array[len];
    //to store the original array, new_array is defined.
    for(int j=0; j<len; j++){
        new_array[j]=nums[j];
    }
    
    for(int i=0; i<len; i++){
        smallest = location_of_smallest(new_array, len);
        last_array[i]=new_array[smallest];
        new_array[smallest]= Max_Value;
        }
        printf("The sorted integers: ");
        for(int k=0; k<len; k++){
        printf(" %d ",last_array[k]);
    }
}
int location_of_smallest(int *arr, int length){
    int loc_small=0;
    for(int i=0; i<length; i++){
        if(arr[i]<arr[loc_small]){
            loc_small = i;
        }
    }
    return(loc_small);
 }