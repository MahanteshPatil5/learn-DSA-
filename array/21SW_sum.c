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
        printf(" %d ",arr[i]);
    }
    printf("\n");
    int first =0,last=k,maxsum=sum;
    while(last<n){
        sum = sum - arr[first] + arr[last];
        if(sum>maxsum){
            maxsum = sum;
        }
        first++;
        last++;
        for(int j=first;j<last;j++){
            printf(" %d ",arr[j]);    
        }
        printf("\n");
    }

    printf("THe last subarray sum is :: %d",sum);
    
    printf("\nTHe maxsum is :: %d",maxsum);
    return 0;
}