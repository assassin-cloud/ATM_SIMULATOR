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
            account[numberofaccounts].money = 7000;
            cout << "Account added successfully" << endl;
            cout << "Please login from the login option in main menu!" << endl;
            numberofaccounts+=1;
        }
        else{
            cout << "Account number same as another account" << endl;
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

void deleteaccount(int& numberofaccounts, bool& loggedin, int accountloggedinnumber){
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
            cout << "Invalid input" << endl;
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
        int* p = new int;
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
            cout << "Input pin to log in:" << endl;
            int pin {takeinput()};
            if(account[*p].pin == pin){
                loggedin = true;
                cout << "Login attempt was successfull" << endl;
                delete p;
                p = nullptr;
            }
            else{
                cout << "Invalid Pin" << endl;
                delete p;
                p = nullptr;
            }
        }
        else{
            cout << "No account found, create one using register" << endl;
            delete p;
            p = nullptr;
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
    cout << "2. Log out" << endl;
    cout << "3. Exit" << endl;
    cout << "Input: " << endl;
}

void changepin(int numberofaccounts, int& accountloggedinpin, int accountloggedinnumber){
    cout << "Input Pin to verify if it's you:" << endl;
    int pin {takeinput()};
    if(pin == accountloggedinpin){
        int *p = new int;
        for(int i=0;i<numberofaccounts;i++){
            if(accountloggedinnumber == account[i].accountnumber){
                *p = i;
                break;
            }
        }
        cout << "Input new pin:" << endl;
        cin >> account[*p].pin;
        cout << "Successfully Changed!" << endl;
        accountloggedinpin = account[*p].pin;
        delete p;
        p = nullptr;
    }
    else{
        cout << "Wrong Pin" << endl;
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
    int* p = new int;
    for(int i=0;i<numberofaccounts;i++){
        if(accountloggedinnumber == account[i].accountnumber){
            *p = i;
        }
    }
    cout << "Balance: " << "$" << account[*p].money << endl;
    delete p;
    p = nullptr;
}

void depositmoney(int accountloggedinnumber, int numberofaccounts){}
