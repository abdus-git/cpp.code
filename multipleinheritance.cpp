#include<iostream>
using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    int century;
};
class Engineer{
public:
    int year;
    float cgpa;
    string domain;
};

class Lhodu : public Cricketer, Engineer{  //multiple Inheritance
public:
    string name;
    int stickers;
};

int main(){
    
    return 0;
}