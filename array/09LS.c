// Finding the missing number using linear search

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int mis;
    int sumN,act = 0;
    printf("ENter number of arr elementts of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elemts to arr[n] : ");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        act = act+arr[i];
    }
    sumN = n*(n+1)/2;
    mis = sumN-act;
    printf("missing is : %d",mis);
    return 0;
}


