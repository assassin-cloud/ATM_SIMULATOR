# ATM Simulator

<p align="center">
  <strong>A console-based ATM simulator written in C++</strong>
  <br>
  Built for learning, experimentation, and practicing software development.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+">
  <img src="https://img.shields.io/badge/Version-1.0.0-2ea44f?style=for-the-badge" alt="Version 1.0.0">
  <img src="https://img.shields.io/badge/Status-Complete-22c55e?style=for-the-badge" alt="Complete">
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-6f42c1?style=for-the-badge" alt="Cross-platform">
</p>

> [!NOTE]
> **v1.0.0 is complete.** The first version of the project is finished and functional. Future versions may introduce new features, improvements, refactoring, bug fixes, and better testing.

## Overview

ATM Simulator is a console-based application written in C++ that provides a simple environment for creating and managing accounts while simulating basic ATM operations.

The project supports account creation, PIN authentication, login/logout, account information, PIN changes, account listing, account deletion, balance checking, deposits, withdrawals, and transfers.

## Features

- Account registration
- Unique account numbers
- PIN-based authentication
- Account login and logout
- Account information
- PIN changes
- Account listing
- Account deletion
- Balance checking
- Deposits
- Withdrawals
- Money transfers
- Basic input validation
- Console-based interface

## Current Functionality

| Feature | Status |
| --- | --- |
| Account registration | ✅ Implemented |
| Account numbers | ✅ Implemented |
| PIN authentication | ✅ Implemented |
| Login / Logout | ✅ Implemented |
| Account information | ✅ Implemented |
| Change PIN | ✅ Implemented |
| View accounts | ✅ Implemented |
| Delete accounts | ✅ Implemented |
| Balance checking | ✅ Implemented |
| Deposits | ✅ Implemented |
| Withdrawals | ✅ Implemented |
| Transfers | ✅ Implemented |
| Persistent storage | 🚧 Planned |
| Automated testing | 🚧 Planned |

## Project Structure

```text
assassin-cloud-atm_simulator/
├── README.md
└── atm-simulator/
    ├── main.cpp
    ├── function.cpp
    └── function.h

````

 | File | Description |
| --- | --- |
| `main.cpp` | Main program loop and menu handling |
| `function.cpp` | ATM and account functionality |
| `function.h` | Function declarations |

## Requirements

 - C++ compiler
- C++17 or newer recommended

 Supported compilers include:

 - GCC
- Clang
- MSVC

 ## Installation

 Clone the repository:

```
git clone <repository-url>
```

 Navigate to the project:

```
cd assassin-cloud-atm_simulator/atm-simulator
```

 ## Build

 ### Standard Build

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 ### Debug Build

```
g++ main.cpp function.cpp -std=c++17 -Wall -Wextra -g -o atm-simulator
```

 ## Run

 ### Linux / macOS

```
./atm-simulator
```

 ### Windows

```
.\atm-simulator.exe
```

 ## Usage

 The application starts with the following menu:

```
==========
   ATM
==========

1. Login
2. Account info
3. Register(create a account)
4. See all accounts on the device
5. Check your balance, deposit, withdraw and transfer
6. Exit
```

 ### Creating an Account

 Select `3` from the main menu and provide:

 - A unique account number
- Your name
- A PIN

 New accounts currently start with a balance of **$7000**.

 ### Signing In

 Select `1` and provide the account number and PIN associated with the account.

 ### Account Information

 After signing in, select `2` to access account information.

 Available options include:

 - Change PIN
- Log out
- Return to the main menu

 ### Account Management

 Select `4` from the main menu to view registered accounts.

 Accounts can also be deleted from this menu.

 ### Banking Operations

 After logging in, select `5` to access the banking menu:

```
==========
   ATM
==========

1. Check your balance
2. Deposit money
3. Withdraw money
4. Transfer money
5. Exit
```

 Available operations include:

 - Checking your balance
- Depositing money
- Withdrawing money
- Transferring money to another account

 PIN verification is required for financial operations.

 ## Limitations

 ### Account Limit

 The current implementation supports a maximum of **5 accounts**.

 ### Data Persistence

 Accounts are stored only in memory.

 All accounts and balances are lost when the application closes.

 There is currently no file, database, or cloud storage.

 ### Security

 PINs are currently stored directly in memory and are not encrypted or hashed.

 This project should not be used with real banking credentials or sensitive financial information.

 ### Automated Testing

 Automated tests have not yet been added.

 Testing is currently performed manually through the console application.

 ## Future Improvements

 v1.0.0 is complete, but there is still significant room for future development.

 Planned improvements include:

 - [ ] Add persistent storage
- [ ] Add automated testing
- [ ] Improve input validation
- [ ] Improve error handling
- [ ] Refactor account management
- [ ] Improve code structure
- [ ] Improve security
- [ ] Add transaction history
- [ ] Add account types
- [ ] Add transaction limits
- [ ] Improve user interface
- [ ] Add better documentation

 ## Contributing

 Contributions, suggestions, and bug reports are welcome.

 For bug reports, include:

 - Description of the issue
- Steps to reproduce it
- Expected behavior
- Actual behavior
- Compiler and operating system information
- Relevant error messages

 ## Disclaimer

 This project is an educational ATM simulator.

 It does not connect to real banking systems, process real money, or perform real financial transactions.

 Do not use real banking credentials, PINs, passwords, or financial information with this application.

 ## License

 No license has currently been specified for this project.

 ## Version

 **v1.0.0 — Complete**

 The first version of ATM Simulator is complete and functional.

 Future releases will focus on improving reliability, testing, security, code quality, persistence, and overall functionality.

 \<p align="center"\> \<strong\>ATM Simulator v1.0.0\</strong\> \<br\> \<sub\>Built with C++ · First Release\</sub\> \</p\> \`\`\`
