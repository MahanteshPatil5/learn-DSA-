// this  program will find the lage sub array when target is given 
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of array elements : ");
    scanf("%d",&n);

    int arr[n],target;
    printf("ENter thearray elemts :: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target value : ");
    scanf("%d",&target);
    int first=0,last=0,sum=0,max=0,length=0;
    
    for(int last=0;last<n;last++){
        sum = sum+arr[last];
        while(sum>target)
        {
            sum = sum-arr[first];
            first++;
        }
        if(sum == target){
            length = last-first+1;
            if(length>max){ 
                max = length;
            }
        }
    }
    
    printf("The lenght of the subaray is : %d",max);
}