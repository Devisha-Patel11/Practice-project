#include<iostream>
using namespace std;
class OperatorOverloded{
    public :
    void show(int a){
        cout<<"Integer "<<endl;
    }
    void show(double a){
        cout<<"Double"<<endl;
    }
    void show(int a,double b){
        cout<<"First Integer and Second double"<<endl;
    }
    void show(double a,int b){
        cout<<"First is Double and Second is Integer"<<endl;
    }
};
int main(){
    OperatorOverloded objo;
    objo.show(10);
    objo.show(1.5);
    objo.show(12,4.2);
    objo.show(5.1,12);
return 0;
}