//write include statement for decisions header
#include "decisions.h"

using std::string; using std::cout;

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade >= 90 && grade <= 100)
    {
        result = "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = "D";
    }
    else if(grade >= 0 && grade <= 59)
    {
        result = "F";
    }
    else
    {
        result = "Invalid Grade";
    }
    return result;
}

string get_letter_grade_using_switch(int grade)
{
    auto tempgrade = grade/10;
    switch(tempgrade)
    {
    case 10:
    case 9:
        cout<<"A";
        break;
    case 8:
        cout<<"B";
        break;
    case 7:
        cout<<"C";
        break;
    case 6:
        cout<<"D";
        break;
    default:
        cout<<"F";
    }
    return 0;
}