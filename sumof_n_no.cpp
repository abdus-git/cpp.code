#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"value of n to print sum of n natural no.="<<endl;
    cin>>n;
    int sum=0;

    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"sum of n natural no. is:"<<sum<<endl;
    return 0;
}