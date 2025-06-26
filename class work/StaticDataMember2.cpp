#include<iostream>
using namespace std;
class A{
    int x=10;
    static int z;
    public:
    void getAdata(){
        x++;
        z++;
    }
    void displayAdata(){
        cout<<"x : "<<x<<endl;
        cout<<"z : "<<z<<endl;
    }
};
int A::z;
int main(){
    A obj1,obj2;
    obj1.getAdata();
    obj1.displayAdata();
    obj2.getAdata();
    obj2.displayAdata();
return 0;
}