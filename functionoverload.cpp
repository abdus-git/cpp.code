#include<iostream>
using namespace std;

class sum{
public:
    void add(int x , int y){
        int sum = x + y;
        cout<<sum<<endl;
    }

    void add(int x , int y , int z){
        int sum = x+y+z;
        cout<<sum<<endl;
    }

    void add(float x , float y , float z){
        float sum = x+y+z;
        cout<<sum<<endl;
    }
};
int main(){
    sum s;
    s.add(3,5,8);
    s.add(6,3);
    s.add(float(4.6),float(3.5),float(1.2));
    
    return 0;
}