// This question is about revising the 2 pointer concept with c++ 
// the question is to Move negative number to left of the array

#include<iostream>
using namespace std;

void TP(int arr[],int n){
    int left=0,right=n-1;
    while(left<right)
    {
        if(arr[left]<0){
            left++;
        }
        else if(arr[right]>=0){
            right--;
        }

        else{
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            
        left++;
        right--;
        }
        
    }

    cout<<"\n The array after moving zeros :  ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the number elemnts of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    TP(arr,n);
    return 0;
}

// FILE="reviseTP.c++" && gcc "$FILE.c" -o "$FILE" && ./"$FILE"a

// // output
// Enter the number elemnts of the array : 6
// Enter the array elements: -5 4 -3 2 0 -1

//  The array after moving zeros :  -5 -1 -3 2 0 4 