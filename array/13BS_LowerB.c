// this is to find the index where the key can be 
// inserted in the sorted array
// Find Key in Sorted Array
#include<stdio.h>
int main(){
    int n,key;
    printf("Emter number of elmens in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in sorting form : ");
    for(int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to find index in the arr: ");
    scanf("%d",&key);

    int found = 0,first = 0,last = n-1,mid,ind=n;

    while(first<=last){
        mid = (first + last)/2;
        if(arr[mid] >= key){
            found = 1;
            ind = mid;
            last = mid-1;
            // break;
        }
        // else if(arr[mid] > key){
        //     last = mid - 1;
        // }
        else{
            first = mid +1;
        }
    }
    printf("The key %d can be inserted at the place : %d",key,ind);
    
return 0;
}