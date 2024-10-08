#include<bits/stdc++.h>
using namespace std;


int fact(int n){

    //base case
    if(n==0 || n==1) return 1;

    //logic

    int prev = fact(n-1);

    return n*prev;


}



int sum(int n){
    //base case
    if(n==0) return 0;

    //logic
    int prev_sum= sum(n-1);

    //final ans

    return n+prev_sum;
}



int main(){
    int n;
    cin>>n;

    // int x = sum(n);
    // cout<<x<<endl;


    int y = fact(n);

    cout<<y<<endl;





    return 0;
}