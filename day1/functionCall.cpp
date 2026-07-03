#include<iostream>
using namespace std;
void fn();//we should declare the function before calling it
int main()
{
    fn();
    return 0;
}
void fn()//function definition
{
    cout<<"Hello World";
}