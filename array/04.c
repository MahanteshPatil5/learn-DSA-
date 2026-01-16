#include<stdio.h>
#include<stdlib.h>



void sort(int arr[5],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
}
    printf("sotered IS : ");
    for(int i=0 ; i<5;i++){
        printf(" %d ",arr[i]);
    }
}

int main(){
    int arr[5];
    int n=5;
    printf("ENter 5 alements for arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int set=1; 
    for(int i=0; i<4;i++){
        if(arr[i] > arr[i+1] ){
            set = 0;
            break;
        }
    }


    if(set){
        printf("\nThe array is sorted::");
    }
    else{
        printf("Not sorted::\n");
        if(set == 0){
            sort(arr,n);
        }
    }

    
}
