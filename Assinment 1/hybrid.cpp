#include<iostream>
using namespace std;
class A {
    public :
    int x;
};
class B:virtual public A{
    public :
    int y;
};
class C:virtual public A{
    public : 
    int z;
};
class D:public B, public C{
    public :
    int w;
};
int main(){
    D objd;
    objd.x=1;
    objd.y=2;
    objd.z=3;
    objd.w=4;
return 0;
}