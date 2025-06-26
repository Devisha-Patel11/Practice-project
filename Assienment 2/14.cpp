#include<iostream>
using namespace std;
class Animal{
    public : 
    virtual void sound(){
        cout<<"Animal makes a sound "<<endl;
    }
};
class Dog:public Animal{
    public:
    void sound() override{
        cout<<"Dogs bark"<<endl;
    }
};
int main(){
    Animal *animal;
    Dog d;
    animal = &d;
    animal->sound();
return 0;
}  