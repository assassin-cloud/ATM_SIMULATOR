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
    cout << "6. Register a Admin account" << endl;
    cout << "7. Exit" << endl;
    cout << "Input:" << endl;
}

void wait(){
    cout << "Press Enter to continue..." << endl;
    cin.ignore(1000, '\n');
    cin.get();
}

void cinbugfix(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}

int takeinput(){
    int x;
    cin >> x;
    return x;
}

struct accounts{
    bool banned {false};
    string accounttype;
    int accountnumber;
    string name;
    int pin;
    double money;
    int maxdeposit_withdraw_transfer;
};
accounts account[1000];

void pinrules(){
    cout << "   RULES    " << endl;
    cout << "Limitation: zero at start of pin is removed e.g 0123 would be 123 or 000123 would be 123" << endl;
    cout << "Pin can't be greater than 6 digits or less than 4 digits" << endl;
    cout << "Pin should not contain any letter" << endl;
}

void accountnumberrules(){
    cout << "   RULES    " << endl;
    cout << "Limitation: zero at start of account number is removed e.g 0123 would be 123 or 000123 would be 123" << endl;
    cout << "Account number should be 6 digits no more no less" << endl;
    cout << "Account number should be unique and contain no special characters or letters" << endl;
}

void add(int& numberofaccounts, string accountloggedintype, bool loggedin){
    if(numberofaccounts >= 1000){
        cout << "Maximum numbers of accounts reached" << endl;
    }
    else{
        cout << "Please select account type:" << endl;
        cout << "1. Standard    " << "2. Business    " << endl;
        int accounttypeinput {takeinput()};
        string tempaccounttype;
        bool iscorrectinput {false};
        if(accounttypeinput == 1){
            tempaccounttype = "standard";
            iscorrectinput = true;
        }
        else if(accounttypeinput == 2){
            tempaccounttype = "business";
            iscorrectinput = true;
        }
        else{
            iscorrectinput = false;
            cout << "Invalid Input!" << endl;
        }
        if(iscorrectinput){
            accountnumberrules();
            cout << "Enter a unique number for your account:" << endl;
            int tempnumber {takeinput()};
            if(cin.fail()){
                cinbugfix();
            }
            else{
                if(tempnumber <= 0){
                    cout << "Account number can't be negative or zero!" << endl;
                }
                else{
                    bool duplicate {false};
                    for(int i=0;i<numberofaccounts;i++){
                        if(tempnumber == account[i].accountnumber){
                            duplicate = true;
                            break;
                        }
                    }
                    if(!duplicate){
                        string variablefornumbercheck {to_string(tempnumber)};
                        if(variablefornumbercheck.size() != 6){
                            cout << "Error: Account number should be 6 digits" << endl;
                        }
                        else{
                            cout << "Enter Name" << endl;
                            string tempname {};
                            cin.ignore(1000, '\n');
                            getline(cin, tempname);
                            if(tempname.empty()){
                                cout << "Name can't be empty" << endl;
                            }
                            else{
                                pinrules();
                                cout << "PIN:" << endl;
                                int temppin(takeinput());
                                if(cin.fail()){
                                    cinbugfix();
                                }
                                else{
                                    if(temppin <= 0){
                                        cout << "Pin can't be negative" << endl;
                                    }
                                    else{
                                        string variableforpincheck {to_string(temppin)};
                                        if(variableforpincheck.size() < 4 || variableforpincheck.size() > 6){
                                            cout << "Error: Pin can't be less than 4 digits or greater than 6" << endl;
                                        }
                                        else{
                                            account[numberofaccounts].accountnumber = tempnumber;
                                            account[numberofaccounts].name = tempname;
                                            account[numberofaccounts].pin = temppin;
                                            account[numberofaccounts].money = 7000;
                                            account[numberofaccounts].accounttype = tempaccounttype;
                                            if(tempaccounttype == "standard"){
                                                account[numberofaccounts].maxdeposit_withdraw_transfer = 10000;
                                            }
                                            else if(tempaccounttype == "business"){
                                                account[numberofaccounts].maxdeposit_withdraw_transfer = 50000;
                                            }
                                            cout << "Account added successfully" << endl;
                                            cout << "Please login from the login option in main menu!" << endl;
                                            numberofaccounts+=1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else{
                        cout << "Account number same as another account" << endl;
                    }
                }
            }
        }
    }
}

void addadminaccount(int& numberofaccounts){
    if(numberofaccounts >= 1000){
        cout << "Max account limit reached!" << endl;
    }
    else{
        cout << "Type the pin required to make a admin account: " << endl;
        int pinforadd {takeinput()};
        if(pinforadd == 6767){
            bool noadminaccount {true};
            for(int i=0;i<numberofaccounts;i++){
                if(account[i].accounttype == "Admin"){
                    noadminaccount = false;
                    break;
                }
            }
            if(noadminaccount){
                account[numberofaccounts].accountnumber = 11111111;
                account[numberofaccounts].pin = 122333;
                account[numberofaccounts].accounttype = "Admin";
                account[numberofaccounts].name = "Admin";
                account[numberofaccounts].money = 7000;
                account[numberofaccounts].maxdeposit_withdraw_transfer = 100000;
                cout << "Account number: " << account[numberofaccounts].accountnumber << endl;
                cout << "Account name: " << account[numberofaccounts].name << endl;
                cout << "Account pin: " << account[numberofaccounts].pin << endl;
                cout << "Account added successfully" << endl;
                numberofaccounts++;
            }
            else{
                cout << "Only one admin account only" << endl;
            }
        }
        else{
            cout << "Pin is invalid" << endl;
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
        cout << boolalpha;
        cout << "Account Banned: " << account[i].banned << endl;
        cout << noboolalpha;
        cout << endl;
    }
    cout << "1. Delete account" << endl;
    cout << "2. Ban/unban account" << endl;
    cout << "3. Exit" << endl;
    cout << "Input:" << endl;
}

bool inputpin(int accountloggedinpin){
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
    }
}

void deleteaccount(int& numberofaccounts, bool& loggedin, int& accountloggedinnumber, string& accountloggedinname, int& accountloggedinpin, int& accountloggedinindex){
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
                cout << "Confirm (y) to delete " << account[account_index].name << " account or revert (n) y/n:" << endl;
                string confirmation;
                cin >> confirmation;
                if(confirmation == "y"){
                    if(accountloggedinnumber == account[account_index].accountnumber){
                        accountloggedinname.clear();
                        accountloggedinnumber = 0;
                        accountloggedinpin = 0;
                        loggedin = false;
                    }
                    for(int i=account_index;i<numberofaccounts-1;i++){
                        account[i] = account[i+1];
                    }
                    for(int i=0;i<numberofaccounts;i++){
                        if(accountloggedinnumber == account[i].accountnumber){
                            accountloggedinindex = i;
                            break;
                        }
                    }
                    cout << "Successfully deleted" << endl;
                    numberofaccounts--;
                }
                else if(confirmation != "n"){
                    cout << "Invalid Input" << endl;
                }
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

void login(int& accountloggedinindex, int numberofaccounts, bool& loggedin, int& accountloggedinnumber, string& accountloggedinname, int& accountloggedinpin, string& accountloggedintype){
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
            if(account[account_index].banned){
                cout << "Account is banned can't login into that account, please login into an another account(note:Admin can unban)" << endl;
            }
            else{
                cout << "Input Pin:" << endl;
                int pinforlogin {takeinput()};
                if(pinforlogin == account[account_index].pin){
                    accountloggedinnumber = account[account_index].accountnumber;
                    accountloggedinname = account[account_index].name;
                    accountloggedinpin = account[account_index].pin;
                    cout << "Account Number: " << account[account_index].accountnumber << endl;
                    cout << "Name: " << account[account_index].name << endl;
                    accountloggedinindex = account_index;
                    accountloggedintype = account[account_index].accounttype;
                    loggedin = true;
                    cout << "Login attempt was successfull" << endl;
                }
                else{
                    cout << "Invalid Pin" << endl;
                }
            }
        }
        else{
            cout << "No account found, create one using register" << endl;
        }
    }
}

void accountinfo(int accountloggedinnumber, string accountloggedinname, string accountloggedintype){
    cout << "===================" << endl;
    cout << "   ACCOUNT INFO    " << endl;
    cout << "===================" << endl;
    cout << endl;
    cout << "Account Type: " << accountloggedintype << endl;
    cout << "Account Number: " << accountloggedinnumber << endl;
    cout << "Account Name: " << accountloggedinname  << endl;
    cout << "1. Change Pin" << endl;
    cout << "2. Change account name" << endl;
    cout << "3. Log out" << endl;
    cout << "4. delete this account" << endl;
    cout << "5. Exit" << endl;
    cout << "Input: " << endl;
}

void accountban(int numberofaccounts, int accountloggedinpin){
    bool accountfound {false};
    int account_index {};
    cout << "Type account number of the account to ban/unban (note: admin pin is required to ban a account)" << endl;
    int accountnumber {takeinput()};
    findaccount(numberofaccounts, accountnumber, accountfound, account_index);
    if(accountfound){
        if(account[account_index].accounttype == "Admin"){
            cout << "Admin account can't be banned" << endl;
        }
        else{
            if(account[account_index].banned){
                cout << "Type (y) to unban or (n) to cancel" << endl;
            }
            else{
                cout << "Type (y) to ban or (n) to cancel" << endl;
            }
            string confirmation;
            cin >> confirmation;
            if(confirmation == "y"){
                if(inputpin(accountloggedinpin)){
                    if(account[account_index].banned == false){
                        account[account_index].banned = true;
                        cout << "Account banned" << endl;
                    }
                    else{
                        account[account_index].banned = false;
                        cout << "Account unbanned" << endl;
                    }
                }
            }
        }
    }
    else{
        cout << "Account not found" << endl;
    }
}

void deleteloggedinaccount(int& numberofaccounts, int accountloggedinpin, int accountloggedinindex){
    if(inputpin(accountloggedinpin)){
        cout << "Type (y) to confirm or (n) to cancel" << endl;
        string confirmation;
        cin >> confirmation;
        if(confirmation == "y"){
            for(int i=accountloggedinindex;i<numberofaccounts-1;i++){
                account[i] = account[i+1];
            }
            numberofaccounts--;
            cout << "Successfully deleted" << endl;
        }
    }
    else{
        cout << "Invalid Pin" << endl;
    }
}

void changepin(int accountloggedinindex, int& accountloggedinpin){
    if(inputpin(accountloggedinpin)){
        pinrules();
        cout << "Input new pin:" << endl;
        int newpin {takeinput()};
        if(cin.fail()){
            cinbugfix();
        }
        else{
            if(newpin <= 0){
                cout << "Pin can't be negative or zero" << endl;
            }
            else{
                string variableforpincheck {to_string(newpin)};
                if(variableforpincheck.size() < 4 || variableforpincheck.size() > 6){
                    cout << "Error: pin can't be greater than 6 or less than 4 digits" << endl;
                }
                else{
                    cout << "Successfully Changed!" << endl;
                    account[accountloggedinindex].pin = newpin;
                    accountloggedinpin = newpin;
                }
            }
        }
    }
    else{
        cout << "Wrong Pin" << endl;
    }
}

void changeaccountname(int accountloggedinindex, string& accountloggedinname, int accountloggedinpin){
    string newname {};
    cout << "Input new name: " << endl;
    cin.ignore(1000, '\n');
    getline(cin, newname);
    if(newname == account[accountloggedinindex].name || newname.empty()){
        cout << "account name can't be empty or can't be the same as before" << endl;
    }
    else{
        if(inputpin(accountloggedinpin)){
            account[accountloggedinindex].name = newname;
            cout << "Name successfully changed" << endl;
            accountloggedinname = account[accountloggedinindex].name;
        }
        else{
            cout << "Invalid Pin" << endl;
        }
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

void checkbalance(int accountloggedinindex){
    cout << "Balance: " << "$" << account[accountloggedinindex].money << endl;
}

double takeamountinput(){
    cout << "Input Amount: " << endl;
    double x;
    cin >> x;
    return x;
}

void depositmoney(int accountloggedinindex, int accountloggedinpin){
    double ammount {takeamountinput()};
    if(ammount <= 0){
        cout << "Amount can't be zero or negative!" << endl;
    }
    else if(ammount > account[accountloggedinindex].maxdeposit_withdraw_transfer){
        cout << "Max amount you can deposit at one time is " << account[accountloggedinindex].maxdeposit_withdraw_transfer << endl;
    }
    else{
        if(inputpin(accountloggedinpin)){
            account[accountloggedinindex].money += ammount;
            cout << "Successfully deposited" << endl;
            checkbalance(accountloggedinindex);
        }
        else{
            cout << "Invalid Pin!" << endl;
        }
    }
}

void withdrawmoney(int accountloggedinindex, int accountloggedinpin){
    double ammount {takeamountinput()};
    if(ammount <= 0 || ammount > account[accountloggedinindex].money){
        cout << "Amount can't be bigger than balance, amount can't be zero or negative" << endl;
    }
    else if(ammount > account[accountloggedinindex].maxdeposit_withdraw_transfer){
        cout << "Max amount you can withdraw at one time is " << account[accountloggedinindex].maxdeposit_withdraw_transfer << endl;
    }
    else{
        if(inputpin(accountloggedinpin)){
            account[accountloggedinindex].money -= ammount;
            cout << "Successfully Withdrawn" << endl;
            checkbalance(accountloggedinindex);
        }
        else{
            cout << "Invalid Pin!" << endl;
        }
    }
}

void transfermoney(int accountloggedinindex, int numberofaccounts, int accountloggedinpin){
    while(true){
        cout << "Type the account number you wanna transfer to: " << endl;
        int inputaccount {takeinput()};
        int account_index2 {};
        bool accountfound2 {false};
        findaccount(numberofaccounts, inputaccount, accountfound2, account_index2);
        if(accountfound2){
            if(account[account_index2].accountnumber == account[accountloggedinindex].accountnumber){
                cout << "Can't transfer money to the same account!" << endl;
                break;
            }
            else{
                cout << "Account found: " << endl;
                cout << "Account Number: " << account[account_index2].accountnumber << endl;
                cout << "Name: " << account[account_index2].name << endl;
                cout << "Is this correct account? type(y) to confirm, (n) if it's wrong or (q) to cancel: " << endl;
                string userinput;
                cin >> userinput;
                if(userinput == "y"){ 
                    double ammount {takeamountinput()};
                    if(ammount <= 0 || ammount > account[accountloggedinindex].money){
                        cout << "Amount can't be bigger than balance, ammount can't be zero or negative" << endl;
                        break;
                    }
                    else if(ammount > account[accountloggedinindex].maxdeposit_withdraw_transfer){
                        cout << "Max amount you can transfer at one time is " << account[accountloggedinindex].maxdeposit_withdraw_transfer << endl;
                    }
                    else{
                        cout << "confirm transfer " << ammount << " to " << account[account_index2].name << " (y or n):" << endl;
                        string confirmation {};
                        cin >> confirmation;
                        if(confirmation == "y"){
                            if(inputpin(accountloggedinpin)){
                                account[accountloggedinindex].money -= ammount;
                                account[account_index2].money += ammount;
                                cout << "Successfully Transferred" << endl;
                                checkbalance(accountloggedinindex);
                                break;
                            }
                            else{
                                cout << "Invalid Pin" << endl;
                                break;
                            }
                        }
                        else{
                            break;
                        }
                    }
                }
                else if(userinput == "q"){
                    break;
                }
                else if(userinput == "n"){
                    continue;
                }
                else{
                    cout << "Invalid Input" << endl;
                    continue;
                }
            }
        }
        else{
            cout << "Can't find the account" << endl;
            break;
        }
    }
}
