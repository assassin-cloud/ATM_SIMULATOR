#pragma once
#include<string>

void mainmenu();
int takeinput();
void wait();
void cinbugfix();
struct accounts;
extern accounts account[];
void add(int& numberofaccounts);
void showaccounts(int numberofaccounts);
void deleteaccount(int& numberofaccounts, bool& loggedin, int accountloggedinnumber);
void login(int numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin);
void accountinfo(bool loggedin, int accountloggedinnumber, std::string accountloggedinname);
void changepin(int numberofaccounts, int& accountloggedinpin, int accountloggedinnumber);
void moneyrelated();
void checkbalance(int accountloggedinnumber, int numberofaccounts);
void depositmoney(int accountloggedinnumber, int numberofaccounts);
