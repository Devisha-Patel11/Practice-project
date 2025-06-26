#include <iostream>
using namespace std;
class Bank
{
    string Account_number;
    string name;
    string IFSC_Code;
    float balance;
    float total_balance;
    float credit_balance;
    float debit_balance;

public:
    void Choices()
    {
        cout << "MENU" << endl;
        cout << "1: Credit Balance" << endl;
        cout << "2: Debit Balance" << endl;
        cout << "3: Show Total Balance" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: ";
    }
    void bank_information()
    {
        cout << "Enter Account number: ";
        cin >> Account_number;
        cout << "Enter the name of Account Holder: ";
        cin>> name;
        cout << "Enter IFSC code: ";
        cin >> IFSC_Code;
        cout << "Enter  balance: ";
        cin >> balance;
        total_balance = balance;
        cout << "Account total balance " << total_balance << endl;
    }

    void credit_balance_func()
    {
        cout << "Enter credit amount: ";
        cin >> credit_balance;
        total_balance += credit_balance;
        cout << "New total balance: " << total_balance << endl;
    }

    void debit_balance_func()
    {
        cout << "Enter debit amount: ";
        cin >> debit_balance;
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

    void show_total_balance()
    {
        cout << "Total balance: " << total_balance << endl;
    }
};

int main()
{
    Bank A1;
    A1.bank_information();
    int choice;

    do
    {
        A1.Choices();
        cin >> choice;

        switch (choice)
        {
        case 1:
            A1.credit_balance_func();
            break;
        case 2:
            A1.debit_balance_func();
            break;
        case 3:
            A1.show_total_balance();
            break;
        case 4:
            cout << "Exiting program. Thank you!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again!" << endl;
        }
    } while (choice != 4);

    return 0;
}