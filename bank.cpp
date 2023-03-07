#include<iostream>
#include<iomanip>

using namespace std;
class bankAccount{
	public:
		int acno;
		double balance;
		
		//set account number
		void setAcctNo(int acctno){
			acno = acctno;	
		}	
		
		//get account number
		int getAcctNo(){
			return acno;
		}
		
		//get balance
		double getBalance(){
			return balance;
		}
		
		//make deposit
		void deposit(){
			double amount;
			cout << endl;
			cout << "Enter amount to deposit: ";
			cin >> amount;
			balance += amount;
			cout << fixed << setprecision(2)<< "N" << amount << " deposited successfully." << endl;
		}
		
		//withdraw money
			void withdraw(){
			double amount;
			int checkBalance;
			cout << endl;
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			checkBalance = balance - amount;
			if(checkBalance < 0){
				cout << "Insufficient balance" << endl;				
			} else{
			balance = checkBalance;	
			cout << fixed << setprecision(2)<< "N" << amount << " withdrawal successfully." << endl;
			cout << "Current balance: "<< "N" << balance << endl;
			}
		}
		
		//print account information
		void printAcc(){
			cout << endl;
			cout << "-------Account Information-----" << endl;
			cout << "Account Number: " << acno << endl;
			cout << fixed << setprecision(2) << "Balance: N" << balance << endl;	
		}
		
	bankAccount(){
		balance = 0;
	}
	
	bankAccount(int userAcNo, double userBalance){
		acno = userAcNo;
		balance = userBalance;
	}
	
};

class checkingAccount: public bankAccount{
	public:
		double interest;
		static double minBalance;
		double charges;
		double wAmount;
	
	//set interest
	void setInterest(double dblInterest){
		interest = dblInterest;
	}
	//get interest
	double getInterest(){
		return interest;	
	}
	
	//set minimum balance
	void setMinBalance(double dblBalance){
		minBalance = dblBalance;
	}
	
	//get minimum 
	double getMinBalance(){
		return minBalance;
	}
	
	//set service charge
	void setCharge(double sCharge){
		charges = sCharge;
	}
	
	//get service charge
	double getCharge(){
		return charges;
	}
	
	void check(double checkAmount){
		cout << endl;
		cout << "Enter check amout: " ;
		cin >> checkAmount;
		wAmount = checkAmount;
	}
	
	checkingAccount(){
		minBalance = 1000.0;
		if(balance < minBalance){
			cout << "Your balance is too minimum for checking Account";
		}	
	}
	
		void withdraw(){
			int checkBalance;
			double amount;
			cout << endl;
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			checkBalance = balance - amount;
			if(checkBalance < 0){
				cout << "Insufficient balance" << endl;				
			} else{
			balance = checkBalance;	
			cout << fixed << setprecision(2)<< "N" << amount << " withdrawal successfully." << endl;
			cout << "Current balance: "<< "N" << balance << endl;
			}
		}
	
};

class savingAccount: public bankAccount{
	public:
		double interest;
		static double minBalance;
		double charges;
		double wAmount;
	
	//set interest
	void setInterest(double dblInterest){
		interest = dblInterest;
	}
	//get interest
	double getInterest(){
		return interest;	
	}
	
	
	//set service charge
	void setCharge(double sCharge){
		charges = sCharge;
	}
	
	//get service charge
	double getCharge(){
		return charges;
	}
	
	void check(double checkAmount){
		cout << endl;
		cout << "Enter check amout: " ;
		cin >> checkAmount;
		wAmount = checkAmount;
	}
	
	savingAccount(){
		balance = 0;
	}
		void withdraw(){
			int checkBalance;
			double amount;
			cout << endl;
			cout << "Enter amount to withdraw: ";
			cin >> amount;
			checkBalance = balance - amount;
			if(checkBalance < 0){
				cout << "Insufficient balance" << endl;				
			} else{
			balance = checkBalance;	
			cout << fixed << setprecision(2)<< "N" << amount << " withdrawal successfully." << endl;
			cout << "Current balance: "<< "N" << balance << endl;
			}
		}
	
};

int main()
{
	bankAccount bank1;	
	savingAccount acct1;
	
	bank1.setAcctNo(3146142);
	bank1.balance = 68900.99;
	
	bank1.printAcc();
	bank1.deposit();
	bank1.withdraw();
	
	acct1.setAcctNo(322382);
	acct1.balance = 288900.99;
	acct1.printAcc();
	
 return 0;
}