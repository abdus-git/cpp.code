#include<iostream>
using namespace std;

int main(){
    double x=3;
    int n=5 ;
    long binform = n;
    double ans = 1;
    while (binform>0)
    {
      if (binform %2 ==1)
      {
        ans*=x;
      }
      x*=x;
      binform /=2;
    }
    cout<<ans;
    return 0;
}