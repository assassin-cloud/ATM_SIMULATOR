````
# ATM Simulator

A console-based ATM simulator written in C++.

> [!WARNING]
> This project is currently in **pre-release development**. Some features are incomplete, bugs are expected, and the project is not production-ready.

## Features

- Create new accounts
- Unique account numbers
- PIN-based authentication
- Account login and logout
- View account information
- Change account PIN
- View all accounts
- Delete accounts
- Basic input validation
- Console-based interface

## In Development

The following features are planned but are not implemented yet:

- [ ] Balance checking
- [ ] Depositing money
- [ ] Withdrawing money
- [ ] Transferring money between accounts
- [ ] Persistent account storage
- [ ] Improved input validation
- [ ] Improved error handling
- [ ] Code refactoring
- [ ] Testing

## Project Structure

```text
atm-simulator/
├── main.cpp
├── function.cpp
└── function.h
````

 | File | Description |
| --- | --- |
| `main.cpp` | Main program loop and menu handling |
| `function.cpp` | Account and ATM functionality |
| `function.h` | Function declarations |

## Requirements

 - C++ compiler
- C++17 or newer

 ## Build

 Clone the repository:

```
git clone <repository-url>
cd atm-simulator
```

 Compile the project:

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 ### Linux / macOS

```
./atm-simulator
```

 ### Windows

```
.\atm-simulator.exe
```

 ## Current Menu

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

 > **Note:** Option 5 is currently planned and is not implemented yet.

 ## Limitations

 - A maximum of **5 accounts** can currently be created.
- Accounts are stored only in memory.
- All accounts are lost when the program exits.
- There is no database or file storage.
- PINs are stored directly in memory and are not encrypted.
- Some menu options are still under development.

 ## Development Status

 **Version:** Pre-release\
 **Status:** Active Development\
 **Stability:** Experimental

 The project is being actively developed, and functionality may change between versions.

 ## Disclaimer

 This project is intended for **educational and development purposes only**.

 It is not connected to any real banking system and does not process real financial transactions.

 Do not use real banking credentials, PINs, passwords, or financial information with this application.

```

```
