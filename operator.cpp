#include<iostream>
using namespace std;
int main(){
    int a,b;
    bool exp1 = true;
    bool exp2 = false;

    cout<<"value of a:";
    cin>>a;
    cout<<"value of b is:";
    cin>>b;
    //arithmetic operator
    cout<<"a+b:"<<a+b<<endl;
    cout<<"a-b:"<<a-b<<endl;
    cout<<"a*b:"<<a*b<<endl;
    cout<<"a/b:"<<a/b<<endl;

    //assignment oper
    a+=2;
    cout<<"a+=2:"<<a<<endl;
    b-=5;
    cout<<"b-=5:"<<b<<endl;

    //relational oper
    cout<<(a==b)<<endl;
    cout<<(a<b)<<endl;

    //logical oper
    cout<<"value of logical oper. by using &&: "<<(exp1&&exp2)<<endl;
    cout<<"value of logical oper by using || :"<<((a==b)||(a>b))<<endl;
    cout<<"value of logical oper by using ! :"<<(!exp2)<<endl;

    //Bitwise oper
    cout<<"bitwise of a and b :"<<(a&b)<<endl;
    cout<<"bitwise of a or b :"<<(a|b)<<endl;
    cout<<"left shift a<<b"<<(a<<1)<<endl;
    
    return 0;
}