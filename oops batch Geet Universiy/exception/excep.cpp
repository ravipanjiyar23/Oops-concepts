#include<iostream>
using namespace std;

int main(){
    int n,d;

    cin>>n>>d;

    int res=-1;
    try{
        if(d==0){
            string s = "hii";
            throw s;
        }

        res = n/d;
        cout<<res<<endl;
    }
    catch(string ex){
        // cout<<"division is not valid"<<endl;
        cout<<ex;


    }
    }

    