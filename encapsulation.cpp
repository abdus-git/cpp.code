#include<iostream>
using namespace std;

class birds{
    int x; //private class

    public:
//For access the priv class, write a func set and get
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main(){
    birds b1;
    b1.set(4);
    cout<<b1.get()<<endl;
    
    return 0;
}