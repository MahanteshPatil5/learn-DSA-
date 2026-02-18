#include<iostream>
using namespace std;
class student{
    public:
    char name[20];
    int roll;
    float pers;
};

int main(){
    cout<<"Program to print the student details by taking from the teacher ";
    int n;
    cout<<"\nEnter the number of students : ";
    cin>>n;
    student stud[n];
    
    cout<<"\nEnter the student Details :(name roll number and persentage )";
    for(int i=0;i<n;i++){
        cout<<"\nEnter data of std"<<(i+1);
        cin>>stud[i].name;
        cin>>stud[i].roll;
        cin>>stud[i].pers;
    }
    
}