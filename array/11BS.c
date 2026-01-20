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
    printf("ENter the key to find in the arr: ");
    scanf("%d",&key);

    int found = 0,first = 0,last = n-1,mid;

    while(first<=last){
        mid = (first+last)/2;
        if(arr[mid] == key){
            printf("Key elemts %d  is found at the index: %d",key,mid+1);
            found = 1;
            break;
        }
        

        if(key < arr[mid]){
            last = mid-1;
        }
        else{
            first = mid+1;
        }
    }
    if(found==0){
        printf("\nthe key is not found in the arr");
    }
return 0;
}