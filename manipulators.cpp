#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a =4,b =65,c =1243;
    cout<<"value of b without manipulator is:"<<b<<endl
    cout<<"Value of a is:"<<setw(4)<<a<<endl;
    cout<<"Value of b is:"<<setw(4)<<b<<endl;
    cout<<"Value of c is:"<<setw(4)<<c<<endl;
    return 0;
}