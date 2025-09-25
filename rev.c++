#include<iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    // int c;
    // c=b;
    // b=a;
    // a=c;
// without using of third variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;


    return 0;
}