#include <iostream>
using namespace std;
class Base {
public:
    int baseVar;
    Base() { baseVar = 100; }  
    void showBase() {
        cout << "Base class variable: " << baseVar << endl;
    }
};
class Derived1 : virtual public Base {
public:
    int d1Var;
    Derived1() { d1Var = 200; }
};
class Derived2 : virtual public Base {
public:
    int d2Var;
    Derived2() { d2Var = 300; }
};
class FinalDerived : public Derived1, public Derived2 {
public:
    void show() {
        cout << "Derived1 variable: " << d1Var << endl;
        cout << "Derived2 variable: " << d2Var << endl;
        showBase();  
    }
};
int main() {
    FinalDerived obj;
    obj.show();  
    return 0;
}
