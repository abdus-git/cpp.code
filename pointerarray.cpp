//pointer and arrays
#include<iostream>
using namespace std;

int main(){
    int marks[] = {78,98,87,45};
    
    int* p = marks;
    cout<<"The value of marks *p is "<<*p<<endl;
    cout<<"The value of marks *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of marks *(p+3) is "<<*(p+3)<<endl;
    return 0;
}