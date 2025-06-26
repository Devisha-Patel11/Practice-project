#include<iostream>
using namespace std;
class Student{
    private :
    string name ;
    int Class ;
    int roll_no;
    float marks;
    public:
    void Student_information();
    void Grade();
    void display();
};
void Student::Student_information()
{
    cout<<"Enter Student Name :"<<endl;
    cin>>name;
    cout<<"Enter Standard :"<<endl;
    cin>>Class;
    cout<<"Enter Roll No."<<endl;
    cin>>roll_no;
    cout<<"Enter Marks :"<<"\n";
    cin>>marks;
}
void Student::display(){
    cout<<" Student Name = "<<name<<endl; 
    cout<<" Student Class = "<<Class <<endl;
    cout<<" Student Roll no. ="<<roll_no<<endl;
    cout<<" Student marks = "<<marks<<endl;
}
void Student::Grade()
{
    if(marks>=90)
    cout<<" Student Grade A ";
    else if (marks>=60)
    cout<<" Student Grade B";
    else if (marks >=35)
    cout<<" Student Grade C";
}
int main(){
    Student A1;
    A1.Student_information();
    A1.display();
    A1.Grade();
    return 0;
}