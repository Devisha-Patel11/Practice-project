#include <iostream>
using namespace std;
class Bank
{
    string Account_number="1123";
    string name;
    string IFSC_Code="BARBOCSUKAN";
    float balance=0;
    float total_balance=0;
    float credit_balance=0;
    float debit_balance=0;
    string Adhar_no;
    string Pan_no;
     public:
     int x;
    void Choices();
    void open();
    void display_information();
    void bank_information();
    void deposite_balance();
    void withdraw_balance();
    void display_total_balance();
Bank(void)
{
    cout<<"menu"<<endl;
    cout<<"1:you have an account then enter your account inforamation"<<endl;
    cout<<"2:if you want to open New account"<<endl;
    cout<<"3:Exit"<<endl;
}
};
void Bank::Choices()
    {
        cout << "MENU" << endl;
        cout << "1: Display Information"<<endl;
        cout << "2: Credit Balance" << endl;
        cout << "3: Debit Balance" << endl;
        cout << "4: Show Total Balance" << endl;
        cout << "5: Exit" << endl;
        cout << "Enter your choice: ";
    }
    void Bank::open()
    {
        cout<<"enter your Name"<<endl;
        cin>>name;
        cout<<"enter your Adhar number"<<endl;
        cin>>Adhar_no;
        cout<<"enter your Pan Number"<<endl;
        cin>>Pan_no;
        Account_number=Account_number+"12";
        cout<<"please give money for Account Opening(money must have greater than 2000)"<<endl;
        cin>>balance;
        x=balance;
        if(balance<2000)
        {
            cout<<"not opening Account"<<endl;    
        }
        else
        {
        cout<<"Account is opend"<<endl;
        }
        total_balance=balance;    
    }
void Bank::bank_information()
    {
        cout << "Enter Account number: ";
        cin >> Account_number;
        cout << "Enter the name of Account Holder: ";
        cin>> name;
        cout << "Enter  balance: ";
        cin >> balance;
        total_balance = balance;
        cout << "Account total balance " << total_balance << endl;
    }
    void Bank::display_information()
    {
        cout<<"Account number = "<<Account_number<<endl;
        cout<<"Account Holder Name = "<<name<<endl;
        cout<<"IFSC code of Bank = "<<IFSC_Code<<endl;
        cout<<"Last Credit Money = "<<credit_balance<<endl;
        cout<<"Last Debit Money = "<<debit_balance<<endl;
        cout<<"Account Total Balance = "<<total_balance<<endl;
    }
void Bank::deposite_balance()
    {
        cout << "Enter credit amount: ";
        cin>>credit_balance;
        total_balance += credit_balance;
        cout << "New total balance: " << total_balance << endl;
    }
void Bank :: withdraw_balance()
    {
        cout << "Enter debit amount: ";
        cin>> debit_balance;
        if (debit_balance > total_balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            total_balance -= debit_balance;
            cout << "New total balance: " << total_balance << endl;
        }
    }
    void Bank :: display_total_balance()
    {
        cout << "Total balance: " << total_balance << endl;
    }
int main()
{
    Bank A1,A2;
    static int count=0;
    int check;
    do
    {
    cout<<"\nenter your choice"<<endl;
    cin>>check;
    switch(check)
 {
    case 1:
    {
         count++;
    A1.bank_information();
    int choice;
    do
    {
        A1.Choices();
        cin >> choice;

        switch (choice)
        {
        case 1:
        
            A1.display_information();
            break;
        case 2:
            A1.deposite_balance();
            break;
        case 3:
            A1.withdraw_balance();
            break;
        case 4:
            A1.display_total_balance();
            break;
        case 5:
        cout<<"->>Thanks<<-"<<endl;
        A1.display_information();
        cout << "->>Exiting program.<<-" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);
    break;
    } 
    case 2:
    {
        A2.open();
        count++;    
    int choice;
    do
    {
        if(A2.x<2000)
        {
            choice=5;
        }
        else
        {
            A2.Choices();
        cin >> choice;
        }
        switch (choice)
        {
        case 1:
        
            A2.display_information();
            break;
        case 2:
            A2.deposite_balance();
            break;
        case 3:
            A2.withdraw_balance();
            break;
        case 4:
            A2.display_total_balance();
            break;
        case 5:
        cout<<"->>Thanks<<-"<<endl;
        if(A2.x<2000)
        {
            cout<<"Read Instruction Carefully"<<endl;
        }
        else
        {
        A2.display_information();
        }
            cout << "->>Exiting program.<<-" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);
    break;
    }
    case 3:
    {
cout<<"->>//thanks for Visiting Bank//<<-"<<endl;
break;
    }
    default:
    {
    cout<<"wrong Input->> Please Read Menu and put again input"<<endl;
    break;
    }
    }
    }
    while(check!=3);
   cout<<"numbers of account in Bank = "<<count<<endl;
return 0;
}