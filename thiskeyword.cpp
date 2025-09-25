#include<iostream>
using namespace std;

class Actors{
public:
    string name;
    string movie;

    Actors(string name, string movie){
        this->name=name;
        this->movie=movie;
    }

//class function
    void print(){
        cout<<name<<" "<<movie<<endl;
    }

};
int main(){
    Actors a1("Akshay","Hera pheri");
    Actors a2("Aamir","Dangal");

    a1.print();

    return 0;
}