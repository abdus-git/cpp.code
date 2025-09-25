#include<iostream>
using namespace std;
class Vehicle{  //parent class
public:
    int topspeed;
    float mileage;
    string brand;

};
class Bike : public Vehicle{  //child or derived class
public: 
    int wheels;
    int gears;
}; 
int main(){
    Bike b1;
    b1.brand = "Yamha";
    b1.gears = 5;

    cout<<b1.brand<<endl;
    cout<<b1.gears<<endl;
    return 0;
}