#include<iostream>
using namespace std;

int main(){
    int height[] ={1,8,6,2,5,4,8,3,7};
    int size = 9;
    int maxWater=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int width = j-i;
            int h = min(height[i], height[j]);
            int area = width *h;

            maxWater=max(maxWater,area);
        }
    }
    cout<<maxWater;
    return 0;
}