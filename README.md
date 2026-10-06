README.md

# ATM Simulator

 \<p align="center"\> \<strong\>A console-based ATM simulator written in C++\</strong\> \<br\> Built for learning, experimentation, and practicing C++ software development. \</p\> \<p align="center"\> \<img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+"\> \<img src="https://img.shields.io/badge/Version-1.0.0-2ea44e?style=for-the-badge" alt="Version 1.0.0"\> \<img src="https://img.shields.io/badge/Status-Complete-22c55e?style=for-the-badge" alt="Complete"\> \<img src="https://img.shields.io/badge/Platform-Cross--Platform-6f42c1?style=for-the-badge" alt="Cross-platform"\> \</p\> > \[!NOTE\]\
>  **v1.0.0 is complete.** The current release provides the core ATM, account-management, authentication, administrator, and banking functionality. Future versions may improve security, persistence, testing, validation, architecture, and usability.

---

 ## 📖 Overview

 **ATM Simulator** is a console-based application written in **C++** that simulates basic ATM and account-management functionality.

 The application allows users to:

 - 🏦 Create standard and business accounts
- 🔐 Log in using an account number and PIN
- 👤 View and modify account information
- 💰 Check account balances
- 💵 Deposit money
- 💸 Withdraw money
- 🔄 Transfer money between accounts
- 🔑 Change account PINs
- 📝 Change account names
- 🗑️ Delete accounts
- 👑 Create and use an administrator account
- 📋 View registered accounts as an administrator

 This project is intended for **educational purposes** and does not connect to real banking systems or process real financial transactions.

---

 ## ✨ Features

 ### 👤 Account Management

 - Account registration
- Standard accounts
- Business accounts
- Unique account numbers
- Account holder names
- 4–6 digit PINs
- Account name changes
- PIN changes
- Account deletion
- Up to **1,000 accounts** in memory

 ### 🔐 Authentication

 - Account-number and PIN-based login
- Logout functionality
- PIN verification for sensitive operations
- Prevention of multiple simultaneous logins

 ### 💳 Banking Operations

 - Check balance
- Deposit money
- Withdraw money
- Transfer money
- Destination account verification
- Same-account transfer prevention
- PIN confirmation for financial operations
- Per-transaction limits

 ### 👑 Administrator

 - Administrator account creation
- Administrator authentication
- View registered accounts
- Delete accounts
- Single administrator account restriction

---

 ## 🏦 Account Types

 The application currently supports three account types:

 | Account Type | Starting Balance | Transaction Limit |
| --- | --- | --- |
| 👤 Standard | `$7,000` | `$10,000` |
| 💼 Business | `$7,000` | `$50,000` |
| 👑 Admin | `$7,000` | `$100,000` |

The transaction limit applies to individual:

 - Deposits
- Withdrawals
- Transfers

---

 ## 📊 Current Functionality

 | Feature | Status |
| --- | --- |
| Account registration | ✅ Implemented |
| Standard accounts | ✅ Implemented |
| Business accounts | ✅ Implemented |
| Unique account numbers | ✅ Implemented |
| PIN authentication | ✅ Implemented |
| Login / Logout | ✅ Implemented |
| Account information | ✅ Implemented |
| Change account name | ✅ Implemented |
| Change PIN | ✅ Implemented |
| Account deletion | ✅ Implemented |
| Balance checking | ✅ Implemented |
| Deposits | ✅ Implemented |
| Withdrawals | ✅ Implemented |
| Transfers | ✅ Implemented |
| Administrator account | ✅ Implemented |
| Administrator account listing | ✅ Implemented |
| Administrator account deletion | ✅ Implemented |
| Persistent storage | ❌ Not implemented |
| Automated testing | ❌ Not implemented |
| Transaction history | ❌ Not implemented |

---

 ## 📁 Project Structure

```
assassin-cloud-atm_simulator/
├── README.md
└── atm-simulator/
    ├── main.cpp
    ├── function.cpp
    └── function.h
```

 | File | Description |
| --- | --- |
| `main.cpp` | Main application loop, menus, login state, and program flow |
| `function.cpp` | ATM functionality, account management, authentication, and banking operations |
| `function.h` | Function declarations used by the application |

---

 ## ⚙️ Requirements

 - C++ compiler
- **C++17 or newer** recommended

 ### Supported Compilers

 - GCC
- Clang
- MSVC

---

 ## 📥 Installation

 ### 1\. Clone the Repository

```
git clone <repository-url>
```

 ### 2\. Navigate to the Project

```
cd assassin-cloud-atm_simulator/atm-simulator
```

---

 ## 🔨 Build

 ### Standard Build

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 ### Debug Build

```
g++ main.cpp function.cpp -std=c++17 -Wall -Wextra -g -o atm-simulator
```

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

 # 🖥️ Usage

 When the application starts, the main menu is displayed:

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

 Some options require an authenticated account.

---

 ## 📝 Creating an Account

 Select:

