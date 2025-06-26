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
    float total_balance;
    public:
    void choices();
    void bank_information();
    void input_balance();
    void output_balance();
    void display();
};
void Bank::choices()
{
    cout<<"MENU"<<endl;
    cout<<"1:Display Balance"<<endl;
    cout<<"2:IF wants to deposit money"<<endl;
    cout<<"3:if you want to withdrawl money"<<endl;
    cout<<"4:exit"<<endl;
    cout<<"enter choice"<<endl;
}
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
   cout<<"enter the crediting money"<<endl;
   cin>>credit_balance;
   total_balance=total_balance+credit_balance;
   cout<<"Total balance : "<<total_balance<<endl;
}
void Bank::output_balance()
{
    cout<<"enter debiting money"<<endl;
    cin>>debit_balance;
    total_balance=total_balance-debit_balance;
    cout<<"Total balance : "<<total_balance<<endl;
}
void Bank::display()
{
    cout<<"\nAccount_number = "<<Account_number<<endl;
    cout<<"Account Holder Name = "<<name<<endl;
    cout<<"IFSC Code = "<<IFSC_Code<<endl;
    cout<<"Last Balance = "<<balance<<endl;
    cout<<"Last Credit Money = "<<credit_balance<<endl;
    cout<<"Last Debit Money = "<<debit_balance<<endl;
    cout<<"current Balance = "<<total_balance<<endl;
}
int main()
{
    Bank A1;
    A1.bank_information();
     A1.choices();
    int choice;
    do
    {
        A1.choices();
        cin>>choice;
        switch(choice)
        {
            case 1:
    {
    A1.display();
    break;
    }
    case 2:
    {
    A1.input_balance();
    break;
    }
    case 3:
    {
    A1.output_balance();
    break;
    }
    case 4:
    {
        break;
    }
    default:
    {
    cout<<"invalid Input"<<endl;
    break;
    }
    }
    }
    while(choice!=4);
    return 0;
}