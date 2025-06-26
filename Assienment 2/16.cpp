#include<iostream>
using namespace std;
template<class T>
class Display{
    private:
    T value1,value2;
    public:
    Display(T a, T b){
        value1=a;
        value2=b;
    }
    void show(){
        cout<<"Value 1: "<<value1<<endl;
        cout<<"Value 2: "<<value2<<endl;
    }
    void add(){
        cout<<"Addition :"<<value1+value2<<endl;
    }
};
int main(){
    Display<int>obj1(10,20);
    obj1.show();
    obj1.add();
    cout<<endl;
    Display<float> obj2(3.5,7.2);
    obj2.show();
    obj2.add();
return 0;
}