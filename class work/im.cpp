/*9->> .Write a C++ program to overload operator ++ and operator －－ using friend 
functions*/
#include<iostream>
using namespace std;
class Test{
    int x;
    int y;
    int z;
    public:
    Test(int i,int j, int k){
        x=i;
        y=j;
        z=k;
    }
    void display(){
       cout<<x<<"  ";
       cout<<y<<"  ";
       cout<<z<<"  ";
       cout<<endl;
    }
    friend Test operator++(Test&);
    friend Test operator--(Test&);
};
Test operator++(Test &obj){
    ++obj.x;
    ++obj.y;
    ++obj.z;
    return obj;
}
Test operator--(Test &obj){
    --obj.x;
    --obj.y;
    --obj.z;
    return obj;
}
int main(){
    Test ob(10,20,32);
    ob.display();
    ++ob;
    ob.display();
    --ob;
    ob.display();
    return 0;
}