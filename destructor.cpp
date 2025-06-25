#include<iostream>
using namespace std;

class rectangle{
public:
    int l;
    int b;

    rectangle(){ 
        l=0;
        b=0;
    }

    rectangle(int x, int y){ 
        l=x;
        b=y;
    }

    rectangle(rectangle& r){ 
        l=r.l;
        b=r.b;
    }

    ~rectangle(){
        cout<<"destructor is called"<<endl;
    }
};

int main(){
    
    rectangle* r1;
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1;

    rectangle r2(4,9);
    cout<<r2.l<<" "<<r2.b<<endl;

    rectangle r3=r2;
    cout<<r3.l<<" "<<r3.b<<endl;

    return 0;
}