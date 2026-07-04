#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int *a=&n;
    int b=(*a)*(*a);
    cout<<"the square of the number is "<<b<<endl;
    int c=(*a)*(*a)*(*a);
    cout<<"the cube of the number is "<<c<<endl;
    

    return 0;
}






