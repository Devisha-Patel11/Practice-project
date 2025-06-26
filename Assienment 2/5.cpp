#include<iostream>
using namespace std;
class Employee{
    private :
    string name;
    int employeeid;
    double salary;
    public :
    Employee(string n, int emid, double s){
        name = n;
        employeeid=emid;
        salary=s;
    }
    void UdpdatedSalary(int rating){
        if (rating ==5){
            salary+=salary*0.30;
        }
        else if (rating==4){
            salary+=salary*0.20;
        }
        else if(rating ==3){
            salary+=salary*0.10;
        }
        else if (rating ==2){
            salary+=salary*0.05;
        }
    } 
    void display(){
        cout<<"Employee name : "<<name<<endl;
        cout<<"Employee ID : "<<employeeid<<endl;
        cout<<"Employee salary : "<<salary<<endl;
    }
};
int main(){
    string name ;
    int id,rating;
    double salary;
    cout<<" Enter Name , ID, Salary :";
    cin>>name>>id>>salary;
    Employee emp(name,id,salary);
    cout<<"Enter Performance of Employee :";
    cin>>rating;
    emp.UdpdatedSalary(rating);
    emp.display();
return 0;
}