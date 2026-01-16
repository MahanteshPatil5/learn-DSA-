#include<stdio.h>
#include<stdlib.h>

void sort( int arr[5]){
    for(int i=0;i<5;i++){
    if(arr[i] > arr[i+1]){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    printf("sotered IS : ");
    for(int i=0 ; i<5;i++){
        printf("%d",arr[i]);
    }
}
}

int main(){
    int arr[5];
    printf("ENter 5 alements for arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int set=1; 
    for(int i=0; i<5;i++){
        if(arr[i] > arr[i+1] ){
            set = 0;
        }
    }


    if(set){
        printf("\nThe array is sorted::");
    }
    else{
        printf("Not sorted::");
    }

    if(set == 0){
        sort(arr[5]);
    }
}
