// second large
#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int large = arr[0];
    int sec;
    for(int i=1;i<=5;i++){
        if(large < arr[i]){
            sec = large;
            large = arr[i];

        }
                    
}

printf("\nLarge = %d",large);
printf("\nsecond large Is  = %d",sec);
}