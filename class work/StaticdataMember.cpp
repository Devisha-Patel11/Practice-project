#include<iostream>
using namespace std;
class A{
    public :
    int x;
    static int z;
};
int A::z;
int main(){
    A obj1,obj2;
    cout<<obj1.x<<endl;
    cout<<obj2.z<<endl;
    cout<<A::z<<endl;
return 0;
}