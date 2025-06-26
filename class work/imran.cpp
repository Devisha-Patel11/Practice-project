//->>> Multiple Inheritance <<<---
#include<iostream>
using namespace std;
class student
{
    string name;
    string class1;
    int age;
    int roll_no;
    public:
    void get_student();
    void display();
};
class marks
{
    float sub[5];
    public:
    float totaling=0;
    void get_marks();
    void total();
};
class information:public student,public marks{
    public:
    void info();
};
void student::get_student()
{
    cout<<"enter the name of student"<<endl;
    cin>>name;
    cout<<"enter the class of student"<<endl;
    cin>>class1;
    cout<<"enter the age of student"<<endl;
    cin>>age;
    cout<<"enter the roll no of student of student"<<endl;
    cin>>roll_no;
};
void student ::display()
{
    cout<<"name of student->>"<<name<<endl;
    cout<<"class of student ->> "<<class1<<endl;
    cout<<"age of student->> "<<age<<endl;
    cout<<"Roll number of student->> "<<roll_no<<endl;

}
void marks::get_marks()
{
    for(int i=0;i<5;i++)
    {
        cout<<"subject "<<i+1<<"  marks "<<endl;
        cin>>sub[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"subject "<<i+1<<" marks-->> "<<sub[i]<<endl;
    }
}
void marks ::total()
{
    for(int i=0;i<5;i++)
    {
        totaling=totaling+sub[i];
    }
    cout<<"total marks of student= "<<totaling<<endl;
}
void information::info()
{
    cout<<"///---->>>> sorry for yesterday behaviour <<<<<---///"<<endl;
    cout<<"--->>>> this is example of multiple inheritance <<<<----"<<endl;
    get_student();
    get_marks();
    total();
    display();
}
int main()
{
information a1;
a1.info();
    return 0;
}