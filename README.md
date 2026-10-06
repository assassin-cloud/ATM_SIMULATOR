# 🏧 ATM Simulator

<p align="center">
  <strong>A console-based ATM simulator written in C++</strong>
  <br>
  Built for learning, experimentation, and practicing C++ software development.
</p>

<p align="center">
  <a href="#-requirements">
    <img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+">
  </a>
  <a href="#-version">
    <img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0">
  </a>
  <a href="#-current-functionality">
    <img src="https://img.shields.io/badge/Status-Complete-22c55e?style=for-the-badge" alt="Complete">
  </a>
  <a href="#-requirements">
    <img src="https://img.shields.io/badge/Platform-Cross--Platform-6f42c1?style=for-the-badge" alt="Cross-platform">
  </a>
</p>

> [!NOTE]
> **v1.0.0 is complete.** The current release provides the core ATM, account-management, authentication, administrator, and banking functionality.

> [!WARNING]
> This is an **educational ATM simulator**. It does not connect to real banking systems and must not be used with real banking credentials, PINs, passwords, or financial information.

---

## 📑 Table of Contents

- [📖 Overview](#-overview)
- [✨ Features](#-features)
- [🏦 Account Types](#-account-types)
- [📊 Current Functionality](#-current-functionality)
- [📁 Project Structure](#-project-structure)
- [⚙️ Requirements](#️-requirements)
- [📥 Installation](#-installation)
- [🔨 Build](#-build)
- [▶️ Run](#️-run)
- [🖥️ Usage](#️-usage)
- [📝 Creating an Account](#-creating-an-account)
- [🔢 Account Number Rules](#-account-number-rules)
- [🔑 PIN Rules](#-pin-rules)
- [🔐 Login](#-login)
- [👤 Account Information](#-account-information)
- [💰 Banking Operations](#-banking-operations)
- [👑 Administrator Account](#-administrator-account)
- [📦 Account Capacity](#-account-capacity)
- [💾 Data Storage](#-data-storage)
- [🔒 Security](#-security)
- [🧪 Input Validation](#-input-validation)
- [⚠️ Known Limitations](#️-known-limitations)
- [🧪 Testing](#-testing)
- [🚀 Future Improvements](#-future-improvements)
- [🤝 Contributing](#-contributing)
- [⚖️ Disclaimer](#️-disclaimer)
- [📄 License](#-license)
- [🏷️ Version](#️-version)

---

# 📖 Overview

**ATM Simulator** is a console-based application written in **C++17** that simulates basic ATM and account-management functionality.

The application provides a simple environment for creating and managing accounts while practicing:

- C++ functions
- Header/source file organization
- Input validation
- Authentication logic
- Account management
- Banking operations
- Conditional logic
- Loops
- Arrays
- Basic application state management

> [!TIP]
> The project is designed primarily as a **learning and experimentation project**, rather than a production banking application.

---

# ✨ Features

## 👤 Account Management

- ✅ Register accounts
- ✅ Standard accounts
- ✅ Business accounts
- ✅ Unique account numbers
- ✅ Account holder names
- ✅ 4–6 digit PINs
- ✅ Change account name
- ✅ Change PIN
- ✅ Delete accounts
- ✅ Up to 1,000 accounts in memory

## 🔐 Authentication

- ✅ Account-number and PIN login
- ✅ Logout functionality
- ✅ PIN verification
- ✅ Login state tracking
- ✅ Prevention of multiple simultaneous logins

## 💳 Banking Operations

- ✅ Check balance
- ✅ Deposit money
- ✅ Withdraw money
- ✅ Transfer money
- ✅ Destination account verification
- ✅ Same-account transfer prevention
- ✅ PIN confirmation
- ✅ Per-transaction limits

## 👑 Administrator

- ✅ Create administrator account
- ✅ Administrator authentication
- ✅ View registered accounts
- ✅ Delete accounts
- ✅ Restrict administrator account creation to one account

---

# 🏦 Account Types

The application currently supports three account types.

| 🏦 Account Type | 💵 Starting Balance | 💳 Transaction Limit |
|:---:|---:|---:|
| 👤 **Standard** | `$7,000` | `$10,000` |
| 💼 **Business** | `$7,000` | `$50,000` |
| 👑 **Admin** | `$7,000` | `$100,000` |

> [!NOTE]
> The transaction limit applies to individual deposits, withdrawals, and transfers.

---

# 📊 Current Functionality

| Feature | Status |
|---|:---:|
| Account registration | 🟢 Implemented |
| Standard accounts | 🟢 Implemented |
| Business accounts | 🟢 Implemented |
| Unique account numbers | 🟢 Implemented |
| PIN authentication | 🟢 Implemented |
| Login / Logout | 🟢 Implemented |
| Account information | 🟢 Implemented |
| Change account name | 🟢 Implemented |
| Change PIN | 🟢 Implemented |
| Account deletion | 🟢 Implemented |
| Balance checking | 🟢 Implemented |
| Deposits | 🟢 Implemented |
| Withdrawals | 🟢 Implemented |
| Transfers | 🟢 Implemented |
| Administrator account | 🟢 Implemented |
| Administrator account listing | 🟢 Implemented |
| Administrator account deletion | 🟢 Implemented |
| Persistent storage | 🔴 Not implemented |
| Automated testing | 🔴 Not implemented |
| Transaction history | 🔴 Not implemented |
| Database | 🔴 Not implemented |

---

# 📁 Project Structure

```text
assassin-cloud-atm_simulator/
│
├── README.md
│
└── atm-simulator/
    ├── main.cpp
    ├── function.cpp
    └── function.h
```

 ### 📄 File Descriptions

 | File | Description |
| --- | --- |
| `main.cpp` | Main application loop, menus, login state, and program flow |
| `function.cpp` | ATM functionality, account management, authentication, and banking operations |
| `function.h` | Function declarations |
| `README.md` | Project documentation |

---

 ## ⚙️ Requirements

 ### 💻 Software

 - C++ compiler
- C++17 or newer

 ### 🛠️ Supported Compilers

 - GCC
- Clang
- MSVC

 > \[!IMPORTANT\]\
>  C++17 or newer is recommended.

---

 ## 📥 Installation

 ### 1\. Clone the Repository

```
git clone <repository-url>
```

 ### 2\. Enter the Project Directory

```
cd assassin-cloud-atm_simulator/atm-simulator
```

---

 ## 🔨 Build

 ### 🟢 Standard Build

 #### GCC / Clang

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 ### 🐛 Debug Build

```
g++ main.cpp function.cpp -std=c++17 -Wall -Wextra -g -o atm-simulator
```

 ### Build Options

 | Option | Purpose |
| --- | --- |
| `-std=c++17` | Enable C++17 |
| `-Wall` | Enable common compiler warnings |
| `-Wextra` | Enable additional compiler warnings |
| `-g` | Add debugging information |
| `-o atm-simulator` | Set the executable name |

---

 ## ▶️ Run

 ### 🐧 Linux / 🍎 macOS

```
./atm-simulator
```

 ### 🪟 Windows

```
.\atm-simulator.exe
```

---

 ## 🖥️ Usage

 When the program starts, the main menu is displayed:

```
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
```

 ### Main Menu

 | Option | Function |
| --- | --- |
| `1` | Login |
| `2` | Account information and settings |
| `3` | Register an account |
| `4` | View and delete accounts as administrator |
| `5` | Balance and banking operations |
| `6` | Register an administrator account |
| `7` | Exit |

> \[!NOTE\]\
>  Options `2`, `4`, and `5` require an appropriate logged-in account.

---

 ## 📝 Creating an Account

 Select:

```
3. Register(create a account)
```

 The application asks you to select an account type:

```
Please select account type:
1. Standard    2. Business
```

 You must then provide:

 1. Account number
2. Account name
3. PIN

 Every newly created Standard or Business account starts with:

```
$7000
```

 ### Example

```
Please select account type:
1. Standard    2. Business

Enter a unique number for your account:

Enter Name

PIN:
```

 After successful registration:

```
Account added successfully
Please login from the login option in main menu!
```

---

 ## 🔢 Account Number Rules

 Account numbers must:

 - ✅ Be positive
- ✅ Contain exactly 6 digits
- ✅ Be unique
- ❌ Not be zero
- ❌ Not be negative
- ❌ Not contain letters
- ❌ Not contain special characters

 ### ⚠️ Leading Zeros

 Account numbers are stored as `int`.

 Therefore, leading zeros cannot be preserved.

 For example:

```
012345
```

 is interpreted as:

```
12345
```

 and therefore fails the six-digit validation.

 > \[!WARNING\]\
>  Account numbers are integers rather than strings, so leading zeros are not supported.

---

 ## 🔑 PIN Rules

 PINs must:

 - ✅ Contain between 4 and 6 digits
- ✅ Be positive
- ❌ Not be zero
- ❌ Not be negative
- ❌ Not contain letters
- ❌ Not contain special characters

 ### ⚠️ Leading Zeros

 PINs are also stored as `int`.

 For example:

```
0123
```

 becomes:

```
123
```

 which is only three digits and therefore fails the PIN validation.

 > \[!WARNING\]\
>  PINs are stored directly as integers and are not hashed or encrypted.

---

 ## 🔐 Login

 Select:

```
1. Login
```

 The application requests:

```
Type the account number of the account you want to log in:
Input Pin:
```

 If both values match an existing account, the user is logged in.

 Example:

```
Account Number: 123456
Name: John
Login attempt was successfull
```

 > \[!NOTE\]\
>  Only one account can be logged in at a time.

---

 ## 👤 Account Information

 After logging in, select:

```
2. Account info/settings
```

 The account information menu displays:

```
===================
   ACCOUNT INFO
===================

Account Type: standard
Account Number: 123456
Account Name: John
1. Change Pin
2. Change account name
3. Log out
4. delete account
5. Exit
Input:
```

 ### Available Operations

 #### `1. Change Pin`

 The current PIN must be entered before changing the PIN.

 The new PIN must follow the normal PIN rules.

 #### `2. Change account name`

 The user can enter a new account name.

 The new name:

 - Cannot be empty
- Cannot be identical to the current name
- Requires PIN verification

 #### `3. Log out`

 Logs out the current account and clears the active login information.

 #### `4. delete account`

 The current PIN is required before deletion.

 The user must confirm the deletion.

 #### `5. Exit`

 Returns to the main menu without logging out.

---

 ## 💰 Banking Operations

 After logging in, select:

```
5. Check your balance, deposit, withdraw and transfer
```

 The banking menu is:

```
==========
   ATM
==========

1. Check your balance
2. Deposit money
3. Withdraw money
4. Transfer money
5. Exit

Input:
```

---

 ## 💵 Check Balance

 Select:

```
1. Check your balance
```

 The current balance is displayed.

 Example:

```
Balance: $7000
```

---

 ## 💰 Deposit Money

 Select:

```
2. Deposit money
```

 The application asks for the amount:

```
Input the amount you wanna deposit:
```

 The following checks are performed:

 - Amount must be greater than zero
- Amount cannot exceed the account's transaction limit
- Correct PIN must be provided

 After a successful deposit:

```
Amount successfully deposited
Balance: $9000
```

---

 ## 💸 Withdraw Money

 Select:

```
3. Withdraw money
```

 The application checks:

 - Amount must be greater than zero
- Amount cannot exceed the current balance
- Amount cannot exceed the account's transaction limit
- Correct PIN must be provided

 Example:

```
Input the amount you wanna withdraw
```

 After a successful withdrawal:

```
Amount successfully withdrawn
Balance: $5000
```

---

 ## 🔄 Transfer Money

 Select:

```
4. Transfer money
```

 The application asks for the destination account number.

 ### Transfer Process

```
Enter destination account number
            │
            ▼
Find destination account
            │
            ▼
Display destination account
            │
            ▼
Confirm destination
            │
            ▼
Enter transfer amount
            │
            ▼
Check balance
            │
            ▼
Check transaction limit
            │
            ▼
Confirm transfer
            │
            ▼
Enter PIN
            │
            ▼
Complete transfer
```

 The application prevents:

 - ❌ Transfers to non-existent accounts
- ❌ Transfers to the same account
- ❌ Transfers greater than the current balance
- ❌ Transfers above the transaction limit
- ❌ Transfers with an incorrect PIN

 Example:

```
Account found:
Account Number: 123456
Name: John

Is this correct account? type(y) to confirm, (n) if it's wrong or (q) to cancel:
```

---

 ## 👑 Administrator Account

 The application contains a basic administrator account system.

 An administrator account can be created using:

```
6. Register a Admin account
```

 The program requires a special setup PIN before creating the administrator account.

 > \[!WARNING\]\
>  The administrator setup PIN is hard-coded in the source code. This is not secure and is intended only for this educational project.

 Only one administrator account can be created.

---

 ## 🛡️ Administrator Details

 The current implementation creates the following administrator account:

 | Property | Value |
| --- | --- |
| Account Type | `Admin` |
| Account Number | `11111111` |
| Account Name | `Admin` |
| Starting Balance | `$7,000` |
| Transaction Limit | `$100,000` |

> \[!NOTE\]\
>  The administrator account number is eight digits, unlike normal user accounts, which require exactly six digits. The administrator account is created internally by the program and does not go through the normal registration validation.

---

 ## 📋 Viewing Accounts

 Administrator accounts can access:

```
4. See all accounts on the device
```

 The account list displays account numbers and names.

 Example:

```
===============
   ACCOUNTS
===============

Account 1
Account Number: 123456
Name: John

Account 2
Account Number: 654321
Name: Sarah

1. Delete account
2. Exit
```

 Non-administrator accounts cannot access this menu.

---

 ## 🗑️ Deleting Accounts

 There are two ways an account can be deleted.

 ### 👤 Self Deletion

 A logged-in user can delete their own account through:

```
2. Account info/settings
4. delete account
```

 The current PIN is required.

 ### 👑 Administrator Deletion

 An administrator can select:

```
4. See all accounts on the device
```

 and then:

```
1. Delete account
```

 The administrator must provide:

 - Account number
- Account PIN
- Deletion confirmation

 If the account being deleted is currently logged in, the active login state is cleared.

---

 ## 📦 Account Capacity

 Accounts are stored in a fixed-size global array:

```
accounts account[1000];
```

 Therefore, the current implementation supports up to:

```
1000 accounts
```

 > \[!NOTE\]\
>  This limit applies to the in-memory account array.

---

 ## 💾 Data Storage

 The application currently stores all account information in memory.

 There is no:

 - ❌ File storage
- ❌ Database
- ❌ Cloud storage
- ❌ Persistent account storage

 ### Data Stored in Memory

 Each account contains:

```
struct accounts {
    string accounttype;
    int accountnumber;
    string name;
    int pin;
    int money;
    int maxdeposit_withdraw_transfer;
};
```

 The following information is therefore kept in memory:

 | Data | Stored |
| --- | --- |
| Account type | ✅ |
| Account number | ✅ |
| Name | ✅ |
| PIN | ✅ |
| Balance | ✅ |
| Transaction limit | ✅ |

> \[!IMPORTANT\]\
>  All accounts, PINs, balances, and account changes are lost when the program closes.

---

 ## 🔒 Security

 This project is **not secure banking software**.

 It is intended only for educational purposes.

 ### Current Security Limitations

 - 🔴 PINs are stored directly in memory
- 🔴 PINs are not hashed
- 🔴 PINs are not encrypted
- 🔴 Administrator setup credentials are hard-coded
- 🔴 No login attempt limit
- 🔴 No account lockout
- 🔴 No encryption
- 🔴 No secure persistent storage
- 🔴 No audit logging
- 🔴 No transaction history
- 🔴 No secure banking infrastructure

 > \[!CAUTION\]\
>  **Never use real banking credentials, PINs, passwords, or financial information with this application.**

---

 ## 🧪 Input Validation

 The implementation performs basic input validation.

 ### Validated Input

 - Menu selections
- Account numbers
- Duplicate account numbers
- Account names
- PIN length
- Positive monetary amounts
- Account balances
- Transaction limits
- Destination accounts
- Same-account transfers
- PIN verification
- Invalid numeric input

 The program also includes a basic input recovery function:

```
void cinbugfix(){
    cout << "Invalid Input" << endl;
    cin.clear();
    cin.ignore(1000, '\n');
}
```

 > \[!NOTE\]\
>  Input validation is functional but intentionally basic. More robust validation can be added in future versions.

---

 ## ⚠️ Known Limitations

 ### 💾 No Persistent Storage

 All account information disappears when the program exits.

 ### 🔢 Integer Account Numbers

 Account numbers use `int`, meaning leading zeros cannot be preserved.

 ### 🔑 Integer PINs

 PINs also use `int`, meaning leading zeros cannot be preserved.

 ### 💵 Integer Currency

 Money values use `int`.

 The application therefore works with whole-number amounts rather than decimal currency values.

 For example:

```
$100
```

 is supported, while:

```
$100.50
```

 is not supported by the current implementation.

 ### 🧪 No Automated Tests

 Testing is currently performed manually.

 ### 🔐 Basic Authentication

 Authentication is intentionally simple and is not suitable for real-world applications.

 ### 🧾 No Transaction History

 Deposits, withdrawals, and transfers are not recorded as historical transactions.

 ### 🌐 No Banking Integration

 The simulator does not connect to real banking systems.

 ### 🗃️ Global Account Array

 Accounts are stored using a global fixed-size array:

```
accounts account[1000];
```

 ### 🏗️ Procedural Architecture

 The current implementation uses standalone functions and a global account array rather than a fully object-oriented architecture.

---

 ## 🧪 Testing

 Automated tests have not yet been implemented.

 Testing is currently performed manually through the console application.

 ### Recommended Test Cases

 #### Account Creation

 - [ ] Create a Standard account
- [ ] Create a Business account
- [ ] Create a duplicate account number
- [ ] Enter a short account number
- [ ] Enter a long account number
- [ ] Enter a negative account number
- [ ] Enter an empty account name
- [ ] Enter an invalid PIN
- [ ] Create an account successfully

 #### Authentication

 - [ ] Login with valid credentials
- [ ] Login with an incorrect account number
- [ ] Login with an incorrect PIN
- [ ] Attempt login while already logged in
- [ ] Logout successfully

 #### Account Management

 - [ ] Change PIN
- [ ] Change account name
- [ ] Delete current account
- [ ] Cancel account deletion

 #### Banking

 - [ ] Check balance
- [ ] Deposit money
- [ ] Deposit zero
- [ ] Deposit a negative amount
- [ ] Exceed deposit limit
- [ ] Withdraw money
- [ ] Withdraw more than the balance
- [ ] Withdraw zero
- [ ] Withdraw a negative amount
- [ ] Exceed withdrawal limit
- [ ] Transfer money
- [ ] Transfer to an invalid account
- [ ] Transfer to the same account
- [ ] Transfer more than the balance
- [ ] Exceed transfer limit
- [ ] Cancel transfer
- [ ] Enter an incorrect PIN

 #### Administrator

 - [ ] Create administrator account
- [ ] Enter incorrect administrator setup PIN
- [ ] Attempt to create a second administrator
- [ ] Login as administrator
- [ ] View accounts
- [ ] Delete an account

---

 ## 🚀 Future Improvements

 ### 💾 Storage

 - [ ] Add persistent file storage
- [ ] Add database support
- [ ] Add account serialization
- [ ] Add automatic data loading
- [ ] Add automatic data saving

 ### 🔐 Security

 - [ ] Hash PINs
- [ ] Remove hard-coded administrator credentials
- [ ] Add secure authentication
- [ ] Add login attempt limits
- [ ] Add account lockout
- [ ] Add secure session management
- [ ] Add audit logs

 ### 🏗️ Architecture

 - [ ] Introduce an `Account` class
- [ ] Introduce an `ATM` class
- [ ] Introduce a `Bank` class
- [ ] Remove global account storage
- [ ] Improve separation of responsibilities
- [ ] Improve error handling

 ### 💳 Banking

 - [ ] Add transaction history
- [ ] Add transaction timestamps
- [ ] Add transaction IDs
- [ ] Add decimal currency support
- [ ] Add daily transaction limits
- [ ] Add account-specific limits
- [ ] Add account statements

 ### 🧪 Testing

 - [ ] Add unit tests
- [ ] Add integration tests
- [ ] Add automated test builds
- [ ] Add code coverage
- [ ] Add CI/CD

 ### 🎨 User Experience

 - [ ] Improve console interface
- [ ] Add clearer error messages
- [ ] Improve menu navigation
- [ ] Add colored terminal output
- [ ] Improve prompts
- [ ] Improve documentation

---

 ## 🤝 Contributing

 Contributions, suggestions, and bug reports are welcome.

 ### 🐛 Reporting Bugs

 Please include:

 - Description of the issue
- Steps to reproduce
- Expected behavior
- Actual behavior
- Compiler and operating system information
- Relevant error messages

 ### Example Bug Report

```
Bug Description:
The application does not correctly handle invalid input during a transfer.

Steps to Reproduce:
1. Login
2. Open the banking menu
3. Select transfer
4. Enter invalid input

Expected Behavior:
The application should reject the input and continue running.

Actual Behavior:
Describe what actually happened here.

Environment:
Compiler: GCC
C++ Standard: C++17
Operating System: Linux
```

---

 ## 📜 Development Guidelines

 When contributing:

 - Keep the code compatible with C++17 or newer.
- Validate user input.
- Keep functions focused on specific responsibilities.
- Avoid unnecessary global state where possible.
- Update the README when functionality changes.
- Test new functionality before submitting changes.
- Do not add real banking credentials or sensitive information.

---

 ## ⚖️ Disclaimer

 > \[!WARNING\]\
>  **This project is an educational ATM simulator and is not real banking software.**

 The application does **not**:

 - ❌ Connect to real banking systems
- ❌ Process real money
- ❌ Store real financial accounts
- ❌ Provide real banking services
- ❌ Provide secure financial authentication
- ❌ Guarantee the security of stored information

 Do not use:

 - Real banking credentials
- Real PINs
- Real passwords
- Real account numbers
- Real financial information

---

 ## 📄 License

 > \[!NOTE\]\
>  No license has currently been specified for this project.

---

 ## 🏷️ Version

 ### `v1.0.0 — Complete`

 The current version provides:

 - 🏦 Account management
- 🔐 Authentication
- 👤 Standard accounts
- 💼 Business accounts
- 👑 Administrator accounts
- 💰 Deposits
- 💸 Withdrawals
- 🔄 Transfers
- 🗑️ Account deletion
- 📋 Administrator account management
- 💵 Balance management

 Future releases can focus on:

 - 🔐 Security
- 💾 Persistent storage
- 🧪 Automated testing
- 🏗️ Better architecture
- 🛡️ Error handling
- 💳 Transaction management
- 🎨 User experience
- 📚 Documentation

---

 ## 📊 Project Status

```
┌──────────────────────────────────────────────┐
│              ATM SIMULATOR v1.0.0            │
├──────────────────────────────────────────────┤
│                                              │
│  Account Management       ██████████  100%   │
│  Authentication           ██████████  100%   │
│  Banking Operations       ██████████  100%   │
│  Administrator System     ██████████  100%   │
│  Persistent Storage       ░░░░░░░░░░    0%   │
│  Automated Testing        ░░░░░░░░░░    0%   │
│                                              │
└──────────────────────────────────────────────┘
```

---

 \<p align="center"\> \<strong\>🏧 ATM Simulator v1.0.0\</strong\> \<br\> \<sub\>Built with C++ · Educational Project\</sub\> \</p\> \<p align="center"\> ⭐ If you found this project useful, consider giving it a star! \</p\>
