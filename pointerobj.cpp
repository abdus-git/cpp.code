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


};
int main(){
    Actors a1("Akshay","Hera pheri");
    Actors a2("Aamir","Dangal");

    Actors* p1 = &a1;
    cout<<(*p1).movie<<endl; //store value of a1(movie)
    cout<<p1<<endl; //address of a1
    (*p1).movie = "Housefull"; //change
    cout<<a1.movie<<endl;  

    return 0;
}