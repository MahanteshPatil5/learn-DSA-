// revision of the concpets whic i have solved till now 
// question is about find max,min of the given array and find the revrse of the array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0],min=arr[0];

    for(int i = 0 ;i<=5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("\nMax of the number is : %d",max);
    printf("\nMin of the number is : %d",min);
}