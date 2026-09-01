#include <iostream>
#include <string>
using namespace std;

class SavingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    SavingAccount(string name, int accNumber, double initialBalance, double initialRate)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = initialRate;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited: Rs. " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn: Rs. " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest()
    {
        double interest = balance * interestRate / 100;
        balance = balance + interest;
        cout << "Interest applied: Rs. " << interest << endl;
    }

    void display()
    {
        cout << "\n[Saving Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Deposited: Rs. " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (amount > 0 && total <= balance)
        {
            balance = balance - total;
            cout << "Withdrawn: Rs. " << amount
                 << " (Rs. " << transactionFee << " fee applied)" << endl;
        }
        else
        {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }

    void display()
    {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "Transaction Fee: Rs. " << transactionFee << endl;
    }
};

int main()
{
    SavingAccount saving("Samadhan", 101, 10000, 5);

    saving.deposit(2000);
    saving.withdraw(1000);
    saving.applyInterest();
    saving.display();

    CheckingAccount checking("Samadhan", 102, 15000, 50);

    checking.deposit(3000);
    checking.withdraw(2000);
    checking.display();

    return 0;
}