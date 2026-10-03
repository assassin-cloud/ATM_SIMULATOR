#include<iostream>
#include<string>
using namespace std;

void mainmenu(){
    cout << "==========" << endl;
    cout << "   ATM    " << endl;
    cout << "==========" << endl;
    cout << endl;
    cout << "1. Login" << endl;
    cout << "2. Account info" << endl;
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
accounts account[5];

void add(int& numberofaccounts){
    if(numberofaccounts == 5){
        cout << "Maximum numbers of accounts reached" << endl;
    }
    else{
        cout << "Enter a unique number for your account:" << endl;
        cin >> account[numberofaccounts].accountnumber;
        if(account[numberofaccounts].accountnumber < 0){
            cout << "Account number can't be negative!" << endl;
        }
        else{
            cin.ignore(1000, '\n');
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

void deleteaccount(int& numberofaccounts, bool& loggedin, int accountloggedinnumber, int accountloggedinpin){
    if(numberofaccounts == 0){
        cout << "NO Account found, create one using register menu!" << endl;
    }
    else{
        cout << "Type account number of the account you wanna delete:" << endl;
        int remove {takeinput()};
        bool canrun;
        for(int i=0;i<numberofaccounts;i++){
            if(remove == account[i].accountnumber){
                remove = i;
                canrun = true;
                break;
            }
            else{
                canrun = false;
            }
        }
        if(canrun){
            if(inputpin(accountloggedinpin, numberofaccounts)){
                if(accountloggedinnumber == account[remove].accountnumber){
                    loggedin = false;
                }
                for(int i=remove;i<numberofaccounts-1;i++){
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
    int* p = new int;
    if(loggedin){
        cout << "Already logged in!" << endl;
    }
    else{
        cout << "Type the account number of the account you want to log in:" << endl;
        int number {takeinput()};
        bool iscorrectnumber {false};
        for(int i=0;i<numberofaccounts;i++){
            if(account[i].accountnumber == number){
                iscorrectnumber = true;
                *p = i;
                break;
            }
            else{
                iscorrectnumber = false;
            }
        }
        if(iscorrectnumber){
            accountloggedinnumber = account[*p].accountnumber;
            accountloggedinname = account[*p].name;
            accountloggedinpin = account[*p].pin;
            cout << "Account Number: " << account[*p].accountnumber << endl;
            cout << "Name: " << account[*p].name << endl;
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
    delete p;
    p = nullptr;
}

void accountinfo(bool loggedin, int accountloggedinnumber, string accountloggedinname){
    cout << "===================" << endl;
    cout << "   ACCOUNT INFO    " << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Account Number: " << accountloggedinnumber << endl;
    cout << "Account Name: " << accountloggedinname  << endl;
    cout << "1. Change Pin" << endl;
    cout << "2. Log out" << endl;
    cout << "3. Exit" << endl;
    cout << "Input: " << endl;
}

void changepin(int numberofaccounts, int& accountloggedinpin, int accountloggedinnumber){
    int *p = new int;
    if(inputpin(accountloggedinpin, numberofaccounts)){
        bool accountfound {false};
        for(int i=0;i<numberofaccounts;i++){
            if(accountloggedinnumber == account[i].accountnumber){
                *p = i;
                accountfound = true;
                break;
            }
            else{
                accountfound = false;
            }
        }
        if(accountfound){
            cout << "Input new pin:" << endl;
            cin >> account[*p].pin;
            if(account[*p].pin < 0){
                cout << "Pin can't be negative" << endl;
            }
            else{
                cout << "Successfully Changed!" << endl;
                accountloggedinpin = account[*p].pin;
            }
        }
        else{
            cout << "There is an issue with your account, trying logging out and logging in again" << endl;
        }
    }
    else{
        cout << "Wrong Pin" << endl;
    }
     delete p;
    p = nullptr;
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
    int* p = new int;
    bool accountfound {false};
    for(int i=0;i<numberofaccounts;i++){
        if(accountloggedinnumber == account[i].accountnumber){
            *p = i;
            accountfound = true;
            break;
        }
        else{
            accountfound = false;
        }
    }
    if(accountfound){
        cout << "Balance: " << "$" << account[*p].money << endl;
        delete p;
        p = nullptr;
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
        delete p;
        p = nullptr;
    }
}

void depositmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin){
    int* p = new int;
    bool accountfound {false};
    for(int i=0;i<numberofaccounts;i++){
        if(accountloggedinnumber == account[i].accountnumber){
            *p = i;
            accountfound = true;
            break;
        }
        else{
            accountfound = false;
        }
    }
    if(accountfound){
        cout << "Input the ammount you wanna deposit:" << endl;
        int ammount {takeinput()};
        if(ammount <= 0){
            cout << "Ammount can't be zero or negative!" << endl;
        }
        else{
            if(inputpin(accountloggedinpin, numberofaccounts)){
                account[*p].money += ammount;
                cout << "Ammount successfully deposited" << endl;
                cout << "Balance: " << "$" << account[*p].money << endl;
            }
            else{
                cout << "Invalid Pin!" << endl;
            }
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl; 
    }
    delete p;
    p = nullptr;
}

void withdrawmoney(int accountloggedinnumber, int numberofaccounts, int accountloggedinpin){
    int* p = new int;
    bool accountfound {false};
    for(int i=0;i<numberofaccounts;i++){
        if(accountloggedinnumber == account[i].accountnumber){
            *p = i;
            accountfound = true;
            break;
        }
        else{
            accountfound = false;
        }
    }
    if(accountfound){
        cout << "Input the ammount you wanna withdraw" << endl;
        int ammount {takeinput()};
        if(ammount <= 0 || ammount > account[*p].money){
            cout << "Ammount can't be bigger than balance, ammount can't be zero or negative" << endl;
        }
        else{
            if(inputpin(accountloggedinpin, numberofaccounts)){
                account[*p].money -= ammount;
                cout << "Ammount successfully deposited" << endl;
                cout << "Balance: " << "$" << account[*p].money << endl;
            }
            else{
                cout << "Invalid Pin!" << endl;
            }
        }
    }
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
    delete p;
    p = nullptr;
}
