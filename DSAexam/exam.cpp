#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value for n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the values for array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<<"MAX :: "<<max<<endl;
    cout<<"min :: "<<min;
}