#include<iostream>
using namespace std;
class ABC{
    public:
    void hello();
};
void ABC::hello(){
    cout<<"Hello";
}
int main(){
    ABC obj;
    obj.hello();
return 0;
}