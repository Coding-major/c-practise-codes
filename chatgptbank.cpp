#include <iostream>
#include <string>
using namespace std;

class bankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        // constructors
        // bankAccount() {
        //     accountNumber = 0;
        //     balance = 0;
        // }

        bankAccount(int accNum, double bal) {
            accountNumber = accNum;
            balance = 0;
        }

        // getters and setters
        void setAccountNumber(int accNum) {
            accountNumber = accNum;
        }

        int getAccountNumber() const {
            return accountNumber;
        }

        double getBalance() const {
            return balance;
        }

        // deposit and withdraw money
        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
            }
            else {
                cout << "Insufficient funds" << endl;
            }
        }

        // print account information
        void printInfo() const {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: $" << balance << endl;
        }
};

class checkingAccount : public bankAccount {
    private:
        double interestRate;
        double minimumBalance;
        double serviceCharges;

    public:
        // constructors
        // checkingAccount() : bankAccount() {
        //     interestRate = 0;
        //     minimumBalance = 0;
        //     serviceCharges = 0;
        // }

        checkingAccount(int accNum, double bal, double intRate, double minBal, double servCharges) 
            : bankAccount(accNum, bal) {
            interestRate = intRate;
            minimumBalance = minBal;
            serviceCharges = servCharges;
        }

        // getters and setters
        void setInterestRate(double intRate) {
            interestRate = intRate;
        }

        double getInterestRate() const {
            return interestRate;
        }

        void setMinimumBalance(double minBal) {
            minimumBalance = minBal;
        }

        double getMinimumBalance() const {
            return minimumBalance;
        }

        void setServiceCharges(double servCharges) {
            serviceCharges = servCharges;
        }

        double getServiceCharges() const {
            return serviceCharges;
        }

        // post interest
        void postInterest() {
            double interest = getBalance() * interestRate;
            deposit(interest);
        }

        // verify if balance is less than minimum balance
        bool verifyMinimumBalance() const {
            if (getBalance() < minimumBalance) {
                return true;
            }
            else {
                return false;
            }
        }

        // write check
        void writeCheck(double amount) {
            withdraw(amount);
            if (verifyMinimumBalance()) {
                withdraw(serviceCharges);
            }
        }

        // withdraw money (override function of base class)
        void withdraw(double amount) {
            double withdrawAmount = amount + serviceCharges;
            if (getBalance() >= withdrawAmount) {
                bankAccount::withdraw(withdrawAmount);
                if (verifyMinimumBalance()) {
                    withdraw(serviceCharges);
                }
            }
            else {
                cout << "Insufficient funds" << endl;
            }
        }

        // print account information (override function of base class)
        void printInfo() const {
            bankAccount::printInfo();
            cout << "Interest Rate: " << interestRate << "%" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Service Charges: $" << serviceCharges << endl;
        }
};

int main() {
    // Create a bank account
    bankAccount myBankAccount(1001, 5000.00);
    cout << "Bank Account" << endl;
    myBankAccount.printInfo();
    myBankAccount.deposit(1000.00);
    cout << "After depositing $1000.00" << endl;
    myBankAccount.printInfo();
    myBankAccount.withdraw(2000.00);
    cout << "After withdrawing $2000.00" << endl;
    myBankAccount.printInfo();


    // Create a checking account
    checkingAccount myCheckingAccount(2001, 3000.00, 2.5, 1000.00, 10.00);
    cout << endl << "Checking Account" << endl;
    myCheckingAccount.printInfo();
    myCheckingAccount.deposit(500.00);
    cout << "After depositing $500.00" << endl;
    myCheckingAccount.printInfo();
    myCheckingAccount.writeCheck(400.00);
    cout << "After writing a check for $400.00" << endl;
    myCheckingAccount.printInfo();
    myCheckingAccount.postInterest();
    cout << "After posting interest" << endl;
    myCheckingAccount.printInfo();

    // Create a saving account
    // savingAccount mySavingAccount(3001, 2000.00, 1.5);
    // cout << endl << "Saving Account" << endl;
    // mySavingAccount.printInfo();
    // mySavingAccount.deposit(1000.00);
    // cout << "After depositing $1000.00" << endl;
    // mySavingAccount.printInfo();
    // mySavingAccount.withdraw(1500.00);
    // cout << "After withdrawing $1500.00" << endl;
    // mySavingAccount.printInfo();
    // mySavingAccount.postInterest();
    // cout << "After posting interest" << endl;
    // mySavingAccount.printInfo();

    return 0;
}
