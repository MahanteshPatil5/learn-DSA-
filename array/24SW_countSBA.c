// this program will find the number of subarray whose sum is given target
// to find how many subarray with sum == target

#include<stdio.h>
int main(){
    int n;
    printf("ENter the number of elemsts of the array : ");
    scanf("%d",&n);
    int arr[n],target;
    printf("Enter the elements of the array :: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENter the target :: ");
    scanf("%d",&target);

    int sum=0,first=0,count=0;

    for(int last=0;last<n;last++){
        sum = sum+arr[last];
        if(sum==target){
            count++;
            sum = sum-arr[first];
            first++;
        }
        if(sum>target){
            sum = sum-arr[first];
            first++;
        }

    }
    printf("number of sub array :: %d",count);

}