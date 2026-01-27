//  code to  Check Palindrome (array or string)
// Two pointer concept

#include<stdio.h>

int main(){
    int n;
    printf("Enter Number of elements of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elemts to arr[%d] : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first =0,last=n-1,pali=1;
    while(first<last){
        if(arr[first] != arr[last]){
            pali = 0;
            break;
        }
        first++;last--;
    }
    if(pali==0){
        printf("The gven elemts of the array are not in palindrmic way ");
    }
    else{
        printf("\nElements of array \n::");
        for(int i=0;i<n;i++){
            printf(" %d ",arr[i]);
        }
        printf("  are in palindrmic way::");
    
    }
    return 0;
}