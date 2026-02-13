// this program is to use slidning window problem
// Find the smallest subarray sum > target
#include<stdio.h>
int main(){
    int n,target;

    printf("Enter the number eements in the array :: ");
    scanf(" %d ",&n);

    int arr[n];
    printf("Enter the Elements of array :: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Target value :: ");
    scanf("%d",&target);
    
    // printf("Enter the value for K : ");
    // scanf("%d",&k);

    int minLen=n-1,sum=0,first=0;
    
    // while()
    return 0;
}