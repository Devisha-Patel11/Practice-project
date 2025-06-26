#include<iostream>
using namespace std;
class Space{
    int x,y,z;
    public:
    void get_data(int i,int j,int k);
    void display();
    void operator ++();
};
void Space:: get_data(int i,int j, int k){
    x=i;
    y=j;
    z=k;
}
void Space :: display(){
    cout<<"     x : "<<x<<"      y : "<<y <<"       z : "<<z;
}
void Space :: operator++(){
    x=++x;
    y=++y;
    z=++z;
}
int main(){
    Space ob;
    ob.get_data(1,2,3);
    ob.display();
    ++ob;
    ob.display();
return 0;
}