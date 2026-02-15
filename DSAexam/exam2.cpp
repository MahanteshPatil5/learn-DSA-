#include<iostream>
using namespace std;

// use of Class and object
// class students{
//     public:
//     int rollno;
//     void show(){
//         cout<<"R N : "<<rollno;
//     }
// };
// int main(){
//     students ClassA[10];
//     ClassA[1].rollno = 10;
//     ClassA[1].show();
// }

class A{
    public:
    int a,b,c;
    A(int x,int y,int z){
        a=x;
        b=y;
        c=z;
        if(a>b && a>c){
            cout<<"large is :: "<<a;
        }
        else if(b>a && b>c){
            cout<<"large is :: "<<b;
        }
        else{
            cout<<"large is :: "<<c;
        }
    }
};

int main(){
    A a(10,20,30);
}
