// this is a chat gpt question after sometime
// Problem

// Given a sorted array and a target sum, find if there are two numbers whose sum equals the target.

// Example

// Array: [1, 2, 4, 6, 8, 9]
// Target: 10

// Output: Yes
// Because 2 + 8 = 10

#include <stdio.h>
int main()
{
    int n,T;
    printf("Enter the number of elements of Array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the SORTED array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("ENter ther target element : ");
    scanf("%d",&T);

    int left=0,right=n-1,sum,found=0;
    while(left<right)
    {
        sum = arr[left]+arr[right];

        if(sum<T){
            left++;
        }
        else if(sum>T)
        {
            right--;
        }
        else
        {
            found =1;
            printf("YES");
            printf("\n%d + %d = %d",arr[left],arr[right],T);
            break;
        }

    }
    
    if(found!=1){
        printf("The array do not have those elemts which sums to target ");
    }
}