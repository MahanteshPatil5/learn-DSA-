#include<fstream>
#include<iostream>
using namespace std;
// int divid(int a,int b){
//     if(b==0){
//         throw(b);
//     }
//     else{
//         return (a/b);
//     }
// }

// int main(){
//     int x,y;
//     cout<<"Eter value for x,y :: ";
//     cin>>x>>y;

//     try{
//         divid(x,y);
//     }
//     catch(int num){
//         cout<<"Error in divizion by zero";
//     }
//     return 0;
// }

// Array out of bound
int main(){
    int arr[5];
    int ind;
    cout<<"ENter the elements of the array arr[5] ";
    for(int ind=0;ind<5;ind++){
    cin>>arr[ind];}

    cout<<"ENter the array"
    try{
    if(ind<0 && ind>5){
        throw(ind);
    }}
    catch(int){
        cout<<"Error Array out of bound  ";
    }
}