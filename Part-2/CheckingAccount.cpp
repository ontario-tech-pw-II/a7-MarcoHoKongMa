#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
	if(fee < 0){
		fee = 0;
	}
	transactionFee = fee;
	setBalance(initialBalance);
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
	setBalance(getBalance() + amount);
	chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
	if (amount > getBalance()){
		return false;
	} else{
		setBalance(getBalance() - amount);
		chargeFee();
		return true;
	}
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
	double b;
	b = getBalance() - transactionFee;
	setBalance(b);
}

void CheckingAccount::display(ostream & os) const
{
	// your code
	os.precision(2);
	os << "Account type: Checking" << endl;
	os << "Balance: $ " << fixed << getBalance() << endl;
	os << "Interest Rate (%): " << fixed << transactionFee << endl;
}
