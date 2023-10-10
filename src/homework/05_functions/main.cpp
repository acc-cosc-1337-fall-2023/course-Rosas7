#include<iostream>
#include "func.h"

using std::cout;
using std::cin;

int main() 
{
	auto option = 0;

	do
	{
		cout<<"Menu\n";
		cout<<"1-Get GC Content\n";
		cout<<"2-Get DNA Complement\n";
		cout<<"3-Exit\n\n";
		cout<<"Enter a menu option: ";
		cin>>option;

		if (option == 1)
		{
			string content;
			cout<<"Enter a DNA string: ";
			cin>>content;
			cout<<"The GC Content of "<<content<<" is "<<get_gc_content(content)<<"\n\n";
		}
		else if (option == 2)
		{
			string complement;
			cout<<"Enter a DNA string: ";
			cin>>complement;
			cout<<"The DNA Complement of "<<complement<<" is "<<get_dna_complement(complement)<<"\n\n";
		}
		else if(option ==3)
		{
			cout<<"Exiting program....\n";
		}
		else
		{
			cout<<"Invalid option\n\n";
		} 
	}
	while (option != 3);

	return 0;

}
