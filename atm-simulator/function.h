#pragma once
#include<string>

void mainmenu();
int takeinput();
void wait();
void cinbugfix();
void add(int& numberofaccounts);
void showaccounts(int numberofaccounts);
void deleteaccount(int& numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin);
void login(int numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin);
void accountinfo(int accountloggedinnumber, std::string accountloggedinname);
void changepin(int numberofaccounts, int& accountloggedinpin, int accountloggedinnumber);
void changeaccountname(int numberofaccounts, int accountloggedinnumber, std::string& accountloggedinname, int accountloggedinpin);
void moneyrelated();
void checkbalance(int accountloggedinnumber, int numberofaccounts);
void depositmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin);
void withdrawmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin);
void transfermoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin);
