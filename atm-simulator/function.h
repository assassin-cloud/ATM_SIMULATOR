#pragma once
#include<string>

void mainmenu();
int takeinput();
void wait();
void cinbugfix();
void add(int& numberofaccounts, std::string accountloggedintype, bool loggedin);
void showaccounts(int numberofaccounts);
void accountban(int numberofaccounts, int accountloggedinpin);
void addadminaccount(int& numberofaccounts);
void deleteaccount(int& numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin, int& accountloggedinindex);
void login(int& accountloggedinindex, int numberofaccounts, bool& loggedin, int& accountloggedinnumber, std::string& accountloggedinname, int& accountloggedinpin, std::string& accountloggedintype);
void accountinfo(int accountloggedinnumber, std::string accountloggedinname, std::string accountloggedintype);
void deleteloggedinaccount(int& numberofaccounts, int accountloggedinpin, int accountloggedinindex);
void changepin(int accountloggedinindex, int& accountloggedinpin);
void changeaccountname(int accountloggedinindex, std::string& accountloggedinname, int accountloggedinpin);
void moneyrelated();
void checkbalance(int accountloggedinindex);
void depositmoney(int accountloggedinindex, int accountloggedinpin);
void withdrawmoney(int accountloggedinindex, int accountloggedinpin);
void transfermoney(int accountloggedinindex, int numberofaccounts, int accountloggedinpin);
