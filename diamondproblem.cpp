#include<iostream>
using namespace std;

class parent{
public:
    parent(){
        cout<<"parent class"<<endl;
    }
};

class child1 : public parent{
public:
    child1(){
        cout<<"child 1 class"<<endl;
    }
};

class child2 : public parent{
public:
    child2(){
        cout<<"child 2 class"<<endl;
    }
};

class grandchild : public child1 , public child2{
public:
    grandchild(){
        cout<<"Grand child class"<<endl;
    }
};

int main(){
    grandchild g;
    return 0;
}