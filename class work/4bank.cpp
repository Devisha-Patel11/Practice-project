#include<iostream>
using namespace std;
class Bank
{
    string Account_number;
    string name;
    string IFSC_Code;
    float balance;
    float credit_balance;
    float debit_balance;
    int c;
    float total_balance;
    public:
    void bank_information();
    void input_balance();
    void output_balance();
    void display();
};
void Bank::bank_information()
{
    cout<<"enter Account number"<<endl;
    cin>>Account_number;
    cout<<"enter the name of Account Holder"<<endl;
    cin>>name;
    cout<<"enter IFSC code "<<endl;
    cin>>IFSC_Code;
    cout<<"enter balance"<<"\n";
    cin>>balance;
    cout<<"Balance of Account:="<<balance<<endl;
    total_balance=balance;
}
void Bank::input_balance()
{
   
    cout<<"if you want to credit the money press 1 or no then press 0 \n";
    cin>>c;
    if(c==1)
    {
    cout<<"Enter the credit balance = ";
    cin>>credit_balance;
    total_balance=balance+credit_balance;    
    }
    else 
    { 
      credit_balance=0;
    }
}
void Bank::output_balance()
{
    
    cout<<"\nif want to debit money then press 1 or no press 0"<<endl;
    cin>>c;
    if(c==1){
        if(total_balance<=100)
        {
            cout<<"you have no enough money for debiting"<<endl;
        }   
            else
         {
            cout<<"\nenter debiting money = ";
            cin>>debit_balance;
            if(debit_balance>total_balance)
            {
                cout<<"insufficient money"<<endl;
                debit_balance=0;
            }
         }
    }
    else{
        debit_balance=0;
    }
    total_balance=total_balance-debit_balance;
}
void Bank::display(){
    cout<<"\nAccount_number = "<<Account_number<<endl;
    cout<<"Account Holder Name = "<<name<<endl;
    cout<<"IFSC Code = "<<IFSC_Code<<endl;
    cout<<"Last Balance = "<<balance<<endl;
    cout<<"Last Credit Money = "<<credit_balance<<endl;
    cout<<"Last Debit Money = "<<debit_balance<<endl;
    cout<<"current Balance = "<<total_balance<<endl;
}
int main(){
    Bank A1;
    A1.bank_information();
    A1.input_balance();
    A1.output_balance();
    A1.display();
    return 0;
}