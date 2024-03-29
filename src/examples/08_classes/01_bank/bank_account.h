//bank_account.h
#include<iostream>
#include<stdlib.h>//access rand() function

//class header guards
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


class BankAccount
{
friend void show_balance(BankAccount& account);

public://access specifier-other code can access these functions
    //constructor
    BankAccount(){get_balance_from_db();}//no parameters=default constructor
    BankAccount(int b) : balance(b){/*empty class function code*/}
    void deposit(int amount);
    void withdraw(int amount);
    virtual int get_balance() const {return balance;}

private://access specifier-only this class can access function of variables that are private
    int balance{0};//initialize to zero; happens first
    void get_balance_from_db();


};
void say_hello();

#endif
