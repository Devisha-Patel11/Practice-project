#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"I am a base class A"<<endl;
    }
};
class B: public A{
};
int main(){
    B objb;
return 0;
}