// this is used to find how many times the key is in the array
#include<stdio.h>

int firstocc(int arr[],int n,int key){
    int found = -1,first = 0,last = n-1,mid;

    while(first<=last){
        mid = (first+last)/2;

        if(arr[mid] == key){
            found = mid;
            last = mid-1;
        }
        else if(key>arr[mid]){
            first = mid + 1;
        }
        else {
            last = mid - 1;
        }
}   return found;
}

int lastocc(int arr[],int n,int key){
    int found = -1,first = 0,last = n-1,mid;
    while(first<=last){
        mid = (first+last)/2;

        if(arr[mid] == key){
            found = mid;
            first = mid+1;
        }
        else if(key>arr[mid]){
            first = mid+1;
        }
        else {
            last = mid-1;
        }
}   
    return found;
}

int main(){
    int n,key;
    printf("Enter number of elmens in array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array in sorting form : ");
    for(int i = 0 ; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key to find in the arr: ");
    scanf("%d",&key);


    int first = firstocc(arr,n,key);
    int last = lastocc(arr,n,key);

    int count;
    if(first == -1){
        count =0;
        printf("Key is not found in the array");}
    else{
        count = last - first +1;
        printf("first occurance is at : %d\n",first);
        printf("last occurance is at : %d\n",last);
        printf("the count of key is = %d",count);
    }
    return 0;
}