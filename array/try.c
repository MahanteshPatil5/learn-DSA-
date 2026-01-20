#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int first = arr[0];
    int last = arr[5];

    for(int i=0;i<4;i++){
        if(arr){
        int temp = first;
        first = last;
        last = temp;
    }}
    printf("\nElements of array in reverse are\n::");
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    
}}