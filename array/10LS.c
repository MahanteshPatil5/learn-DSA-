// Finding the dublicate element using linear search

#include<stdio.h>
#include<stdlib.h>

int main(){

    int n,found =0;
    printf("ENter number of arr elementts of array : ");
    scanf("%d",&n);

    int arr[n],freq[n+1];
    for(int x=0;x<n;x++){
        freq[x] = 0;
    }

    printf("\nEnter the array elemts: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]] ++;
    }
    for(int i=0;i<n;i++){
    if(freq[i]>1){
        printf("Dublicate is : %d",i);
        break;
    }}

    return 0;
}


