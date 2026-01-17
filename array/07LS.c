// linear search find a frequency of a number(key)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int count = 0,found=0,key,index;

    printf("\nEnter a key to find in array: ");
    scanf("%d",&key);

    for(int i = 0 ;i<5; i++){
        if(arr[i] == key){
            found = 1;
            count++;
            index = i;
        }
    }
    if(found){
        printf("\nit is present at :: %d ",index+1);
        printf("\nFrequency of the number is :: %d",count);
    }
    else{printf("It is not possive");
}
}