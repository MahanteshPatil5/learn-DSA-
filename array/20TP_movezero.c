// this program to move all the zeros of an array to array end

#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of elements of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elemts to arr[%d] : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first =0,last=n-1,i=0;
    for(int i=0;i<n;i++){
       if(arr[i] != 0){
            arr[first] = arr[i];
            first++;
        }
        
    }

    for(int i= first; i<=last;i++){
        arr[i] = 0;
    }
    printf("\nElements of array ::");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}