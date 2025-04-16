/*we can declare multiple function with same funcn name
 but use diff. parrameters */

 #include<iostream>
 using namespace std;
 
 int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
 }

 float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
 }
 
 int main(){
    int a, b;
    float c,d;
    cout<<"Enter first no.:"<<endl;
    cin>>a>>c;
    cout<<"Enter second no.:"<<endl;
    cin>>b>>d;
    cout<<"The sum is:"<<add(c,d)<<endl;
    // cout<<"The sum is:"<<add(c,d)<<endl;
    return 0;
 }