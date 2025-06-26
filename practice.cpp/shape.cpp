#include<iostream>
using namespace std;
class shape{
    float l,b,s;
    public:
    void Area_of_rectangle();
    void Area_of_square();
    void perimeter_of_rectangle();
    void perimeter_of_square();
};
void shape::Area_of_rectangle(){
    cout<<"Enter the value of length and breadth : ";
    cin>>l>>b;
    cout<<"Area of rectangle : "<<l*b<<endl;
}
void shape::Area_of_square(){
    cout<<"Enter the value of side : ";
    cin>>s;
    cout<<"Area of square : "<<s*s<<endl;
}
void shape::perimeter_of_rectangle(){
    cout<<"Enter the length and breadth : ";
    cin>>l>>b;
    cout<<"Peremeter of rectangle : "<<2*(l+b)<<endl;
}
void shape::perimeter_of_square(){
    cout<<"Enter the side of square : ";
    cin>>s;
    cout<<"perimeter of square : "<<4*s<<endl;
}

int main(){
    shape obj;
    obj.Area_of_rectangle();
    obj.Area_of_square();
    obj.perimeter_of_rectangle();
    obj.perimeter_of_square();
return 0;
}