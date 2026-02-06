// revision of the concpets whic i have solved till now 
// question is about find max,min of the given array and find the revrse of the array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("\nEnter the number of elements of array:: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elemts to arr[n] : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0],min=arr[0];

    for(int i = 0 ;i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
int first = 0, last = 4;

while(first < last){
    int temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp;

    first++;
    last--;
}

    printf("\nMax of the number is : %d",max);
    printf("\nMin of the number is : %d",min);
    printf("\nThe reverse array of array is : ");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}