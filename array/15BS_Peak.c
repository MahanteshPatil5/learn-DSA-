// this is question to find the peak value index
// peak value in the arr means neabours are less then the mid 

// mountain means first increse then decrese so only we can find peak
// Example
// Array:
// 1 3 7 12 9 5 2

// Peak = 12
// Peak index = 3


#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elmens in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array in sorting form : ");
    for(int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }

    int first = 0,last = n-1,mid;

    while(first<last){
        mid = (first +last)/2;
        if(arr[mid] < arr[mid+1]){
            first = mid+1;
        }
        else if(arr[mid] > arr[mid+1])
        {
            last = mid;
        }
    }

        printf("\nThe peak is %d\npeak index is : %d",arr[first],first);

return 0;
}