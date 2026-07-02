#include<iostream>
using namespace std;
int main(){
    int val =200;
    int &a=val;
    cout<<a<<val<<endl;
    a=205;
    cout<<a<<val<<endl;
    val=95;
    cout<<a<<" "<<val<<endl;
    return 0;
}