#include "function.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
    int numberofaccounts {};
    bool loggedin {false};
    int accountloggedinnumber {};
    string accountloggedinname {};
    int accountloggedinpin {};
    int accountloggedinindex {};
    string accountloggedintype;
    while(true){
        mainmenu();
        int userinput {takeinput()};
        if(cin.fail()){
            cinbugfix();
        }
        else{
            if(userinput == 1){
                login(accountloggedinindex, numberofaccounts, loggedin, accountloggedinnumber, accountloggedinname, accountloggedinpin, accountloggedintype);
                wait();
            }
            else if(userinput == 2){
                while(true){
                    if(loggedin){
                        accountinfo(accountloggedinnumber, accountloggedinname, accountloggedintype);
                        userinput = takeinput();
                        if(cin.fail()){
                            cinbugfix();
                        }
                        else{
                            if(userinput == 1){
                                changepin(accountloggedinindex, accountloggedinpin);
                                wait();
                            }
                            else if(userinput == 2){
                                changeaccountname(accountloggedinindex, accountloggedinname, accountloggedinpin);
                                wait();
                            }
                            else if(userinput == 3){
                                accountloggedinname.clear();
                                accountloggedinnumber = 0;
                                accountloggedinpin = 0;
                                accountloggedinindex = 0;
                                accountloggedintype.clear();
                                loggedin = false;
                            }
                            else if(userinput == 4){
                                deleteloggedinaccount(numberofaccounts, accountloggedinpin, accountloggedinindex);
                                accountloggedinname.clear();
                                accountloggedinnumber = 0;
                                accountloggedinpin = 0;
                                accountloggedinindex = 0;
                                accountloggedintype.clear();
                                loggedin = false;
                            }
                            else if(userinput == 5){
                                break;
                            }
                            else{
                                cout << "Invalid Input!" << endl;
                            }
                        }
                    }
                    else{
                        cout << "No account logged in, please log in the try" << endl;
                        break;
                    }
                }
            }
            else if(userinput == 3){
                add(numberofaccounts, accountloggedintype, loggedin);
                wait();
            }
            else if(userinput == 4){
                while(true){
                    if(loggedin && accountloggedintype == "Admin"){
                        showaccounts(numberofaccounts);
                        if(numberofaccounts == 0){
                            cout << "No account found, make one using (register) option!" << endl;
                            break;
                        }
                        else{
                            userinput = takeinput();
                            if(cin.fail()){
                                cinbugfix();
                            }
                            else{
                                if(userinput == 1){
                                    deleteaccount(numberofaccounts, loggedin, accountloggedinnumber, accountloggedinname, accountloggedinpin);
                                }
                                else if(userinput == 2){
                                    break;
                                }
                                else{
                                    cout << "Invalid Input!" << endl;
                                }
                            }
                        }
                    }
                    else{
                        cout << "You are not an admin" << endl;
                        break;
                    }
                }
            }
            else if(userinput == 5){
                while(true){
                    if(loggedin){
                        moneyrelated();
                        userinput = takeinput();
                        if(cin.fail()){
                            cinbugfix();
                        }
                        else{
                            if(userinput == 1){
                                checkbalance(accountloggedinindex);
                                wait();
                            }
                            else if(userinput == 2){
                                depositmoney(accountloggedinindex, accountloggedinpin);
                                wait();
                            }
                            else if(userinput == 3){
                                withdrawmoney(accountloggedinindex, accountloggedinpin);
                                wait();
                            }
                            else if(userinput == 4){
                                transfermoney(accountloggedinindex, numberofaccounts, accountloggedinpin);
                                wait();
                            }
                            else if(userinput == 5){
                                break;
                            }
                        }
                    }
                    else{
                        cout << "Please login into your account!" << endl;
                        break;
                    }
                }
            }
            else if(userinput == 6){
                addadminaccount(numberofaccounts);
                wait();
            }
            else if(userinput == 7){
                break;
            }
            else{
                cout << "Invalid Input" << endl;
            }
        }
    }
}
