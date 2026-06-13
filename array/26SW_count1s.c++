// Given a binary array nums, return the maximum number of consecutive 1's in the array.

 
// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter arr elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxc=0, count=0;

    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxc = max(maxc,count);
        }
        else{
            count = 0;
        }
    }

    cout<<"The consecutive 1 in the give array is : "<<maxc;

}