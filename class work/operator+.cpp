#include<iostream>
using namespace std;
class Complex{
    int x,y;
    public:
    Complex (){}
    Complex(int i, int j){
        x=i;
        y=j;
    }
        void display(){
            cout<<x <<" +i"<<y<<endl;
        }
    Complex operator+(Complex);
};
Complex Complex:: operator+(Complex C){
    Complex T;
    T.x=x+C.x;
    T.y=y+C.y;
    return T;
}
int main(){
    Complex C1(2,3);
    Complex C2(4,3);
    Complex C3;
   C3=C1+C2;
    C1.display();
    C2.display();
    C3.display();
return 0;
}