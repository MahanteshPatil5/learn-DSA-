#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=0;
    for(right =0;right<n;right++){
        if(arr[right]!=0){
            int temp=arr[right];
            arr[right] = arr[left];
            arr[left] = temp;
            
            left++;
        }
    }
    cout<<"sorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}