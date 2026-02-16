#include<fstream>
#include<iostream>
using namespace std;
int divid(int a,int b){
    if(b==0){
        throw(b);
    }
    else{
        return (a/b);
    }
}

int main(){
    int x,y;
    cout<<"Eter value for x,y :: ";
    cin>>x>>y;

    try{
        divid(x,y);
    }
    catch(int num){
        cout<<"Error in divizion by zero";
    }
    return 0;
}