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
    cout<<"\nProgram to print the student details by taking from the teacher ";
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
        cout<<"name :: ";
        cin>>stud[i].name;
        myfile<<stud[i].name;
        cout<<"roll no. :: ";
        cin>>stud[i].roll;
        myfile<<stud[i].roll;
        cout<<"persentage :: ";
        cin>>stud[i].pers;
        myfile<<stud[i].pers;
    }}
    myfile.close();

    myfile.open("stdent.txt",ios::in);
    for(int j=0;j<n;j++){
        cout<<"\n\nstudent :: "<<j+1;
        cout<<"\nName : "<<stud[j].name<<"\n Roll no. : "<<stud[j].roll<<"\n Percentage : "<<stud[j].pers;
    }
    
    cout<<"\nEnter a roll number to find the student: ";
    int roll;
    cin>>roll;
    for(int i=0;i<n;i++){
    if(roll == stud[i].roll){
        cout<<"name: "<<stud[i].name<<"\nroll number : "<<stud[i].roll<<"\npercentage : "<<stud[i].pers;
    }
    else{
        cout<<"\nNoo student with that roll :: ";
    }
    }
    
    myfile.close();
}

// cheat
