#include<iostream>
using namespace std;  
class Student{
    public:
    string name;
    string branch;
    int roll;

    Student(){
        //deafult constructor
    }
    Student(string s, string b, int r){   //parametrized constructor
        name=s;
        branch=b;
        roll=r;
    }

    Student(string s, int r){
        name=s;
        roll=r;
    }
};



int main(){
    Student s1;
    s1.name = "Keshav";
    s1.branch = "AI";
    s1.roll = 98;

    Student s2("keshu",98);
    Student s3("Rishu","c",9.0);

    Student s4=s1; //Deep copy
    s4.name = "Lakshya";

    Student s5(s1); //copy constructor -deep
    s5.name = "Abdus";

    cout<<s3.name<<" "<<s3.branch<<" "<<s3.roll<<endl;
    cout<<s2.name<<" "<<s2.roll<<endl;
    cout<<s1.name<<" "<<s1.branch<<endl;
    cout<<s4.name<<" "<<s4.branch<<" "<<s4.roll<<endl;
    cout<<s5.name<<" "<<s5.branch<<" "<<s5.roll<<endl;

}


