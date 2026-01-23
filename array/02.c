// REv the arr

#include<stdio.h>
int main(){
    int arr[5],rev[5];
    printf("Enter the arr: ");
    for(int i= 0;i<5;i++){
        scanf("%d",&arr[i]);
        
    }
    int i=0;
    for(int j=4;j>=0;j--){
            rev[i] = arr[j];
            i++;
    }

    printf("The arrays are: \n");
    printf("arr\trev\n");
    for(int i=0;i<5;i++){
        printf("%d\t%d\n",arr[i],rev[i]);
    }
    return 0;
}