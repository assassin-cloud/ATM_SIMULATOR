#pragma once
#include<string>

void mainmenu();
int takeinput();
void wait();
void cinbugfix();
void add(int& numberofaccounts);
void showaccounts(int numberofaccounts);
void deleteaccount(int& numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin);
void login(int& accountloggedinindex, int numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin);
void accountinfo(int accountloggedinnumber, std::string accountloggedinname);
void changepin(int accountloggedinindex, int& accountloggedinpin);
void changeaccountname(int accountloggedinindex, string& accountloggedinname, int accountloggedinpin);
void moneyrelated();
void checkbalance(int accountloggedinindex);
void depositmoney(int accountloggedinindex, int accountloggedinpin);
void withdrawmoney(int accountloggedinindex, int accountloggedinpin);
void transfermoney(int accountloggedinindex, int numberofaccounts, int accountloggedinpin);
