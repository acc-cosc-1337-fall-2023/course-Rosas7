//write include statements
#include "repetition.h"

//write using statements

using std::cout; using std::cin;

int main() 
{
	int option;

	do
	{
		cout<<"Menu\n";
		cout<<"1-Factorial\n";
		cout<<"2-Greatest Common Divisor\n";
		cout<<"3-Exit\n";
		auto option = 0;
		cout<<"Enter a menu option\n";
		cin>>option;

		switch(option)
		{
		case 1:
			int num;
			cout<<"Enter a number: ";
			cin>>num;
			cout<<"The Factorial of "<<num<<" is "<<factorial(num)<<"\n";
			break;
		case 2:
			int num1, num2;
			cout<<"Enter two numbers to find their gcd: \n";
			cout<<"Number 1: ";
			cin>>num1;
			cout<<"Number 2: ";
			cin>>num2;
			cout<<"The gcd of "<<num1<< " and "<<num2<<" is "<<gcd(num1, num2)<<"\n";
			break;
		case 3:
			char answer;
			cout<<"Are you sure you want to exit? (y/n): ";
			cin>>answer;
			if(answer == 'y' || answer == 'Y')
			{
				cout<<"Goodbye....";
				return 0;
			}
			break;
		default:
			cout<<"Invalid Option";
			break;
		}
	} 
	while (option != 3);
	
	return 0;
}
