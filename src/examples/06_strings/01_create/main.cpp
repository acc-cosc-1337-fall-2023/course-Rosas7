#include<iostream>
#include<string>

using std::string; 
using std::cout;

int main()
{
    string lang = "C++";
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" is cool");    
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";

    lang.append(" yeah");
    cout<<lang.capacity()<<"\n";
    cout<<lang.size()<<"\n";
    cout<<lang<<"\n";



    return 0;
}