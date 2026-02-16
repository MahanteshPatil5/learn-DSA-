#include<fstream>
#include<iostream>
using namespace std;
int main(){
    fstream file;
    file.open("sample.txt",ios::out);
    if(!file){
        cout<<"file not created ";
    }
    else{
        cout<<" file created ";
    }
    file<<"thi is file content ";
    file<<"created and written this in it ";

    file.close();

    file.open("sample.txt", ios::in);
    cout<<"file content is :: ";
    char ch;
    while(file.get(ch)){
        cout<<ch;
    }
    file.close();
    return 0;
}