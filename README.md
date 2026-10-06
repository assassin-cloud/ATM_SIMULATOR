ATM Simulator
<p align="center"> <strong>A console-based ATM simulator written in C++</strong> <br> Built for learning, experimentation, and practicing C++ software development. </p> <p align="center"> <img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+"> <img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0"> <img src="https://img.shields.io/badge/Status-Complete-22c55e?style=for-the-badge" alt="Complete"> <img src="https://img.shields.io/badge/Platform-Cross--Platform-6f42c1?style=for-the-badge" alt="Cross-platform"> </p>

[!NOTE]
v1.0.0 is complete. This release provides the core ATM simulation functionality. Future versions may improve security, validation, code structure, persistence, testing, and the user interface.

Overview

ATM Simulator is a console-based C++ application that simulates basic ATM and account-management functionality.

Users can create standard or business accounts, log in using an account number and PIN, view account information, change their account name or PIN, check their balance, deposit money, withdraw money, and transfer money between accounts.

The application also includes a basic administrator account system that allows an administrator to view registered accounts and delete accounts.

This project is intended for educational purposes and does not connect to real banking systems or process real financial transactions.

Features
Account Management

Create standard accounts

Create business accounts

Generate unique account records using user-provided account numbers

Account numbers must contain exactly 6 digits

Set an account holder name

Set a 4–6 digit PIN

Change account name

Change PIN

Delete the currently logged-in account

Administrator account management

Authentication

Account-number and PIN-based login

Logout functionality

PIN verification for sensitive operations

Prevention of multiple simultaneous logins

Banking Operations

Check account balance

Deposit money

Withdraw money

Transfer money between accounts

Prevent transfers to the same account

Verify the destination account before transferring

Require PIN confirmation for deposits, withdrawals, and transfers

Account Types

The application currently supports three account types:

Account Type	Starting Balance	Transaction Limit
Standard	$7,000	$10,000
Business	$7,000	$50,000
Admin	$7,000	$100,000

The transaction limit applies to individual deposits, withdrawals, and transfers.

Current Functionality
Feature	Status
Account registration	✅ Implemented
Standard accounts	✅ Implemented
Business accounts	✅ Implemented
Unique account numbers	✅ Implemented
PIN authentication	✅ Implemented
Login / Logout	✅ Implemented
Account information	✅ Implemented
Change account name	✅ Implemented
Change PIN	✅ Implemented
Account deletion	✅ Implemented
Balance checking	✅ Implemented
Deposits	✅ Implemented
Withdrawals	✅ Implemented
Transfers	✅ Implemented
Administrator account	✅ Implemented
Administrator account listing	✅ Implemented
Administrator account deletion	✅ Implemented
Persistent storage	❌ Not implemented
Automated testing	❌ Not implemented
Transaction history	❌ Not implemented
Project Structure
assassin-cloud-atm_simulator/
├── README.md
└── atm-simulator/
    ├── main.cpp
    ├── function.cpp
    └── function.h

File	Description
main.cpp	Contains the main application loop, menus, login state, and program flow
function.cpp	Contains ATM functionality, account management, authentication, and banking operations
function.h	Contains function declarations used by the application
Requirements

A C++ compiler

C++17 or newer recommended

Supported compilers include:

GCC

Clang

MSVC

Installation

Clone the repository:

git clone <repository-url>


Navigate to the project directory:

cd assassin-cloud-atm_simulator/atm-simulator

Build
Standard Build
g++ main.cpp function.cpp -std=c++17 -o atm-simulator

Debug Build
g++ main.cpp function.cpp -std=c++17 -Wall -Wextra -g -o atm-simulator

Run
Linux / macOS
./atm-simulator

Windows
.\atm-simulator.exe

Usage

When the application starts, the main menu is displayed:

==========
   ATM
==========

1. Login
2. Account info/settings
3. Register(create a account)
4. See all accounts on the device
5. Check your balance, deposit, withdraw and transfer
6. Register a Admin account
7. Exit
Input:


Some menu options require the user to be logged in.

Creating an Account

Select option 3 from the main menu.

You will be asked to select an account type:

Please select account type:
1. Standard    2. Business


You must then provide:

A unique 6-digit account number

Your name

A 4–6 digit PIN

New accounts start with a balance of $7,000.

Account Number Rules

Account numbers:

Must be positive

Must contain exactly 6 digits

Must be unique

Cannot contain letters or special characters

Because account numbers are stored as integers, leading zeros are not preserved.

For example:

012345


is interpreted as:

12345


and therefore does not satisfy the 6-digit requirement.

PIN Rules

PINs:

Must contain between 4 and 6 digits

Must be positive

Cannot contain letters

Are stored as integers

Because PINs are stored as integers, leading zeros are not preserved.

For example:

0123


becomes:

123


and therefore does not satisfy the minimum 4-digit requirement.

Logging In

Select option 1 from the main menu.

Enter:

Your account number

Your PIN

If both values match an existing account, the account is logged in.

Only one account can be logged in at a time.

Account Information

After logging in, select option 2.

The account information menu provides:

===================
   ACCOUNT INFO
===================

Account Type: ...
Account Number: ...
Account Name: ...

1. Change Pin
2. Change account name
3. Log out
4. delete account
5. Exit
Input:


Available operations include:

Change PIN

Change account name

Log out

Delete the logged-in account

Return to the main menu

