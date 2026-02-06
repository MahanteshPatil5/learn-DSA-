// This is am array to 
// find the count number of even number
// find the count number of odd number
// Print the sum of all elements 

#include<stdio.h>
int main(){
    int n;
    printf("Enter ther number of Elements of the Array : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the elemts of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,even[n],odd[n],evenC=0,oddC=0;
    for(int i=0;i<n;i++){
        if(arr[i] % 2 == 0){
            even[i] = arr[i];
            evenC++;
        }
        else{
            odd[i] = arr[i];
            oddC++;
        }
        sum=sum+arr[i];
    }
    printf("\nEVEN : %d ",evenC);
    printf("\nODD : %d ",oddC);
    printf("\nThe even numbers of : ");
    for(int i=0;i<n;i++){
        printf(" %d ",even[i]);
    }

    printf("\nThe ODD numbers of : ");
    for(int i=0;i<n;i++){
        printf(" %d ",odd[i]);
    }
    printf("\nThe SUM : %d",sum);
}