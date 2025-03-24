#include<iostream>
using namespace std;
int glo =7;
void sum(){
    cout<<glo;
}
int main(){
    int glo=9;
    glo=67;
    sum();
    cout<<glo;
    
    return 0;
}