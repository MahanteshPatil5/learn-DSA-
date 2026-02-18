#include<iostream>
#include<fstream>
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
    fstream myfile;
    myfile.open("stdent.txt",ios::out);
    if(!myfile){
        cout<<"\nFile is not created::";
    }
    else{
    cout<<"\nEnter the student Details :(name roll number and persentage )";
    for(int i=0;i<n;i++){
        cout<<"\nEnter data of std"<<(i+1);
        cin>>stud[i].name;
        cin>>stud[i].roll;
        cin>>stud[i].pers;
        myfile<<stud[i].name;
        myfile<<stud[i].roll;
        myfile<<stud[i].pers;
    }}
    cout<<"\nEnter a roll number to find the student: ";
    int roll;
    cin>>roll;
    for(int i=0;i<n;i++){
    if(roll == stud[i].roll){
        cout<<"name: "<<stud[i].name<<"\nroll number : "<<stud[i].roll<<"\npercentage : "<<stud[i].pers;
    }
    }
cout<<"\nNoo student with that roll :: ";
}
