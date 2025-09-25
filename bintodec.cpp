#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int dec=0;
    int base = 1;
    while(num>0){
        int last= num%10;
        dec=dec+base*last;
        base*=2;
        num/=10;
    }
    cout<<dec;
    return 0;
}