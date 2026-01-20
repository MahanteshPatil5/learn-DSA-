#include<stdio.h>
int main(){
    int arr[4];
    printf("Enter elemts for arr[4]: ");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    int n = 4,count=0;
    printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                printf("%d",arr[k]);
                count++;
            }
            printf("\n");
        }
        printf("\n");
    }
}