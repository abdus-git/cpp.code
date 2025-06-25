#include<iostream>
using namespace std;

class rectangle{
public:
    int l;
    int b;

    rectangle(){ //deafult constructor - no arguments passed
        l=0;
        b=0;
    }

    rectangle(int x, int y){  //parameterise const - arg. passed
        l=x;
        b=y;
    }

    rectangle(rectangle& r){ //copy const - intialise an obj by another existing obj
        l=r.l;
        b=r.b;
    }
};

int main(){
    
    rectangle r1;
    cout<<r1.l<<" "<<r1.b<<endl;

    rectangle r2(4,9);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}