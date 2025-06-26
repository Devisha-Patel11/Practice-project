#include<iostream>
using namespace std;
int sub(int a, int b){
    cout<< a - b<<endl;
};
float sub(float a, float b){
    cout<< a - b<<endl;
};
int main(){
    int a, b;
    float c, d;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    sub(a, b);
    cout<<"Enter the value of c and d"<<endl;
    cin>>c>>d;
    sub(c, d);
    return 0;
}