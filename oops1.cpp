#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    string branch;
    char sec;
    int roll;
    float cgpa;
};

void print(Student a){
    cout<<a.name<<"\n"<<a.branch<<" "<<a.sec<<"\n"<<a.roll<<"\n"<<a.cgpa<<endl;
}

int main(){
    Student s;
    s.name = "Keshav";
    s.branch = "AI";
    s.sec = 'B';
    s.roll = 98;
    s.cgpa = 8.3;

    Student s1;
    s1.name = "Abdus";
    s1.branch = "AI";
    s1.sec = 'A';
    s1.roll = 06;
    s1.cgpa = 8.8;

    print(s);

    
    return 0;
}