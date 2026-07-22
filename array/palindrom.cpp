#include<iostream>
using namespace std;

void palindrome(int arr[],int n){
    int left=0, right= n-1;
    while(left<right){
        if(arr[left] != arr[right]){
            cout<<"the array is not palindrome";
        }
        else{
            
        }
    }
}
int main(){

    int  n;
    cout<<"Enter the number of array elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    palindrome(arr,n);
}