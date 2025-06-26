#include <iostream>
using namespace std;
class employes{
    public:
    char name;
    double Id;
    char department;
void set_employee_name(){
    cout<<"Enter the name : ";
    cin>>name;
}
void set_employee_ID(){
    cout<<"Enter the id : ";
    cin>> Id;
}
void set_employee_department(){
    cout<<"Enter department : ";
    cin>>department;
}
void display() {
    cout<<name<<endl;
    cout<<Id<<endl;
    cout<<endl;
}
};
int main(){
    employes me;
    me.set_employee_name();
    me.set_employee_ID();
    me.set_employee_department();
    me.display();
    return 0;
}