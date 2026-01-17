// linear search find a number(key)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("ENter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int found=0,key,index;
    printf("\nEnter a key to find in array: ");
    scanf("%d",&key);

    for(int i = 0 ;i<5; i++){
        if(arr[i] == key){
            found = 1;
            index = i;
        }
    }
    if(found){
        printf("it is present at :: %d ",index+1);
    }
    else{printf("It is not possive");
}
}