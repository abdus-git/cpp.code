#include<iostream>
using namespace std;
int c =34;

int main(){
int a,b,c;
cout<<"Enter the value of a:"<<endl;
cin>>a;
cout<<"Enter the value of b:"<<endl;
cin>>b;
c=a+b;
cout<<"sum of a and b is: "<<c<<endl;
cout<<"The global c is:"<<::c;//to print global variable use ::

return 0;
}