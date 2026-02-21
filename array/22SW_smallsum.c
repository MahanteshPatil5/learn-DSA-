// this program is to use slidning window problem
// Find the smallest subarray sum > target
#include<stdio.h>
int main(){
    int n,target;

    printf("Enter the number eements in the array :: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the Elements of array :: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Target value :: ");
    scanf("%d",&target);

    int minLen=n-1,sum=0,first=0,len;
    for (int last=0;last<=(n-1);last++){
        sum += arr[last];
        while (sum>=target)
        {
           len = last - first + 1;
           if(len < minLen){
            minLen = len;
           }
           sum = sum - arr[first];
           first++;
        }
        
    }
    printf("SUM = %d",sum);
    return 0;
}