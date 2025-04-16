#include<iostream>
using namespace std;

void changevalue(int z, int &y){
    z=100;              //by using "&" it pass by reference
    y=101;
}
int main(){
    int a=6;
    int b=5;
    changevalue(a,b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}