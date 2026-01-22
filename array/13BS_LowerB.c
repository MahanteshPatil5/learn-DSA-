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
    printf("ENter the key to find in the arr: ");
    scanf("%d",&key);

    int found = 0,first = 0,last = n-1,mid,ind=0;

    while(first<=last)
    if(found==0){
        printf("\nthe key is not found in the arr");
    }
    else{
        printf("The key %d can be inserted at the place:%d",key,ind);
    }
return 0;
}