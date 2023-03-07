#include <iostream>
#include <iomanip>
using namespace std;

class bankAccount {
private:
    int accountNumber;
    double balance;
public:
    // bankAccount() {
    //     accountNumber = 0;
    //     balance = 0.0;
    // }
    bankAccount(int accNum) {
        accountNumber = accNum;
        balance = 1000;
    }
    // void setAccountNumber(int accNum) {
    //     accountNumber = accNum;
    // }
    // int getAccountNumber() {
    //     return accountNumber;
    // }
    // double getBalance() {
    //     return balance;
    // }
    void deposit(double amount) {
        balance += amount;
    }
    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Error: Insufficient balance!" << endl;
        }
    }
    void printAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
    }
};

class checkingAccount : public bankAccount {
private:
    double interestRate;
    double minBalance;
    double serviceCharge;
public:
    // checkingAccount() : bankAccount() {
    //     interestRate = 0.0;
    //     minBalance = 0.0;
    //     serviceCharge = 0.0;
    // }
    checkingAccount(int accNum, double bal, double intRate, double minBal, double servCharge)
        : bankAccount(accNum) {
        interestRate = intRate;
        minBalance = minBal;
        serviceCharge = servCharge;
    }
    void setInterestRate(double intRate) {
        interestRate = intRate;
    }
    double getInterestRate() {
        return interestRate;
    }
    void setMinBalance(double minBal) {
        minBalance = minBal;
    }
    double getMinBalance() {
        return minBalance;
    }
    void setServiceCharge(double servCharge) {
        serviceCharge = servCharge;
    }
    double getServiceCharge() {
        return serviceCharge;
    }
    void postInterest() {
        double interest = balance * interestRate;
        balance += interest;
    }
    bool verifyMinBalance() {
        if (balance < minBalance) {
            balance -= serviceCharge;
            return false;
        } else {
            return true;
        }
    }
    void writeCheck(double amount) {
        withdraw(amount);
    }
    void withdraw(double amount) override {
        if (balance - amount < minBalance) {
            cout << "Error: Insufficient balance! A service charge of $" << fixed << setprecision(2) << serviceCharge << " will be applied." << endl;
            balance -= serviceCharge;
        } else {
            balance -= amount;
        }
    }
    void printAccountInfo() {
        bankAccount::printAccountInfo();
        cout << "Interest Rate: " << fixed << setprecision(2) << interestRate << "%" << endl;
        cout << "Minimum Balance: $" << fixed << setprecision(2) << minBalance << endl;
        cout << "Service Charge: $" << fixed << setprecision(2) << serviceCharge << endl;
    }
};

class savingAccount : public bankAccount {
    private:
        double interestRate;
    public:
        // savingAccount() : bankAccount() {
        //     interestRate = 0.0;
        // }
        
        savingAccount(int acctNum, double bal, double intRate)
            : bankAccount(acctNum) {
            interestRate = intRate;
        }

        void setInterestRate(double intRate) {
            interestRate = intRate;
        }
        double getInterestRate() {
            return interestRate;
        }
        void postInterest() {
            double interest = balance * interestRate;
            balance += interest;
        }
        void withdraw(double amount) override {
            if (balance >= amount) {
                balance -= amount;
            } else {
                cout << "Error: Insufficient balance!" << endl;
            }
        }
        void printAccountInfo() {
            bankAccount::printAccountInfo();
            cout << "Interest Rate: " << fixed << setprecision(2) << interestRate << "%" << endl;
        }

};


int main() {
    // Create a bank account
    bankAccount myBankAccount(1001222222);
    cout << "Bank Account" << endl;
    myBankAccount.printAccountInfo();
    
    cout<<"////////////////////////////////////////"<<endl;
    myBankAccount.deposit(2000.00);
    cout << "After depositing $2000.0" << endl;
    myBankAccount.printAccountInfo();

    cout<<"////////////////////////////////////////"<<endl;
    myBankAccount.withdraw(3000.00);
    cout << "After withdrawing $3000.00" << endl;
    myBankAccount.printAccountInfo();


    // Create a checking account
    checkingAccount myCheckingAccount(2001, 3000.00, 2.5, 1000.00, 10.00);
    cout << endl << "Checking Account" << endl;
    myCheckingAccount.printAccountInfo();
    myCheckingAccount.deposit(500.00);
    cout << "After depositing $500.00" << endl;
    myCheckingAccount.printAccountInfo();
    myCheckingAccount.writeCheck(400.00);
    cout << "After writing a check for $400.00" << endl;
    myCheckingAccount.printAccountInfo();
    myCheckingAccount.postInterest();
    cout << "After posting interest" << endl;
    myCheckingAccount.printAccountInfo();

    // Create a saving account
    savingAccount mySavingAccount(3001, 2000.00, 1.5);
    cout << endl << "Saving Account" << endl;
    mySavingAccount.printAccountInfo();
    mySavingAccount.deposit(1000.00);
    cout << "After depositing $1000.00" << endl;
    mySavingAccount.printAccountInfo();
    mySavingAccount.withdraw(1500.00);
    cout << "After withdrawing $1500.00" << endl;
    mySavingAccount.printAccountInfo();
    mySavingAccount.postInterest();
    cout << "After posting interest" << endl;
    mySavingAccount.printAccountInfo();

    return 0;
}
