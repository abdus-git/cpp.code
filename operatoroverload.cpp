 #include<iostream>
 using namespace std;
 class Fraction{
public:
    int num;
    int den;

Fraction(int n, int d){
    num=n;
    den=d;
}

void display(){
    cout<<num<<"/"<<den<<endl;
}

Fraction add(Fraction f){
    int newNum = num*f.den +f.num*den;
    int newDen = den*f.den;
    Fraction ans(newNum,newDen);
    return ans;
}
 };
 
 int main(){
    Fraction f1(4,5);
    Fraction f2(3,4);
    f1.display();
    f2.display();

    Fraction f3 = f1.add(f2);
    f3.display();
    return 0;
 }