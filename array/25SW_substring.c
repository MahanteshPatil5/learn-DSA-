// this problem is to find the longest substring without repeating characters 
#include<stdio.h>
int main(){
    int n;
    printf("ENte the number of char of the array : ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the elemets of charracter array : ");
    for(int i=0;i<n;i++){
        scanf(" %c",&arr[i]);
    }

    int first = 0,len=0;
    char win;
    for(int last=0;last<n;last++){
        if(arr[first] == arr[last]){
            first++;
        }
        else{
            win = win+arr[last];
        }        
    }
    printf("LEnght of highest : %d",len);
}