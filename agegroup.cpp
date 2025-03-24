#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age: ";
cin>>age;
if(age<12){
    cout<<"you are child"<<endl;
}
else if(age>18){
    cout<<"You are adult"<<endl;
} else{
    cout<<"you are teenager"<<endl;
}
return 0;
}