```
3. Register(create a account)
```

 You will first select an account type:

```
Please select account type:
1. Standard    2. Business
```

 You must then provide:

 1. A unique account number
2. Your name
3. A PIN

 New accounts start with a balance of:

```
$7000
```

---

 ## 🔢 Account Number Rules

 Account numbers:

 - Must be positive
- Must contain exactly **6 digits**
- Must be unique
- Cannot contain letters
- Cannot contain special characters

 ### ⚠️ Leading Zeros

 Account numbers are stored as integers.

 Therefore, leading zeros are removed automatically.

 For example:

```
012345
```

 becomes:

```
12345
```

 This means `012345` will **not** satisfy the 6-digit requirement.

---

 ## 🔑 PIN Rules

 PINs:

 - Must contain **4–6 digits**
- Must be positive
- Cannot contain letters
- Are stored as integers

 ### ⚠️ Leading Zeros

 PINs are also stored as integers.

 For example:

```
0123
```

 becomes:

```
123
```

 Therefore, it does not satisfy the minimum 4-digit requirement.

---

 # 🔐 Login

 Select:

```
1. Login
```

 Enter:

 1. Account number
2. PIN

 If the credentials match an existing account, the user is logged in.

 Only one account can be logged in at a time.

---

 # 👤 Account Information

 After logging in, select:

```
2. Account info/settings
```

 The account information menu provides:

```
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
```

 ### Available Operations

 - 🔑 Change PIN
- 📝 Change account name
- 🚪 Log out
- 🗑️ Delete account
- ↩️ Return to the main menu

 PIN verification is required for sensitive account operations.

---

 # 💰 Banking Operations

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

 The current account balance will be displayed.

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

 The application checks that:

 - The amount is greater than zero
- The amount does not exceed the account transaction limit
- The correct PIN is entered

---

 ## 💸 Withdraw Money

 Select:

```
3. Withdraw money
```

 The application checks that:

 - The amount is greater than zero
- The amount does not exceed the current balance
- The amount does not exceed the account transaction limit
- The correct PIN is entered

---

 ## 🔄 Transfer Money

 Select:

```
4. Transfer money
```

 The transfer process:

 1. Enter the destination account number.
2. Verify that the destination account exists.
3. Prevent transfers to the same account.
4. Display the destination account information.
5. Confirm the destination account.
6. Enter the transfer amount.
7. Check the available balance.
8. Check the transaction limit.
9. Confirm the transfer.
10. Enter the PIN.
11. Complete the transfer.

 Example:

```
Account found:

Account Number: 123456
Name: John

Is this correct account?
type(y) to confirm, (n) if it's wrong or (q) to cancel:
```

---

 # 👑 Administrator Account

 The application contains a basic administrator system.

 An administrator account can be created through:

```
6. Register a Admin account
```

 The application requires a special setup PIN before creating the administrator account.

 > \[!WARNING\]\
>  Administrator credentials and the administrator setup PIN are hard-coded in the current source code. This is acceptable for the educational nature of the project but is **not secure for real-world software**.

 Only **one administrator account** can exist.

 ### Current Administrator Account

 | Property | Value |
| --- | --- |
| Account Type | `Admin` |
| Account Number | `11111111` |
| Name | `Admin` |
| Starting Balance | `$7,000` |
| Transaction Limit | `$100,000` |

---

 ## 🛡️ Administrator Features

 When logged in as an administrator, option:

```
4. See all accounts on the device
```

 can be used.

 The administrator can:

 - 📋 View registered accounts
- 🗑️ Delete accounts

 The account list displays:

```
===============
   ACCOUNTS
===============

Account 1
Account Number: 123456
Name: John
```

 The administrator then has the option to delete an account or exit.

---

 # 📦 Account Capacity

 Accounts are stored in a fixed-size array:

```
accounts account[1000];
```

 Therefore, the current implementation supports a maximum of:

 > **1,000 accounts**

 No database or dynamic persistent storage is currently used.

---

 # 💾 Data Storage

 All account information is stored **only in memory**.

 When the program exits, all data is lost.

 This includes:

 - Account numbers
- Account names
- PINs
- Account types
- Balances
- Account changes

 There is currently no:

 - ❌ File storage
- ❌ Database
- ❌ Cloud storage
- ❌ Serialization
- ❌ Data recovery

---

 # 🔒 Security

 This project is an **educational ATM simulator** and should not be used for real banking information.

 The current implementation has several security limitations.

 ### Current Security Limitations

 - PINs are stored directly in memory.
- PINs are not hashed.
- PINs are not encrypted.
- Administrator credentials are hard-coded.
- Administrator setup credentials are hard-coded.
- There is no login attempt limit.
- There is no account lockout.
- There is no encryption.
- There is no secure persistent storage.
- There is no audit logging.
- There is no transaction history.

 > \[!CAUTION\]\
>  **Do not use real banking credentials, PINs, passwords, or financial information with this application.**

