#include <stdio.h>

int location_of_smallest(int arr[], int length);
void sort(int arr[],int length);

int main(){
    int n, i,smallest;
    int element;
    n =100; 
    int x[n];
    i=0;
    do{
        
        if(i<n){
            printf("Enter the element %d:",i+1);
            scanf("%d", &element);
            if(element == 0){
                break;
            }
            x[i]=element;
            i++;
            }
        else{
            printf("Max array size reached!");
            break;
        }
    }
    while(1);
    sort(x,i);
}

int location_of_smallest(int arr[], int length){
    int smallest,i,k;
    smallest = arr[0];
    for(i=1; i<length; i++){
        if(smallest >arr[i]){
            smallest = arr[i];
        }
    }
    for(k=0; k<length; k++){
        if(smallest==arr[k]){
            return(k);
        }
    }
}

void sort(int arr[],int length){
    int i,k,temp, loc_small;
    loc_small = location_of_smallest(arr,length);
    int new_list[length];
    int list_without_smallest[length];
    for(i=0; i<length; i++){
        new_list[i] = arr[loc_small];
        for(k=0; k<length; k++){
            if(k !=loc_small){
                list_without_smallest[k] = arr[k];
            }
            else{
                list_without_smallest[k] = 1000000;
                arr[k]=100000;
            }
        }
        loc_small = location_of_smallest(list_without_smallest,length);
    }
    printf("Shorted list: ");
    for(int l=0; l<length;l++){
        printf("%d ",new_list[l]);
    }
}