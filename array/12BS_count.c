// this is used to find how many times the key is in the array

void first(int arr[n],int n,int key){
    int found = -1,first = 0,last = n-1,mid;
    while(first<=last){
        mid = (first+last)/2;

        if(arr[mid] == key){
            last = mid-1;
        }
        else if(key>arr[mid]){
            last = mid-1;
        }
        else {
            first = mid+1;
        }
}}
void last(int arr[],int n,int key){
    int found = -1,first = 0,last = n-1,mid;
    while(first<=last){
        mid = (first+last)/2;

        if(arr[mid] == key){
            first = mid+1;
        }
        else if(key>arr[mid]){
            first = mid+1;
        }
        else {
            last = mid-1;
        }
}}
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


    int first = first(arr[n],n,key);
    int last = last(arr[n],n,key);

    int count = (first -last)-1;
    printf("The count of key is : %d",count);
    // if(found != -1 ){
    //     printf("Key elemts %d  is found at the index: %d",key,found);
    // }
    // else{
    //     printf("Key is not there in arr:::");
    // }
    return 0;
}