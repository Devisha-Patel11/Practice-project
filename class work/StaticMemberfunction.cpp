#include<iostream>
using namespace std;
class A{
    int x;
    static int y;
    public:
    // void get_data(int a){
    //     x=a;
    // }
    //use constructor in place get data
    A(int a){
        x=a;
    }
    void display(){
        cout<<x<<"    "<<y<<"    ";
    }
    void modify_static(int b){
        y=b;
    }
    static void display1(){
        cout<<y<<"    ";
    }
    ~A(){
        cout<<"Object Destroyed "<< x <<"   ";
    }
};
int A::y;
int main(){
    // A obj1,obj2;
    // obj1.get_data(27);

    A obj1(12),obj2(55);
    obj1.display();
    obj1.display1();

    obj1.modify_static(20);     //modify static variable in one obj change in another obj
    
    // obj2.get_data(12);
    obj2.display();
    obj2.display1();
    

return 0;
}
