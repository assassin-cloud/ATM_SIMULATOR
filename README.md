ATM Simulator

A simple C++ ATM simulator built as a learning project.

⚠️ Pre-release / Work in Progress

This project is still under active development. Some features are incomplete, some menu options currently do nothing, and bugs are expected. It is not intended for real-world banking or production use.

📌 About

The ATM Simulator is a console-based C++ program that simulates basic ATM/account functionality.

The current version allows you to create accounts, log in, view account information, change PINs, and manage accounts stored during the current program session.

The project is primarily intended for learning, experimentation, and practicing C++ programming concepts.

✨ Current Features

Create/register an account

Assign a unique account number

Set an account name

Set an account PIN

Log in using an account number and PIN

View logged-in account information

Change account PIN

Log out

View all accounts currently stored

Delete accounts

Basic invalid-input handling

Console-based ATM menu

🚧 In Development

Some features shown in the main menu have not been implemented yet.

Currently incomplete

💰 Balance checking

💵 Depositing money

💸 Withdrawing money

🔄 Transferring money between accounts

💾 Saving accounts to a file/database

🔐 More robust authentication and security

🧹 Improved input validation

🐛 General bug fixing and code cleanup

The menu currently contains an option for balance, deposit, withdrawal, and transfers, but these features are not implemented in the current release.

⚠️ Important Limitations
Data is not persistent

All accounts are stored in memory while the program is running.

Closing the program will delete all created accounts. There is currently no file or database storage.

Limited number of accounts

The current implementation supports a maximum of 5 accounts.

PIN security

PINs are currently stored directly in memory and are not encrypted or securely hashed.

This is a learning project and should not be used to handle real financial information.

Pre-release stability

Because the project is still being developed, you may encounter:

Bugs

Unexpected behavior

Incomplete features

Input-handling issues

Temporary implementations

Breaking changes in future versions

📂 Project Structure
assassin-cloud-atm_simulator/
└── atm-simulator/
    ├── function.cpp
    ├── function.h
    └── main.cpp

Files
File	Description
main.cpp	Contains the main program loop and menu handling
function.cpp	Contains the ATM/account functionality
function.h	Contains function declarations and shared definitions
🔧 Requirements

You need a C++ compiler capable of compiling modern C++ code.

For example:

GCC / G++

Clang

Microsoft Visual C++

The project uses standard C++ libraries such as:

<iostream>
<string>

▶️ Building

From inside the atm-simulator directory, compile the source files with:

g++ main.cpp function.cpp -o atm-simulator


Then run:

Linux / macOS
./atm-simulator

Windows
atm-simulator.exe


Depending on your compiler and environment, you may want to explicitly select a C++ standard, for example -std=c++17.

🖥️ Main Menu

The current program provides the following menu:

==========
   ATM
==========

1. Sign in
2. Account info
3. Register(create a account)
4. See all accounts on the device
5. Check your balance, deposit, withdraw and transfer
6. Exit

Current menu status
Option	Status
Sign in	✅ Implemented
Account info	✅ Implemented
Register account	✅ Implemented
View/delete accounts	✅ Implemented
Balance/deposit/withdraw/transfer	🚧 Not implemented
Exit	✅ Implemented
🗺️ Roadmap

Planned improvements include:

 Implement balance management

 Implement deposits

 Implement withdrawals

 Implement transfers

 Add persistent account storage

 Improve input validation

 Improve authentication

 Remove unnecessary dynamic memory usage

 Refactor account management

 Add better error handling

 Add tests

 Improve overall code structure

 Prepare a stable release

🐛 Bug Reports

If you find a bug, feel free to report it.

When reporting an issue, please include:

What you were trying to do

What you expected to happen

What actually happened

The steps required to reproduce the issue

Any relevant compiler/runtime errors

🤝 Contributing

Contributions and suggestions are welcome.

Since this project is still in development, the code structure and functionality may change significantly between versions.

If you want to contribute, feel free to fork the repository, make your changes, and submit a pull request.

📜 License

No license has currently been specified for this project.

If you intend to make the project open source, consider adding a LICENSE file before publishing a stable release.

⚠️ Disclaimer

This software is a learning/demo ATM simulator.

It does not connect to a bank, process real transactions, or provide real financial services.

Do not use real passwords, PINs, financial information, or other sensitive data with this program.

🚀 Project Status

Version: Pre-release
Status: 🟡 Active Development
Stability: Experimental
Production Ready: ❌ No
