// second large
#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int large,secl;

    if(arr[0]>arr[1]){
        large = arr[0];
        secl = arr[1];
    }
    else {
        large = arr[1];
        secl = arr[0];
    }
    for(int i=1;i<=5;i++){
        if(arr[i] > large){
            secl = large;
            large = arr[i];
        }
        else if( arr[i] > secl && arr[i] != large){
            secl = arr[i];
        }
    }
    printf("\nLarge = %d",large);
    printf("\nsecond large Is  = %d",secl);      
    }