#include<iostream>
using namespace std;
class Car{
    private: 
    string Company ;
    float model;
    string year;
    public: 
void getdata(){
    cout<<"Enter the Company Name: ";
    cin>>Company;
    cout<<"Enter the Model no.: ";
    cin>>model;
    cout<<"Enter the year: ";
    cin>>year;
}
void setdata(){
    cout<< "The name of Company :"<<Company<<endl;
    cout<<"The Model no.of car  : "<<model<<endl;
    cout<<"The year of car : "<<year<<endl;
}
};
int main(){
    Car objc;
    objc.getdata();
    objc.setdata();
return 0;
}