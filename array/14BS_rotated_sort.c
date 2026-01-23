// Search in Rotated Sorted Array

#include<stdio.h>

int main(){
    int n,key;
    printf("Enter number of elmens in array : ");
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
        if(arr[first] <= arr[mid]){
            if(arr[mid] == key) { found = 1; break; }
            last = mid-1;
        }
        else{
            first = mid+1;
            // if(arr[mid] == key) { found = 1; break; }
        }
    }
    if(found == 1){
    printf("The key is at : %d",mid);}
    else{printf("Not found");}
return 0;
}