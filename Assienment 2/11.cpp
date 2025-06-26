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
    B(){
        cout<<"I am a base class B";
    }
};
class C: public A,public B{
};
int main(){
    
    C objc;
return 0;
}