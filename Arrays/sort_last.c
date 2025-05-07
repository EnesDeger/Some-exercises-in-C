//This code sorts the entered number by using 2 new arrays,
//One of theese arrays gets the number respectively and turns into the shorted array
//The other array is the same with the entered array initially, then changes the smallest value as 2147483647 (max value for int) step by step
#include <stdio.h>

void sortIntegers(int *nums, int len);
int location_of_smallest(int arr[], int length);

int main()
{
    int length;
    printf("Enter the length:");
    scanf("%d", &length);
    int x[length];
    printf("Enter %d numbers:",length);
    for(int i=0; i<length; i++){
        scanf("%d",&x[i]);
    }
    sortIntegers(x,length);
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
        new_array[smallest]= 2147483647;
        }
        printf("The sorted integers: ");
        for(int k=0; k<len; k++){
        printf("%d ",last_array[k]);
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