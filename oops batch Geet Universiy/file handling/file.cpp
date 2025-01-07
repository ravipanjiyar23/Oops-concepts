#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream file1;

    file1.open("C:\\Users\\1234\\Desktop\\file.txt");
    cout<<"file created"<<endl;

    file1.close();












    ofstream writef;

    writef.open("C:\\Users\\1234\\Desktop\\file.txt");
    writef<<"hi btech 3rd sem";

    cout<<"data entered"<<endl;

    writef.close();


















    ifstream readf;
    string str;
    readf.open("C:\\Users\\1234\\Desktop\\file.txt");
    while(getline(readf,str)){
        cout<<str;
    }
    cout<<endl;

    readf.close();








    ifstream rf;
    ofstream cf;

    rf.open("C:\\Users\\1234\\Desktop\\file.txt");
    cf.open("C:\\Users\\1234\\Desktop\\file2.txt"); 

    char st;

    while(rf.get(st)){
        cf.put(st);
    }

    cout<<"copied !"<<endl;
    rf.close();
    cf.close();












    int val  = remove("C:\\Users\\1234\\Desktop\\file.txt");
    if(val==0) cout<<"file deleted";
    else cout<<"file not deleted";
}