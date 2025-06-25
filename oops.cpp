#include<iostream>
using namespace std;

    class Fruit{
    public:
        string name;
        string color;
        int price;
    };

    int main(){
        Fruit type;
        type.name = "orange";
        type.color = "orange";
        type.price = 50;
        cout<<type.name<<"-"<<type.price<<endl;

        Fruit *variety = new Fruit(); 
        variety->name = "Mango";
        variety->color = "yellow";
        cout<<variety->name<<"-"<<variety->color<<endl;
    return 0;
}