// here take array elements then take a target 
// then find pair of elements present in array whose sum equal to target

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elemts of array::");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elemts :: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("Enter the target value: ");
    scanf("%d",&target);

    int start = 0,last = n-1,sum,found = 0;
    while(start<=last){
        sum = arr[start]+arr[last];

        if(sum == target){
            found = 1;
            break;
        }
        else if(sum < target){
            start++;
        }
        else{
            last--;
        }
    }
    if(found==1){
    printf("The pair is :: %d %d",arr[start],arr[last]);
    }
    else{
        printf("target value cannot be paired");
    }
    return 0;
}