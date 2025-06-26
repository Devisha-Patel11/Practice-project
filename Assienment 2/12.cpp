#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"Constructor A"<<endl;
    }
};
class B:public A{
    public:
    B() {
        cout<<"Constructor B"<<endl;
    }
};
class C:public B{
    public :
    C(){
        cout<<"Constructor C"<<endl;
    }
};
class D:virtual public C{
    public :
    D(){
        cout<<"Constructor D"<<endl;
    }
};
class E:virtual public C{
    public :
    E(){
        cout<<"Constructor E"<<endl;
    }
};
class F:public D,public E{
    public :
    F(){
        cout<<"Constructor F"<<endl;
    }
};
int main(){
    F objf;
return 0;
}