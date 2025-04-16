#include<iostream>
using namespace std;

int main(){
    int array[] = {78,4,12,40};
    int find;
    cout<<"enter element of array for linear search:"<<endl;
    cin>>find;

    int ans=-1;

    for(int i=0;i<5;i++){ 
        if(array[i]==find){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}