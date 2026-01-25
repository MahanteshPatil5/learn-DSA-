#include<stdio.h>
int main(){
    int n,first,last;
    printf("Enter number of elemts of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the array Elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    first=0;last=n-1;
    while(first<last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
    printf("The reversed arra is :: ");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }

}