---

 # 🧪 Input Validation

 The application currently performs basic validation for:

 - Menu choices
- Account numbers
- Duplicate account numbers
- Account names
- PIN length
- Positive monetary amounts
- Available account balance
- Transaction limits
- Destination account existence
- Same-account transfers
- Incorrect PINs
- Invalid numeric input

 Invalid numeric input is handled through a basic input recovery function.

 Input validation can still be improved substantially in future versions.

---

 # ⚠️ Known Limitations

 The current implementation has several limitations.

 ### 💾 No Persistence

 All data is lost when the application exits.

 ### 🔢 Integer Account Numbers

 Account numbers are stored as integers, so leading zeros cannot be preserved.

 ### 🔑 Integer PINs

 PINs are stored as integers, so leading zeros cannot be preserved.

 ### 💵 Integer Currency

 Money values use `int`, so decimal amounts such as:

```
$25.50
```

 are not supported.

 ### 🌍 No Real Banking Integration

 The application does not communicate with banks or financial services.

 ### 🧪 No Automated Tests

 Testing is currently performed manually through the console.

 ### 🔐 Basic Authentication

 Authentication is intentionally simple and is not suitable for real-world financial applications.

 ### 🌐 No Transaction History

 The application does not record previous deposits, withdrawals, or transfers.

 ### 🗃️ Global Account Storage

 Account information is currently managed through a global fixed-size array.

 ### 🏗️ Basic Architecture

 The project currently uses procedural functions rather than a fully object-oriented architecture.

---

 # 🧪 Testing

 Automated tests have not yet been added.

 Testing is currently performed manually through the console.

 Important test scenarios include:

 - [ ] Create a standard account
- [ ] Create a business account
- [ ] Create a duplicate account number
- [ ] Enter an invalid account number
- [ ] Enter an invalid PIN
- [ ] Login with valid credentials
- [ ] Login with invalid credentials
- [ ] Change PIN
- [ ] Change account name
- [ ] Delete account
- [ ] Check balance
- [ ] Deposit money
- [ ] Withdraw money
- [ ] Attempt to withdraw more than the balance
- [ ] Attempt to exceed transaction limits
- [ ] Transfer money
- [ ] Transfer to an invalid account
- [ ] Transfer to the same account
- [ ] Cancel a transfer
- [ ] Create administrator account
- [ ] Attempt to create a second administrator
- [ ] View accounts as administrator
- [ ] Delete an account as administrator
- [ ] Enter invalid menu input

---

 # 🚀 Future Improvements

 Planned improvements include:

 - [ ] Add persistent file storage
- [ ] Add database support
- [ ] Add automated unit tests
- [ ] Improve input validation
- [ ] Improve error handling
- [ ] Introduce an `Account` class
- [ ] Introduce an `ATM` or `Bank` class
- [ ] Remove global account storage
- [ ] Improve authentication
- [ ] Hash PINs
- [ ] Remove hard-coded administrator credentials
- [ ] Add login attempt limits
- [ ] Add account locking
- [ ] Add transaction history
- [ ] Add transaction timestamps
- [ ] Add decimal currency support
- [ ] Add better transaction management
- [ ] Improve console interface
- [ ] Improve documentation
- [ ] Add continuous integration
- [ ] Add code coverage
- [ ] Add a proper testing framework

---

 # 🤝 Contributing

 Contributions, suggestions, and bug reports are welcome.

 ## 🐛 Bug Reports

 When reporting a bug, include:

 - Description of the issue
- Steps to reproduce it
- Expected behavior
- Actual behavior
- Compiler information
- Operating system
- Relevant error messages

 Example:

```
### Bug Description

The application crashes after entering invalid input during a transfer.

### Steps to Reproduce

1. Login
2. Open banking menu
3. Select transfer
4. Enter invalid input

### Expected Behavior

The application should display an error and continue running.

### Actual Behavior

The application terminates unexpectedly.
```

---

 # ⚖️ Disclaimer

 This project is an **educational ATM simulator**.

 It does **not**:

 - Connect to real banking systems
- Process real money
- Store real financial accounts
- Provide real banking services
- Provide secure financial authentication

 > \[!WARNING\]\
>  **Never use real banking credentials, PINs, passwords, or financial information with this application.**

---

 # 📄 License

 No license has currently been specified for this project.

---

 # 🏷️ Version

 **v1.0.0 — Complete**

 The first version of **ATM Simulator** provides the core account-management, authentication, administrator, and banking functionality implemented in the current source code.

 Future releases can focus on:

 - 🔐 Security
- 💾 Persistent storage
- 🧪 Automated testing
- 🏗️ Code architecture
- 🛡️ Error handling
- 💳 Transaction management
- 🎨 User experience
- 📚 Documentation

---

 \<p align="center"\> \<strong\>ATM Simulator v1.0.0\</strong\> \<br\> \<sub\>Built with C++ · Educational Project\</sub\> \</p\>
