#include<iostream>
using namespace std;

int main(){
    int marks[6] = {54,65,37,94,87,78};
    cout<<marks[2]<<endl;
    cout<<marks[5]<<endl;
    cout<<"size of array marks is "<<sizeof(marks)<<endl;
    cout<<"Length of array marks is "<<sizeof(marks)/sizeof(marks[0])<<endl;

    cout<<"Array is mutable"<<endl;
    marks[2]=74;
    cout<<marks[2]<<endl;
    return 0;
}