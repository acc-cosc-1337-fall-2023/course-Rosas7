//write include statements
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
	int option;

	cout<<" 	MAIN MENU\n\n";
	cout<<"1-Letter grade using if\n";
	cout<<"2-Letter grade using switch\n";
	cout<<"3-Exit\n";
	cout<<"Enter a menu option: \n";
	cin>>option;

	switch(option)
	{
	case 1:
		int num;
		cout<<"Enter a number in between 0 - 100: \n";
		cin>>num;
		if(num >= 0 && num <= 100)
		{
			cout<<get_letter_grade_using_if(num)<<"\n";
		}
		else
		{
			cout<<"Number is out of range\n";
		}
		break;
	case 2:
		int num2;
		cout<<"Enter a number in between 0 - 100: \n";
		cin>>num2;
		if(num2 >= 0 && num2 <= 100)
		{
			cout<<get_letter_grade_using_switch(num2)<<"\n";
		}
		else
		{
			cout<<"Number is out of range\n";
		}
		break;
	case 3:
		cout<<"Program will exit....\n";
		break;
	default:
		cout<<"invalid option\n";
		break;
	}

	return 0;
	
}	