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
    cout << "Press a key to continue..." << endl;
    cin.ignore(1000, '\n');
    cin.get();
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

void pinrules(){
    cout << "   RULES    " << endl;
    cout << "Limitation: zero at start of pin is removed e.g 0123 would be 123 or 000123 would be 123" << endl;
    cout << "Pin can't be greater than 6 digits or less than 4 digits" << endl;
    cout << "Pin should not contain any letter" << endl;
}

void accountnumberrules(){
    cout << "   RULES    " << endl;
    cout << "Limitation: zero at start of account number is removed e.g 0123 would be 123 or 000123 would be 123" << endl;
    cout << "Account number should be 8 digits no more no less" << endl;
    cout << "Account number should be unique and contain no special characters or letters" << endl;
}

void add(int& numberofaccounts){
    if(numberofaccounts == 10){
        cout << "Maximum numbers of accounts reached" << endl;
    }
    else{
        accountnumberrules();
        cout << "Enter a unique number for your account:" << endl;
        int tempnumber {takeinput()};
        if(cin.fail()){
            cinbugfix;
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
                cin.ignore(1000, '\n');
                if(!duplicate){
                    string variablefornumbercheck {to_string(tempnumber)};
                    if(variablefornumbercheck.size() != 8){
                        cout << "Error: Account number should be 8 digits" << endl;
                    }
                    else{
                        cout << "Enter Name" << endl;
                        string tempname {};
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

void deleteaccount(int& numberofaccounts, bool& loggedin, int& accountloggedinnumber, string& accountloggedinname, int& accountloggedinpin){
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
                cout << "Confirm (y) to delete" << account[account_index].name << " account or revert (n) y/n:" << endl;
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
            cout << "Input Pin:" << endl;
            int pinforlogin {takeinput()};
            if(pinforlogin == account[account_index].pin){
                accountloggedinnumber = account[account_index].accountnumber;
                accountloggedinname = account[account_index].name;
                accountloggedinpin = account[account_index].pin;
                cout << "Account Number: " << account[account_index].accountnumber << endl;
                cout << "Name: " << account[account_index].name << endl;
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
    if(inputpin(accountloggedinpin)){
        bool accountfound {false};
        int account_index {};
        findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
        if(accountfound){
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
                        account[account_index].pin = newpin;
                        accountloggedinpin = newpin;
                    }
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

void changeaccountname(int numberofaccounts, int accountloggedinnumber, string& accountloggedinname, int accountloggedinpin){
    int account_index {};
    bool accountfound {false};
    findaccount(numberofaccounts, accountloggedinnumber, accountfound, account_index);
    if(accountfound){
        string newname {};
        cout << "Input new name: " << endl;
        cin.ignore(1000, '\n');
        getline(cin, newname);
        if(newname == account[account_index].name || newname.empty()){
            cout << "account name can't be empty or can't be the same as before" << endl;
        }
        else{
            if(inputpin(accountloggedinpin)){
                account[account_index].name = newname;
                cout << "Name successfully changed" << endl;
                accountloggedinname = account[account_index].name;
            }
            else{
                cout << "Invalid Pin" << endl;
            }
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
        cout << "Input the amount you wanna deposit:" << endl;
        int ammount {takeinput()};
        if(ammount <= 0){
            cout << "Amount can't be zero or negative!" << endl;
        }
        else{
            if(inputpin(accountloggedinpin)){
                account[account_index].money += ammount;
                cout << "Amount successfully deposited" << endl;
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
        cout << "Input the amount you wanna withdraw" << endl;
        int ammount {takeinput()};
        if(ammount <= 0 || ammount > account[account_index].money){
            cout << "Amount can't be bigger than balance, amount can't be zero or negative" << endl;
        }
        else{
            if(inputpin(accountloggedinpin)){
                account[account_index].money -= ammount;
                cout << "Amount successfully withdrawn" << endl;
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
        while(true){
            cout << "Type the account number you wanna transfer to: " << endl;
            int inputaccount {takeinput()};
            int account_index2 {};
            bool accountfound2 {false};
            findaccount(numberofaccounts, inputaccount, accountfound2, account_index2);
            if(accountfound2){
                if(account[account_index2].accountnumber == account[account_index].accountnumber){
                    cout << "Can't transfer money to the same account!" << endl;
                    continue;
                }
                else{
                    cout << "Account found: " << endl;
                    cout << "Account Number: " << account[account_index2].accountnumber << endl;
                    cout << "Name: " << account[account_index2].name << endl;
                    cout << "Is this correct account? type(y) to confirm, (n) if it's wrong or (q) to cancel: " << endl;
                    string userinput;
                    cin >> userinput;
                    if(userinput == "y"){ 
                        cout << "Input the amount you wanna transfer: " << endl;
                        int ammount {takeinput()};
                        if(ammount <= 0 || ammount > account[account_index].money){
                            cout << "Amount can't be bigger than balance, ammount can't be zero or negative" << endl;
                            break;
                        }
                        else{
                            cout << "confirm transfer " << ammount << " to " << account[account_index2].name << ":" << endl;
                            string confirmation {};
                            cin >> confirmation;
                            if(confirmation == "y"){
                                if(inputpin(accountloggedinpin)){
                                    account[account_index].money -= ammount;
                                    account[account_index2].money += ammount;
                                    cout << "Successfully transfered" << endl;
                                    cout << account[account_index].name << " Transfered " << ammount << " to " << account[account_index2].name << endl;
                                    cout << "Balance: " << account[account_index].money << endl;
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
    else{
        cout << "There is an issue with your account, trying logging out and logging in again" << endl;
    }
}
