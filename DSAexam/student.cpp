#include<iostream>
using namespace std;
class student{
    char name[20];
    int roll;
    float pers;
};

int main(){
    cout<<"Program to print the student details by taking from the teacher ";
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    student std[n];
    
    cout<<"Enter the student Details :(name roll number and persentage )";
    for(int i=0;i<n;i++){
        cout<<"Enter data od std"<<(i+1);
        cin>>std[i].name[20];
        cin>>std[i].roll;
        cin>>std[i].pers;
    }
}