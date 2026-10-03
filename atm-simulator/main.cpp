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
    while(true){
        mainmenu();
        int userinput {takeinput()};
        if(cin.fail()){
            cinbugfix();
        }
        else{
            if(userinput == 1){
                login(numberofaccounts, loggedin, accountloggedinnumber, accountloggedinname, accountloggedinpin);
                wait();
            }
            else if(userinput == 2){
                while(true){
                    if(loggedin){
                        accountinfo(loggedin, accountloggedinnumber, accountloggedinname);
                        userinput = takeinput();
                        if(cin.fail()){
                            cinbugfix();
                        }
                        else{
                            if(userinput == 1){
                                changepin(numberofaccounts, accountloggedinpin, accountloggedinnumber);
                            }
                            else if(userinput == 2){
                                loggedin = false;
                            }
                            else if(userinput == 3){
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
                add(numberofaccounts);
                wait();
            }
            else if(userinput == 4){
                while(true){
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
                                deleteaccount(numberofaccounts, loggedin, accountloggedinnumber, accountloggedinpin);
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
            }
            else if(userinput == 5){
                while(true){
                    if(loggedin){
                        moneyrelated();
                        userinput = takeinput();
                        if(userinput == 1){
                            checkbalance(accountloggedinnumber, numberofaccounts);
                            wait();
                        }
                        else if(userinput == 2){
                            depositmoney(accountloggedinnumber, numberofaccounts, accountloggedinpin);
                            wait();
                        }
                        else if(userinput == 3){
                            withdrawmoney(accountloggedinnumber, numberofaccounts, accountloggedinpin);
                            wait();
                        }
                        else if(userinput == 5){
                            break;
                        }
                    }
                    else{
                        cout << "Please login into your account!" << endl;
                        break;
                    }
                }
            }
            else if(userinput == 6){
                break;
            }
            else{
                cout << "Invalid Input" << endl;
            }
        }
    }
}
