#include<stdio.h>
#include<stdlib.h>

// ARRAY
// int main(){
//     printf("Here learn DSA And share :");
//     printf("\nThis is my first day so from tomorrow onwards i will share more code");
//     return 0;
// }

// Problem largest and small

int main(){
    int arr[5];
    printf("ENter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int large = arr[0];
    int small = arr[0];
    for(int i=1;i<5;i++){
        if(large < arr[i]){
            large = arr[i];
        }
        if(small > arr[i])
        {    small = arr[i];
    }
}
printf("\nLarge = %d",large);
printf("\nsmall = %d",small);
}