#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    float marks;
    // Student(){

    // }
    Student(int r, float m, string n){
        rno =r;
        marks = m;
        name = n;
    }
    string getName(){
        return name;
    }

private:
    string name;
};
int main(){
    Student s1(43,82.1,"keshav");
    cout<<s1.marks<<endl;
    cout<<s1.getName()<<endl;
     
    return 0;
}