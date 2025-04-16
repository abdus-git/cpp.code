#include<iostream>
using namespace std;

int main(){
    int marks[] = {76,86,45,91};

    int sum = 0;
    for(int i=0;i<5;i++){
        sum+=marks[i];
    }
    cout<<"Total marks : "<<sum<<endl;
    return 0;
}