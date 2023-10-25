#include "bank_account.h"
#include<time.h>//helps provide a true random number with rand() function
#include "atm.h"
#include "savings_account.h"
#include "checking_account.h"

using std::cout;

int main()
{
	srand(time(NULL));
	BankAccount* account;//create a pointers; points to nothing NULL

	CheckingAccount checking_account(500);
	account = &checking_account;
	cout<<account->get_balance()<<"\n";	
	
	SavingsAccount savings_account(500);
	account = &savings_account;
	cout<<account->get_balance()<<"\n";

	//account.deposit(250);

	/*ATM atm(account);

	atm.display_balance();
	atm.make_deposit();
	atm.display_balance();

	cout<<"Balance: "<<account.get_balance()<<"\n";

	atm.make_withdrawl();

	atm.display_balance();
	cout<<"Balance: "<<account.get_balance()<<"\n";

	BankAccount account2;//customer 2
	cout<<"Balance: "<<account2.get_balance()<<"\n";

	show_balance(account);
	*/
	return 0;
}