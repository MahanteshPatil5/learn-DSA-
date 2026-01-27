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
    while(first<last){

        if(arr[i] != 0){
            arr[first] = arr[i];
        }
        else{
            arr[last] = arr[i];
            last--;
        }

        i++;
        first++;
    }
    printf("\nElements of array ::");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}