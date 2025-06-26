#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am a base class A"<<endl;
    }
};
class B{
    public:
    void show(){
        cout<<"I am a class B";
    }
};
class C: public A,public B{
};
int main(){
    A obja;
    C objc;
    objc.show();
return 0;
}