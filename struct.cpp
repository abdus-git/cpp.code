#include<iostream>
using namespace std;

struct person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};
int main(){
    struct person p1;
    p1.first_name="Abdus";
    p1.last_name="sami";
    p1.age=19;
    p1.salary=2000000;
    cout<<"PERSON 1 DETAILS"<<endl;
    cout<<"First name is:"<<p1.first_name<<endl;
    cout<<"Last name is:"<<p1.last_name<<endl;
    cout<<"age:"<<p1.age<<endl;
    cout<<"salary:"<<p1.salary<<endl;
    
    return 0;
}