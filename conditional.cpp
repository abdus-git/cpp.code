#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"print value of n to check it is even or odd"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number"<<endl;
    }else{
        cout<<n<<" is odd number"<<endl;
    }
    return 0;
}