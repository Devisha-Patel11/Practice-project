#include<iostream>
using namespace std;
class Circle{
    private: 
    float radius;
    float pi=3.14;
    public: 
void getdata(){
    cout<<"Enter the value of Radius : ";
    cin>>radius;
}
void setdata(){
    cout<< "Value of radius is :"<<radius<<endl;
}
void Area_of_circle(){
    cout<<"Area of circle : "<<pi *radius*radius<<endl;
}
void Circumference_of_circle(){
    cout<<"Circumfrence of circle : "<<2*pi *radius<<endl;
}
};
int main(){
    Circle objc;
    objc.getdata();
    objc.setdata();
    objc.Area_of_circle();
    objc.Circumference_of_circle();
return 0;
}