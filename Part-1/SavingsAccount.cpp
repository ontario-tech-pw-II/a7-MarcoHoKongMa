#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	if(rate < 0){
		rate = 0;
	}
	interestRate = rate * 100;
	setBalance(initialBalance);
}

double SavingsAccount::calculateInterest() {
	// your code
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	os.precision(2);
	os << "Account type: Saving" << endl;
	os << "Balance: $ " << fixed << getBalance() << endl;
	os << "Interest Rate (%): " << fixed << interestRate << endl;
}
