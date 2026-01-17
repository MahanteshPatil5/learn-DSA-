// find first and last occurance  (a array is present and a key is given
//  find (index) when key comes first and find last when key comes)

// linear search find a frequency of a number(key)

#include<stdio.h>
#include<stdlib.h>

int main(){
    int arr[5];
    printf("Enter elemts to arr[5] : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int key,first=-1,last=-1;
    printf("ENter a key:: ");
    scanf("%d",&key);

    for(int i=0;i<5;i++){
        if(arr[i] == key){
            if(first == -1){
            first = i;}
            last = i;
        }
    }
    if(first == -1){
        printf("\nNot found the key in arr");
    }
    else{
        printf("The ocurance of key %d is :: ",key);
        printf("First = %d and last = %d",first,last);
    }
    return 0;
}