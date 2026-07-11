// a code to revise array and code in c++

// Array Statistics

// Write a C++ program to:

// Read n.
// Read n array elements.
// Find the maximum element.
// Find the minimum element.
// Find the sum of all elements.
// Find the average.
// Print the array in reverse order.

#include<iostream>
using namespace std;

int n;


void Fmax(int arr[]){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max element is : "<<max<<"\n";
}

void Fmin(int arr[]){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"max element is : "<<min<<"\n";
}

void Fsum(int arr[]){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"sum of elements : "<<sum<<"\n";
}

void Frev(int arr[]){
    int l=0,r=n-1,temp;
    while(l<r){
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    cout<<"Reversed array : ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    
}

int main(){
    
    cout<<"Enter number of elements of Arr : ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<< n <<" elements to array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Fmax(arr);
    Fmin(arr);
    Fsum(arr);
    Frev(arr);

    return 0;
}