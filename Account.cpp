#include<iostream>
using namesapace std;
class saving account
{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
    
    public:
    SavingAccount(string name,int accNumber,double intialBalance,double rate){
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;

    }
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Deposited:R"<<amount<<endl;

        }
    }
    void withdraw(double amount){
        if (amount>0 && amount <= balance){
            balance -= amount;
            cout<<"Withdrawn:R"<<amount<<endl;
        }else{
            cout<<"Insufficient balance!"<<endl;

        }
        }
        void applyInterest(){
            double interest = balance * interestRate / 100; 
            balance += interest; 
            cout << "Interest Applied: ₹" << interest << endl; 
        }
        void display() { 
            cout << "\n[Savings Account]" << endl; 
            cout << "Account Holder: " << accountHolderName << endl; 
            cout << "Account Number: " << accountNumber << endl; 
            cout << "Balance: ₹" << balance << endl; 
            cout << "Interest Rate: " << interestRate << "%" << endl; 
        }


    };
    class CheckingAccount{
        private:
        string accountHolderName;
        int accountNumber;
        double balance;
        double transactionFee; 
        public: CheckingAccount(string name, int accNumber, double initialBalance, double fee)
        { accountHolderName = name; 
            accountNumber = accNumber; 
            balance = initialBalance; 
            transactionFee = fee; 
    }
}