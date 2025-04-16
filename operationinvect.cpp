#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
//cin>>input
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }
//vector output
    for(int n:v){
        cout<<n<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+2,11);

    //insert new elem
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}