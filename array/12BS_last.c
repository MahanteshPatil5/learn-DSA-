// Last Occurrence of key using Binary search

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

    int found = -1,first = 0,last = n-1,mid;
    
    while(first<=last){
        mid = (first+last)/2;

        if(arr[mid] == key){
            found = mid;
            first = mid+1;
        }
        else if(key>arr[mid]){
            first = mid+1;
        }
        else {
            last = mid-1;
        }
            
    }
    if(found != -1 ){
        printf("Key elemts %d  is found at the index: %d",key,found);
    }
    else{
        printf("Key is not there in arr:::");
    }
    return 0;
}