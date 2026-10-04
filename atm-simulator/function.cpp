#include<iostream>
#include<string>
using namespace std;

void mainmenu(){
    cout << "==========" << endl;
    cout << "   ATM    " << endl;
    cout << "==========" << endl;
    cout << endl;
    cout << "1. Login" << endl;
    cout << "2. Account info/settings" << endl;
    cout << "3. Register(create a account)" << endl;
    cout << "4. See all accounts on the device" << endl;
    cout << "5. Check your balance, deposit, withdraw and transfer" << endl;
    cout << "6. Exit" << endl;
    cout << "Input:" << endl;
}

int takeinput(){
    int x;
    cin >> x;
    return x;
}

void wait(){
    cout << "Type anything to go back:" << endl;
    string x;
    cin >> x;
}

void cinbugfix(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

struct accounts{
    int accountnumber;
    string name;
    int pin;
    int money;
};
accounts account[10];

void add(int& numberofaccounts){
    if(numberofaccounts == 10){
        cout << "Maximum numbers of accounts reached" << endl;
    }
    else{
        cout << "Enter a unique number for your account:" << endl;
        cin >> account[numberofaccounts].accountnumber;
        if(account[numberofaccounts].accountnumber < 0){
            cout << "Account number can't be negative!" << endl;
        }
        else{
            bool duplicate {false};
            for(int i=0;i<numberofaccounts;i++){
                if(account[numberofaccounts].accountnumber == account[i].accountnumber){
                    duplicate = true;
                    break;
                }
                else{
                    duplicate = false;
                }
            }
            cin.ignore(1000, '\n');
            if(!duplicate){
                cout << "Enter Name" << endl;
                getline(cin, account[numberofaccounts].name);
                cout << "PIN:" << endl;
                cin >> account[numberofaccounts].pin;
                if(account[numberofaccounts].pin < 0){
                    cout << "Pin can't be negative" << endl;
                }
                else{
                    account[numberofaccounts].money = 7000;
                    cout << "Account added successfully" << endl;
                    cout << "Please login from the login option in main menu!" << endl;
                    numberofaccounts+=1;
                }
            }
            else{
                cout << "Account number same as another account" << endl;
            }
        }
    }
}

void showaccounts(int numberofaccounts){
    cout << "===============" << endl;
    cout << "   ACCOUNTS    " << endl;
    cout << "===============" << endl;
    cout << endl;
    for(int i=0;i<numberofaccounts;i++){
        cout << "Account " << i+1 << endl;
        cout << "Account Number: " << account[i].accountnumber << endl;
        cout << "Name: " << account[i].name << endl;
        cout << endl;
    }
    cout << "1. Delete account" << endl;
    cout << "2. Exit" << endl;
    cout << "Input:" << endl;
}

bool inputpin(int accountloggedinpin, int numberofaccounts){
    cout << "Input pin: " << endl;
    int pin {takeinput()};
    if(pin == accountloggedinpin){
        return true;
    }
    else{
        return false;
    }
}

void findaccount(int numberofaccounts, int accountloggedinnumber, bool& accountfound, int& account_index){
    for(int i=0;i<numberofaccounts;i++){
        if(accountloggedinnumber == account[i].accountnumber){
            account_index = i;
            accountfound = true;
            break;
        }
        else{
            accountfound = false;
        }
    }
}

void deleteaccount(int& numberofaccounts, bool& loggedin, int accountloggedinnumber){
    if(numberofaccounts == 0){
        cout << "NO Account found, create one using register menu!" << endl;
    }
    else{
        cout << "Type account number of the account you wanna delete:" << endl;
        int remove {takeinput()};
        bool canrun {false};
        int account_index {};
        findaccount(numberofaccounts, remove, canrun, account_index);
        if(canrun){
            cout << "Input pin: " << endl;
            int inputpin {takeinput()};
            if(inputpin == account[account_index].pin){
                if(accountloggedinnumber == account[account_index].accountnumber){
                    loggedin = false;
                }
                for(int i=account_index;i<numberofaccounts-1;i++){
                    account[i] = account[i+1];
                }
                cout << "Successfully deleted" << endl;
                numberofaccounts--;
            }
            else{
                cout << "Invalid Pin!" << endl;
            }
        }
        else{
            cout << "Invalid account number!" << endl;
        }
    }
}

void login(int numberofaccounts, bool& loggedin, int& accountloggedinnumber, string& accountloggedinname, int& accountloggedinpin){
    if(loggedin){
        cout << "Already logged in!" << endl;
    }
    else{
        cout << "Type the account number of the account you want to log in:" << endl;
        int number {takeinput()};
        bool iscorrectnumber {false};
        int account_index {};
        findaccount(numberofaccounts, number, iscorrectnumber, account_index);
        if(iscorrectnumber){
            accountloggedinnumber = account[account_index].accountnumber;
            accountloggedinname = account[account_index].name;
            accountloggedinpin = account[account_index].pin;
            cout << "Account Number: " << account[account_index].accountnumber << endl;
            cout << "Name: " << account[account_index].name << endl;
            if(inputpin(accountloggedinpin, numberofaccounts)){
                loggedin = true;
                cout << "Login attempt was successfull" << endl;
            }
            else{
                cout << "Invalid Pin" << endl;
            }
        }
        else{
            cout << "No account found, create one using register" << endl;
        }
    }
}

void accountinfo(bool loggedin, int accountloggedinnumber, string accountloggedinname){
    cout << "===================" << endl;
    cout << "   ACCOUNT INFO    " << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Account Number: " << accountloggedinnumber << endl;
    cout << "Account Name: " << accountloggedinname  << endl;
    cout << "1. Change Pin" << endl;
    cout << "2. Change account name" << endl;
    cout << "3. Log out" << endl;
    cout << "4. Exit" << endl;
    cout << "Input: " << endl;
}

void changepin(int numberofaccounts, int& accountloggedinpin, int accountloggedinnumber){
    if(inputpin(accountloggedinpin, numberofaccounts)){
        bool accountfound {false};
        int account_index {};
        findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
        if(accountfound){
            cout << "Input new pin:" << endl;
            int newpin {takeinput()};
            if(cin.fail()){
                cinbugfix();
            }
            else{
                if(newpin < 0){
                    cout << "Pin can't be negative" << endl;
                }
                else{
                    cout << "Successfully Changed!" << endl;
                    account[account_index].pin = newpin;
                    accountloggedinpin = newpin;
                }
            }
        }
        else{
            cout << "There is an issue with your account, trying logging out and logging in again" << endl;
        }
    }
    else{
        cout << "Wrong Pin" << endl;
    }
}

void changeaccountname(int numberofaccounts, int accountloggedinnumber){
    int account_index {};
    bool accountfound {false};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        string newname {};
        cout << "Input new name: " << endl;
        cin.ignore(1000, '/n');
        getline(cin, newname);
        if(newname == account[account_index].name){
            cout << "Please type a new account name" << endl;
        }
        else{
            account[account_index].name = newname;
            cout << "Name successfully changed" << endl;
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
}

void moneyrelated(){
    cout << "==========" << endl;
    cout << "   ATM    " << endl;
    cout << "==========" << endl;
    cout << endl;
    cout << "1. Check your balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Transfer money" << endl;
    cout << "5. Exit" << endl;
    cout << "Input:" << endl;
}

void checkbalance(int accountloggedinnumber, int numberofaccounts){
    bool accountfound {false};
    int account_index {};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        cout << "Balance: " << "$" << account[account_index].money << endl;
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
}

void depositmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin){
    bool accountfound {false};
    int account_index {};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        cout << "Input the ammount you wanna deposit:" << endl;
        int ammount {takeinput()};
        if(ammount <= 0){
            cout << "Ammount can't be zero or negative!" << endl;
        }
        else{
            if(inputpin(accountloggedinpin, numberofaccounts)){
                account[account_index].money += ammount;
                cout << "Ammount successfully deposited" << endl;
                cout << "Balance: " << "$" << account[account_index].money << endl;
            }
            else{
                cout << "Invalid Pin!" << endl;
            }
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl; 
    }
}

void withdrawmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin){
    bool accountfound {false};
    int account_index {};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        cout << "Input the ammount you wanna withdraw" << endl;
        int ammount {takeinput()};
        if(ammount <= 0 || ammount > account[account_index].money){
            cout << "Ammount can't be bigger than balance, ammount can't be zero or negative" << endl;
        }
        else{
            if(inputpin(accountloggedinpin, numberofaccounts)){
                account[account_index].money -= ammount;
                cout << "Ammount successfully deposited" << endl;
                cout << "Balance: " << "$" << account[account_index].money << endl;
            }
            else{
                cout << "Invalid Pin!" << endl;
            }
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
}

void transfermoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin){
    bool accountfound {false};
    int account_index {};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        cout << "Type the account number you wanna transfer to: " << endl;
        int inputaccount {takeinput()};
        int account_index2 {};
        bool accountfound2 {false};
        findaccount(numberofaccounts, inputaccount, accountfound2, account_index2);
        if(accountfound2){
            if(account[account_index2].accountnumber == account[account_index].accountnumber){
                cout << "Can't transfer money to the same account!" << endl;
            }
            else{
                cout << "Account found: " << endl;
                cout << "Account Number: " << account[account_index2].accountnumber << endl;
                cout << "Name: " << account[account_index2].name << endl;
                if(inputpin(accountloggedinpin, numberofaccounts)){
                    cout << "Input the ammount you wanna transfer: " << endl;
                    int ammount {takeinput()};
                    if(ammount <= 0 || ammount > account[account_index].money){
                        cout << "Ammount can't be bigger than balance, ammount can't be zero or negative" << endl;
                    }
                    else{
                        account[account_index].money -= ammount;
                        account[account_index2].money += ammount;
                        cout << "Successfully transfered" << endl;
                        cout << account[account_index].accountnumber << " Transfered " << ammount << " to " << account[account_index2].accountnumber << endl;
                        cout << "Balance: " << account[account_index].money << endl;
                    }
                }
                else{
                    cout << "Invalid Pin" << endl;
                }
            }
        }
        else{
            cout << "Can't find the account" << endl;
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
}
