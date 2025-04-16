#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

//for loop
for(int i=0;i<5;i++){
    int elem;
    cin>>elem;
    v.push_back(elem);
}
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;

//for each loop
// for(int elem:v){
//     cout<<elem<<" ";
// }
// cout<<endl;

//while loop
int i=0;
while(i<v.size()){
    cout<<v[i]<<" ";
    i++;
}
cout<<endl;

    return 0;
}