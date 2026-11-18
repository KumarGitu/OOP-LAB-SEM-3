//STL Containers and Algorithms

#include <iostream>
#include <stdexcept>
using namespace std;

class BankingException : public runtime_error
{
public:
    BankingException(string message)
        : runtime_error(message)
    {
    }
};

class InsufficientBalance : public BankingException
{
public:
    InsufficientBalance()
        : BankingException("Insufficient Balance!")
    {
    }
};

class InvalidAmount : public BankingException
{
public:
    InvalidAmount()
        : BankingException("Invalid Amount!")
    {
    }
};

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            throw InvalidAmount();
        }

        balance += amount;
        cout << "Amount Deposited Successfully.\n";
    }

    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            throw InvalidAmount();
        }

        if (amount > balance)
        {
            throw InsufficientBalance();
        }

        balance -= amount;
        cout << "Amount Withdrawn Successfully.\n";
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(5000);

    try
    {
        account.displayBalance();

        account.deposit(1000);

        account.withdraw(7000);
    }

    catch (const InsufficientBalance &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    catch (const InvalidAmount &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    catch (const BankingException &e)
    {
        cout << "Banking Error: " << e.what() << endl;
    }

    account.displayBalance();

    return 0;
}
