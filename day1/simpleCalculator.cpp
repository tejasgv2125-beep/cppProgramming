#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    switch(m)
    {
        case 1:
            cout<<"Addition: "<<m+n<<endl;
            break;
        case 2:
            cout<<"Subtraction: 21"<<m-n<<endl;
            break;
        case 3:
            cout<<"Multiplication: "<<m*n<<endl;
            break;
        case 4:
            cout<<"Division: "<<m/n<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    

    return 0;
}