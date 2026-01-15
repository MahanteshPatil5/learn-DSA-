// REv the arr

#include<stdio.h>
int main(){
    int arr[5],rev[5];
    printf("Enter the arr: ");
    for(int i= 0;i<5;i++){
        scanf("%d",&arr[i]);
        for(int j=5;j>0;j--){
            i=0;
            rev[i] = arr[j];
            i++;
        }
    }
    printf("The arrays are: ");
    printf("arr\trev");
    for(int i=0;i<5;i++){
        printf("%d\t%d",arr[i],rev[i]);
    }
    return 0;
}