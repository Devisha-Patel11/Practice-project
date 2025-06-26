#include<iostream>
using namespace std;
float area(float a)
{
    return 3.14*a*a;
}
float area(float c,float d)
{
    return c*d;
}
double area(double p, double q)
{
    return 0.5*p*q;
}
int main()
{
    float r;
    cout<<"Enter the radius of circle :"<<endl;
    cin>>r;
    cout<<"Area of circle : "<<area(r)<<endl;
    float l,b;
    cout<<"Enter the lengh and width of rectangle : "<<endl;
    cin>>l>>b;
    cout<<"Area of rectangle : "<<area(l,b)<<endl;
    double base,height;
    cout<<"Enter the base and height of triangle"<<endl;
    cin>>base>>height;
    cout<<"Area of triangle : "<<area(base,height)<<endl;
    return 0;
}

