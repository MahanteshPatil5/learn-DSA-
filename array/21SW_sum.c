// this is concept of the subarray like sliding window
// in this problem i will be solving the max sum of subarray of size k

#include<stdio.h>
int main(){
    int n,k,sum=0;
    printf("Enter number of elemts of arrya: ");
    scanf("%d",&n);
    int arr[n];
    printf("ENter the elemts of array : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the lenght of subarray k : ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        sum = sum+arr[i];
    }
    int first =0,last=k;
    while(last<n){
        sum = sum - arr[first] + arr[last];
        first++;
        last++;
        // else{
        
        // }
    }

    printf("THe sum is :: %d",sum);
    return 0;
}