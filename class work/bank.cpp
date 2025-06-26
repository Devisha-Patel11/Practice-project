#include <iostream>
#include<conio.h>
using namespace std;
class bank {
public:
    void choices() {
        cout << "MENU \n";
        cout << "1: Check balance \n";
        cout << "2: Credit balance \n";
        cout << "3: Debit balance \n";
        cout << "4: Exit \n";
    }
    float credit_balance(int total_bal, int credit_bal) {
        return total_bal + credit_bal;
    }
    float debit_balance(int total_bal, int debit_bal) {
       return total_bal-debit_bal;
    }
    int check_bal(int total_bal) {
        return total_bal;
    }
};
int checking_detail(){
    bank work;
    int TB = 0; 
    int CB;       
    int DB;      
    int choice;
    do {
        work.choices(); 
        cout << "\nEnter your choice: "; 
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Your total balance is: " << work.check_bal(TB) << endl;
            break;
        case 2:
            cout << "Enter your credit amount: ";
            cin >> CB;
            TB = work.credit_balance(TB, CB); 
            cout << "Your total balance is: " << TB << endl;
            break;
        case 3:
            cout << "Enter your debit balance: ";
            cin >> DB;
            if (DB > TB) {
                 cout << "Insufficient balance. Transaction failed!" << endl;
             } 
            else {
                TB = work.debit_balance(TB, DB); 
                cout << "Your total balance is: " << TB << endl<<endl;
             }
            break;
        case 4:
            cout << "Exiting program. Thank you!" << endl<<endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
};
class create{
    public:
    int accountN;
    char N[10];
    int IFC;
    void get_data();
    void display_data();
};
void create::get_data(){
    cout<<"CREATING YOUR ACCOUNT PLEASE GIVE THE INFORMATION ! "<<endl;
    cout<<"Enter your name \n";
    cin>>N;
    cout<<"Enter account number \n ";
    cin>>accountN;
    cout<<"Enter your IFC code ";
    cin>>IFC;
}
void create::display_data(){
    cout<<"Your name is :" <<N<<endl;
    cout<<"Your account number is : "<<accountN<<endl;
    cout<<"Your IFC code is : "<<IFC<<endl;
    string debitORcredit;
    cout<<"If you want to debit or credit in your account please type 'yes'otherwise press any key : \n\n";
    cin>>debitORcredit;
    if(debitORcredit=="yes"){
        checking_detail();
    }else{
        cout<<"OKAY THANK YOU !" ;
    }
}
int createAcc(){
    string checkInfo;
    create c;
    c.get_data();
    // c.display_data();
    cout<<"Your account is created " <<endl<<endl;
    cout<<"If you want to check your information please press 'yes' otherwise type 'no' "<<endl;
    cin>>checkInfo;
    if(checkInfo=="yes"){
         c.display_data();
    }
}    
int main(){
    string checkA;
    cout<<"You have a account in this bank if yes type 'yes' otherwise type 'no' \n";
    cin>>checkA;
    if(checkA=="yes"){
        cout<<"Your account have already exist ! "<<endl<<endl ;
       checking_detail();
    }
    else{
        createAcc();
    }
}