#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int digits=0;
    while(n>0){
        digits++;
        n/=10;
    }
    cout<<"Number of digits of given no. is:"<<digits<<endl;
    return 0;
}