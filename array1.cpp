#include<iostream>
using namespace std;

int main(){
    string name[4] = {"sami","rishu","akshat","paras"};
    cout<<name[3]<<endl;

    //for loop
    // for(int i=0;i<4;i++){
    //     cout<<"The name at "<<i<<" is "<<name[i]<<endl;
    // }

    //for each loop
    // for(string ele:name){
    //     cout<<<<ele<<endl;
    // }

    //while loop
    int i = 0;
    while(i<4){
        cout<<name[i]<<endl;
        i++;
    }
    return 0;
}