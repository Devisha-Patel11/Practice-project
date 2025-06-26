#include<iostream>
using namespace std;
class student{
    int roll_no;
    char name[20];
    char mobile_no[10];
    public: 
    void get_student_data(){
        cout<<"Enter the roll no. of student : ";
        cin>>roll_no;
        cout<<"Enter the name of the student : ";
        cin>>name;
        cout<<"Enter the moblie no. of the student : ";
        cin>>mobile_no;
    }
    void display_data(){
        cout<<"Roll No. : "<<roll_no<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Mobile No. : "<<mobile_no<<endl;
    }
};
int main(){
    student sd;
    sd.get_student_data();
    sd.display_data();
return 0;
}