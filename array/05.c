// MOVE ALL ZERO LAST in array

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("ENter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
        if(arr[j] == 0)
        {
            int t = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = t;
        }
        }
    }
    printf("\nelemts are arr[5] : ");
    for(int i=0;i<5;i++){
        printf(" %d ",arr[i]);
    
}}