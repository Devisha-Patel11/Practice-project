#include<iostream>
using namespace std;
float volume(float a){
    return a*a;
}
float volume (float l,float b,float h){
    return l*b*h;
}
float volume(float r,float h){
    return 3.14*r*r*h;
}
int main(){
    float a;
    cout<<"Enter the side of cube : ";
    cin>>a;
    cout<<"Volume of cube : "<<volume(a)<<endl;
    float l,b,h;
    cout<<"Enter the length, breadth and height : ";
    cin>>l>>b>>h;
    cout<<"Volume of cuboid: "<<volume(l,b,h)<<endl;
    float R,H;
    cout<<"Enter the radius and height : ";
    cin>>R>>H;
    cout<<"Volume of cylinder: "<<volume(R,H)<<endl;
return 0;
}