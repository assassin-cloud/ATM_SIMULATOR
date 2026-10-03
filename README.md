# ATM Simulator

<p align="center">
  <strong>A console-based ATM simulator written in C++</strong>
  <br>
  Built for learning, experimentation, and practicing software development.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+">
  <img src="https://img.shields.io/badge/Status-Pre--Release-orange?style=for-the-badge" alt="Pre-release">
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-2ea44f?style=for-the-badge" alt="Cross-platform">
</p>

> [!WARNING]
> **Pre-release software:** This project is still under active development. Some features are incomplete, bugs may exist, and breaking changes are possible.

## Overview

ATM Simulator provides a simple command-line environment for managing accounts and simulating basic ATM functionality.

The current version includes account creation, PIN authentication, login/logout, account information, PIN changes, account listing, account deletion, balance checking, deposits, and withdrawals.

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
| Balance checking | 🚧 Not implemented |
| Deposits | 🚧 Not implemented |
| Withdrawals | 🚧 Not implemented |
| Transfers | 🚧 Not implemented |
| Persistent storage | 🚧 Not implemented |

## Project Structure

```text
assassin-cloud-atm_simulator/
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

 Supported compilers include GCC, Clang, and MSVC.

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

 Compile with GCC:

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 For a debug build:

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

1. Sign in
2. Account info
3. Register(create a account)
4. See all accounts on the device
5. Check your balance, deposit, withdraw and transfer
6. Exit
```

 > **Note:** Option 5 is currently not implemented.

 ### Creating an Account

 Select `3` from the main menu and provide:

 - A unique account number
- Your name
- A PIN

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

 ## Limitations

 ### Account Limit

 The current implementation supports a maximum of **5 accounts**.

 ### Data Persistence

 Accounts are stored only in memory. All accounts are lost when the application closes.

 There is currently no file, database, or cloud storage.

 ### Security

 PINs are currently stored directly in memory and are not encrypted or hashed.

 This project should not be used with real banking credentials or sensitive financial information.

 ### Incomplete Features

 The following features are planned but are not currently implemented:

 - Balance management
- Deposits
- Withdrawals
- Transfers
- Persistent account storage

 ## Development

 The project is currently in active development.

 Planned improvements include:

 - [ ] Implement balance management
- [ ] Implement deposits
- [ ] Implement withdrawals
- [ ] Implement transfers
- [ ] Add persistent storage
- [ ] Improve input validation
- [ ] Improve error handling
- [ ] Refactor account management
- [ ] Add testing
- [ ] Improve code structure
- [ ] Prepare stable release

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

 ## Status

 **Pre-release · Active Development · Not Production Ready**
