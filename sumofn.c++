#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    //while loop
    int sum=0;

    // int i=1;
    // while(i<=n){
    //     sum+=i;
    //     i++;
    // }

    //for loop
    for(int i=0; i<=n; i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
    
}