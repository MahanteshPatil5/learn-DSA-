#include<iostream>
using namespace std;

class students{
    public:
    int rollno;
    void show(){
        cout<<"R N : "<<rollno;
    }
};
int main(){
    students ClassA[10];
    ClassA[1].rollno = 10;
    ClassA[1].show();
}