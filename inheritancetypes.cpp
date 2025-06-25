#include<iostream>
using namespace std;

class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child : public parent{
public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grandchild : public child{
public:
    grandchild(){
        cout<<"grand child class"<<endl;
    }
};

int main(){
    grandchild c;
    return 0;
}