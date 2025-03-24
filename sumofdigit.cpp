#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    while(n>0){
        int last_digit = n%10;
        sum+=last_digit;
        n/=10;
    }
    cout<<"sum of digits of the given no.:"<<sum<<endl;
    return 0;
}