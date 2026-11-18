//class hierarchy for a real world entity bankaccount access specifiers and member functions

#include <iostream>
using namespace std;

class BankAccount
{
    int acc_no;
    int balance;

public:
    BankAccount()
    {
        acc_no = 101;
        balance = 1000;
    }

    void DisplayDetails()
    {
        cout << "Bank Account Details:" << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount obj;
    obj.DisplayDetails();

    return 0;
}