#include<iostream>
using namespace std;
class Person{
    private: 
    string name ;
    float age;
    string country;
    public: 
void getdata(){
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Age: ";
    cin>>age;
    cout<<"Enter the country: ";
    cin>>country;
}
void setdata(){
    cout<< "The name of person :"<<name<<endl;
    cout<<"The age of person  : "<<age<<endl;
    cout<<"The country name of person : "<<country<<endl;
}
};
int main(){
    Person objp;
    objp.getdata();
    objp.setdata();
return 0;
}