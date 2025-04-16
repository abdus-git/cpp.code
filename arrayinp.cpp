#include<iostream>
using namespace std;

int main(){
    char vowels[5];

    for(int i=0;i<5;i++){
        cin>>vowels[i];
    }
    cout<<"vowels in array form:";
    for(int i=0;i<5;i++){
        cout<<vowels[i]<<",";
    }
    return 0; 
}