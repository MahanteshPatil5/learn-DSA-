#include<stdio.h>
int main(){
    int n;
    printf("ENte the number of char of the array : ");
    scanf("%d",&n);
    char arr[n];
    printf("Enter the elemets of charracter array : ");
    for(int i=0;i<n;i++){
        scanf("%c",&arr[i]);
    }

    int first = 0,len=0;
    for(int last=0;last<n;last++){
        len = last - first + 1;
        while (arr[first] == arr[last])
        {
            first++;
        }
        
    }
    printf("LEnght of highest : %d",len);
}