/*
Define a class named ‘Bank Account’ to represent following members
Data members:-
• Account Number
• Name of Depositor
• Account Type
• Balance Amount
Member functions:
• Initialize members
• Deposit Amount
• Withdraw Amount
• Display Balance
*/

#include <iostream>
using namespace std;

class Bank_Account{
private:
int account_number;
string name_of_depositor;
string account_type;
float balance_amount;
public:
void initialize();
void deposit_amount();
void withdraw_amount();
void display_balance();
};

void Bank_Account::initialize()
{
    cout<<"Enter Account Number: "<<endl;
    cin>>account_number;
    fflush(stdin);
    cout<<"Enter Name of Depositor: "<<endl;
    cin>>name_of_depositor;
    fflush(stdin);
    cout<<"Enter Account Type: "<<endl;
    cin>>account_type;
    fflush(stdin);
    cout<<"Enter Balance Amount: "<<endl;
    cin>>balance_amount;
    fflush(stdin);

}

void Bank_Account::deposit_amount()
{
    float deposit;
    cout<<"Enter Amount to Deposit: "<<endl;
    cin>>deposit;
    balance_amount+=deposit;
    cout<<"Amount Deposited Successfully!"<<endl;
}
void Bank_Account::withdraw_amount()
{
    float withdraw;
    cout<<"Enter Amount to Withdraw: "<<endl;
    cin>>withdraw;
    if(withdraw>balance_amount)
    {
        cout<<"Insufficient Balance!"<<endl;
    }
    else
    {
        balance_amount-=withdraw;
        cout<<"Amount Withdrawn Successfully!"<<endl;
    }
}
void Bank_Account::display_balance()
{
    cout<<"Account Number: "<<account_number<<endl;
    cout<<"Name of Depositor: "<<name_of_depositor<<endl;
    cout<<"Account Type: "<<account_type<<endl;
    cout<<"Balance Amount: "<<balance_amount<<endl;
}
int main()
{
    Bank_Account account;
    int choice,n=1;
    while(n==1){
    cout<<"Enter your Choice: "<<endl;
    cout<<"1. Initialize Account"<<endl;
    cout<<"2. Deposit Amount"<<endl;
    cout<<"3. Withdraw Amount"<<endl;
    cout<<"4. Display Balance"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter Account Details: "<<endl;
            account.initialize();
            break;
        case 2:
            cout<<"Deposit Amount: "<<endl;
            account.deposit_amount();
            break;
        case 3:
            cout<<"Withdraw Amount: "<<endl;
            account.withdraw_amount();
            break;
        case 4:
            cout<<"Display Balance: "<<endl;
            account.display_balance();
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }
    cout<<"Do you want to continue? (1 for Yes, 0 for No): "<<endl;
    cin>>n;
    }
    cout<<"Thank you for using the Bank Account System!"<<endl;
    return 0;
}