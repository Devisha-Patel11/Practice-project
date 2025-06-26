#include<iostream>
using namespace std;
int multi(int x, int y){
    cout<<x*y<<endl;
}
int multi(int x, int y,int z){
    cout<<x*y*z<<endl;
}
float multi (float x, float y){
    cout<<x*y<<endl;
}
int main(){
    int a,c,b;
    cout<<"Enter no. a: ";
    cin>>a;
    cout<<"Enter no. b: ";
    cin>>b;
    multi(a,b);

    cout<<"Enter no. c: ";
    cin>>c;
    multi(a,b,c);

    float d,e;
    cout<<"Enter no. d :";
    cin>>d;
    cout<<"Enter no. e :";
    cin>>e;
    multi(d,e);

return 0;
}