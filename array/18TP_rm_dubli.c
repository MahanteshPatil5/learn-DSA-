// This is to remove the dublicate elements from the sorted array

#include<stdio.h>
int main(){
    int n,first,last;
    printf("Enter number of elemts of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    first=0;last=n-1;

    for(int i=1;i<n;i++){
            if(arr[first] != arr[i]){
                first++;
                arr[first] = arr[i];
            }
            
    }
    
    printf("The the elemts of array:");
    for(int i=0;i<=first;i++){
        printf("%d",arr[i]);
    }
    return 0;
}