PIN verification is required when changing the PIN or account name and when deleting the logged-in account.

Banking Operations

After logging in, select option 5.

The banking menu is:

==========
   ATM
==========

1. Check your balance
2. Deposit money
3. Withdraw money
4. Transfer money
5. Exit
Input:

Check Balance

Displays the current account balance.

Deposit Money

The user enters an amount to deposit.

The application checks that:

The amount is greater than zero

The amount does not exceed the account's transaction limit

The correct PIN is entered

Withdraw Money

The user enters an amount to withdraw.

The application checks that:

The amount is greater than zero

The amount does not exceed the current balance

The amount does not exceed the account's transaction limit

The correct PIN is entered

Transfer Money

Money can be transferred to another registered account.

The application:

Requests the destination account number.

Verifies that the account exists.

Prevents transfers to the same account.

Displays the destination account information.

Requests confirmation.

Requests the transfer amount.

Checks the balance and transaction limit.

Requests the sender's PIN.

Transfers the money if all checks succeed.

Administrator Account

The application contains a basic administrator account system.

An administrator account can be created from the main menu using option 6.

The application requires a special setup PIN before creating the administrator account.

Important: The administrator credentials are hard-coded in the current implementation and are intended only for this educational project.

Only one administrator account can exist at a time.

The administrator account currently has:

Account number: 11111111

Account name: Admin

Account type: Admin

Starting balance: $7,000

Transaction limit: $100,000

Administrator Features

When logged in as an administrator, option 4 can be used to:

View registered accounts

Delete an account

The account listing displays account numbers and account holder names.

The administrator account itself can also be selected for deletion through the account-management functionality.

Account Capacity

The application uses a fixed-size in-memory array capable of storing up to 1,000 accounts.

accounts account[1000];


No dynamic database or external storage is currently used.

Data Storage

All account information is stored in memory while the program is running.

When the application exits:

Accounts are lost

Balances are lost

PINs are lost

Account changes are lost

There is currently no:

File storage

Database

Cloud storage

Serialization

Data recovery

Security Limitations

This project is an educational simulator and should not be used for real financial information.

The current implementation has several security limitations:

PINs are stored as plain integers in memory.

PINs are not hashed or encrypted.

Administrator credentials are hard-coded in the source code.

The administrator setup PIN is hard-coded.

Account numbers and PINs are entered directly through the console.

There is no account lockout after failed login attempts.

There is no encryption.

There is no secure authentication system.

There is no audit log or transaction history.

There is no persistent secure storage.

Do not use real banking credentials, PINs, passwords, or financial information with this application.

Input Validation

The application currently performs basic validation for:

Menu choices

Account numbers

Duplicate account numbers

Account names

PIN length

Positive monetary amounts

Available account balance

Transaction limits

Destination account existence

Transfers to the same account

Incorrect PINs

Invalid numeric input is also handled using a basic input-recovery function.

Input validation is still an area that could be significantly improved.

Known Limitations

The current version has several limitations:

Accounts exist only in memory.

Account numbers and PINs use integer types, so leading zeros cannot be preserved.

Monetary values use int, so the application does not support decimal currency amounts.

There is no transaction history.

There are no automated tests.

Error handling is basic.

Authentication is intentionally simple.

PINs are not securely stored.

Administrator credentials are hard-coded.

The account system uses a fixed-size global array.

The application uses global account state rather than an encapsulated account-management class.

There is no database or file persistence.

The console interface is basic.

Future Improvements

Possible future improvements include:

 Add persistent file storage

 Add database support

 Add automated unit tests

 Improve input validation

 Improve error handling

 Replace global account storage with classes

 Introduce an Account class

 Introduce an ATM or Bank management class

 Replace integer PINs with safer representations

 Hash PINs instead of storing them directly

 Remove hard-coded administrator credentials

 Add login attempt limits

 Add transaction history

 Add transaction timestamps

 Add account-specific transaction limits

 Support decimal monetary values

 Add account locking

 Add better console formatting

 Improve documentation

 Add CI/build automation

Testing

Automated tests have not yet been added.

Current testing is performed manually through the console application.

Important scenarios to test include:

Creating a standard account

Creating a business account

Creating duplicate account numbers

Invalid account numbers

Invalid PIN lengths

Logging in with valid credentials

Logging in with invalid credentials

Changing a PIN

Changing an account name

Depositing money

Withdrawing money

Attempting to withdraw more than the balance

Attempting to exceed transaction limits

Transferring money

Attempting to transfer to the same account

Deleting an account

Creating an administrator account

Administrator account management

Invalid menu input

Contributing

Contributions, suggestions, and bug reports are welcome.

For bug reports, please include:

Description of the issue

Steps to reproduce it

Expected behavior

Actual behavior

Compiler and operating system information

Relevant error messages

Disclaimer

This project is an educational ATM simulator.

It does not:

Connect to real banking systems

Process real money

Store real financial accounts

Provide real banking services

Do not use real banking credentials, PINs, passwords, or financial information with this application.

License

No license has currently been specified for this project.

Version

v1.0.0 — Complete

The first version of ATM Simulator provides the core account-management and banking functionality implemented in the current source code.

Future releases can focus on persistence, testing, security, code architecture, error handling, and improved usability.

<p align="center"> <strong>ATM Simulator v1.0.0</strong> <br> <sub>Built with C++ · Educational Project</sub> </p>
