# 🏧 ATM Simulator

 \<p align="center"\> \<strong\>A console-based ATM simulator written in C++\</strong\> \<br\> Built for learning, experimentation, and practicing C++ software development. \</p\> \<p align="center"\> \
 \
 \

 \</p\> > \[!NOTE\]\
>  **v1.0.0 is complete.** The current release provides the core ATM, account-management, authentication, administrator, and banking functionality. Future versions may improve security, persistence, testing, validation, architecture, and usability.

 > \[!WARNING\]\
>  This is an **educational ATM simulator**. It does not connect to real banking systems and must not be used with real banking credentials, PINs, passwords, or financial information.

---

 # 📑 Table of Contents

 - 🏧 ATM Simulator
- 📖 Overview
- ✨ Features
- 🏦 Account Types
- 📊 Current Functionality
- 📁 Project Structure
- ⚙️ Requirements
- 📥 Installation
- 🔨 Build
- ▶️ Run
- 🖥️ Usage
- 📝 Creating an Account
- 🔢 Account Number Rules
- 🔑 PIN Rules
- 🔐 Login
- 👤 Account Information
- 💰 Banking Operations
- 👑 Administrator Account
- 📦 Account Capacity
- 💾 Data Storage
- 🔒 Security
- 🧪 Input Validation
- ⚠️ Known Limitations
- 🧪 Testing
- 🚀 Future Improvements
- 🤝 Contributing
- ⚖️ Disclaimer
- 📄 License
- 🏷️ Version

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

 > \[!TIP\]\
>  The project is designed primarily as a **learning and experimentation project**, rather than a production banking application.

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
| --- | --- | --- |
| 👤 **Standard** | `$7,000` | `$10,000` |
| 💼 **Business** | `$7,000` | `$50,000` |
| 👑 **Admin** | `$7,000` | `$100,000` |

> \[!NOTE\]\
>  The transaction limit applies to individual deposits, withdrawals, and transfers.

---

 # 📊 Current Functionality

 | Feature | Status |
| --- | --- |
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

```
assassin-cloud-atm_simulator/
│
├── 📄 README.md
│
└── 📁 atm-simulator/
    │
    ├── 📄 main.cpp
    ├── 📄 function.cpp
    └── 📄 function.h
```

 ## 📄 File Description

 | File | Description |
| --- | --- |
| `main.cpp` | Main application loop, menus, login state, and program flow |
| `function.cpp` | ATM functionality, account management, authentication, and banking operations |
| `function.h` | Function declarations used by the application |
| `README.md` | Project documentation |

---

 # ⚙️ Requirements

 ## 💻 Software

 - C++ compiler
- C++17 or newer

 ## 🛠️ Supported Compilers

 - **GCC**
- **Clang**
- **MSVC**

 > \[!IMPORTANT\]\
>  C++17 is recommended because the current implementation uses modern C++ features such as uniform initialization.

---

 # 📥 Installation

 ## 1️⃣ Clone the Repository

```
git clone <repository-url>
```

 ## 2️⃣ Enter the Project Directory

```
cd assassin-cloud-atm_simulator/atm-simulator
```

---

 # 🔨 Build

 ## 🟢 Standard Build

 ### GCC / Clang

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 ## 🐛 Debug Build

```
g++ main.cpp function.cpp -std=c++17 -Wall -Wextra -g -o atm-simulator
```

 ### Build Options

 | Option | Purpose |
| --- | --- |
| `-std=c++17` | Enable C++17 |
| `-Wall` | Enable common warnings |
| `-Wextra` | Enable additional warnings |
| `-g` | Add debugging information |
| `-o atm-simulator` | Name the output executable |

> \[!TIP\]\
>  For development, the debug build is recommended because compiler warnings can help identify potential problems in the code.

---

 # ▶️ Run

 ## 🐧 Linux / 🍎 macOS

```
./atm-simulator
```

 ## 🪟 Windows

```
.\atm-simulator.exe
```

---

 # 🖥️ Usage

 When the program starts, the following main menu is displayed:

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

 > \[!NOTE\]\
>  Several menu options require a user to be logged in first.

---

 # 📝 Creating an Account

 Select:

```
3. Register(create a account)
```

 The application asks you to select an account type:

```
Please select account type:

1. Standard
2. Business
```

 After selecting the account type, you must provide:

 - 🔢 Account number
- 👤 Account name
- 🔑 PIN

 New accounts start with:

```
$7,000
```

---

 # 🔢 Account Number Rules

 Account numbers must:

 - ✅ Be positive
- ✅ Contain exactly **6 digits**
- ✅ Be unique
- ❌ Not contain letters
- ❌ Not contain special characters
- ❌ Not be zero or negative

 ## ⚠️ Leading Zeros

 Account numbers are stored using an `int`.

 This means leading zeros are automatically removed.

 For example:

```
012345
```

 becomes:

```
12345
```

 Therefore:

```
012345
```

 is **not accepted** as a valid 6-digit account number.

 > \[!WARNING\]\
>  Account numbers are not stored as strings, so leading zeros cannot be preserved.

---

 # 🔑 PIN Rules

 PINs must:

 - ✅ Contain between **4 and 6 digits**
- ✅ Be positive
- ❌ Not contain letters
- ❌ Not be zero
- ❌ Not contain special characters

 ## ⚠️ Leading Zeros

 PINs are stored using an `int`.

 For example:

```
0123
```

 becomes:

```
123
```

 Therefore, it does not satisfy the minimum 4-digit requirement.

 > \[!WARNING\]\
>  PINs are stored as integers and are not hashed or encrypted.

---

 # 🔐 Login

 Select:

```
1. Login
```

 The application asks for:

```
Account Number:
PIN:
```

 If both credentials match an existing account:

```
Login attempt was successfull
```

 The application stores the logged-in account's:

 - Account number
- Name
- PIN
- Account type
- Account index

 > \[!NOTE\]\
>  Only one account can be logged in at a time.

---

 # 👤 Account Information

 After logging in, select:

```
2. Account info/settings
```

 The account information menu looks like:

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

 ## Available Operations

 ### 🔑 Change PIN

 The current PIN must be entered before setting a new PIN.

 The new PIN must follow the normal PIN rules.

 ### 📝 Change Account Name

 The user can provide a new account name.

 The name:

 - Cannot be empty
- Cannot be identical to the current name
- Requires PIN verification

 ### 🚪 Log Out

 Logs the current account out and clears the active login information.

 ### 🗑️ Delete Account

 The current PIN is required before deleting the account.

 The user must then confirm the deletion.

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

 # 💵 Check Balance

 Select:

```
1. Check your balance
```

 The application displays the current balance.

 Example:

```
Balance: $7000
```

---

 # 💰 Deposit Money

 Select:

```
2. Deposit money
```

 The application asks for the amount.

 The following checks are performed:

 - Amount must be greater than `0`
- Amount cannot exceed the account transaction limit
- Correct PIN must be provided

 Example:

```
Input the amount you wanna deposit:
```

 After a successful deposit:

```
Amount successfully deposited
Balance: $9000
```

---

 # 💸 Withdraw Money

 Select:

```
3. Withdraw money
```

 The application checks:

 - Amount must be greater than `0`
- Amount cannot exceed the current balance
- Amount cannot exceed the transaction limit
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

 # 🔄 Transfer Money

 Select:

```
4. Transfer money
```

 The application requests the destination account number.

 ## Transfer Process

```
1. Enter destination account number
        ↓
2. Find destination account
        ↓
3. Display destination information
        ↓
4. Confirm destination
        ↓
5. Enter transfer amount
        ↓
6. Check balance
        ↓
7. Check transaction limit
        ↓
8. Confirm transfer
        ↓
9. Enter PIN
        ↓
10. Complete transfer
```

 The application prevents:

 - ❌ Transfers to non-existent accounts
- ❌ Transfers to the same account
- ❌ Transfers greater than the current balance
- ❌ Transfers above the transaction limit
- ❌ Transfers with an incorrect PIN

---

 # 👑 Administrator Account

 The application contains a basic administrator system.

 An administrator account can be created using:

```
6. Register a Admin account
```

 A special setup PIN is required before the administrator account can be created.

 > \[!WARNING\]\
>  The administrator setup credentials are **hard-coded in the source code**. This is not secure and is intended only for this educational project.

---

 # 🛡️ Administrator Details

 The current administrator account uses:

 | Property | Value |
| --- | --- |
| Account Type | `Admin` |
| Account Number | `11111111` |
| Account Name | `Admin` |
| Starting Balance | `$7,000` |
| Transaction Limit | `$100,000` |

Only one administrator account can exist.

 If an administrator already exists, another administrator cannot be created.

---

 # 📋 Administrator Features

 When an administrator is logged in, option:

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

 The administrator can then choose:

```
1. Delete account
2. Exit
```

---

 # 📦 Account Capacity

 The application stores accounts in a fixed-size array:

```
accounts account[1000];
```

 Therefore, the current implementation supports a maximum of:

 > **1,000 accounts**

 > \[!NOTE\]\
>  This is an in-memory limit. There is currently no database or persistent account storage.

---

 # 💾 Data Storage

 The application currently stores all account information **in memory**.

 When the application closes, all account information is lost.

 ### Data Lost on Exit

 - 🔢 Account numbers
- 👤 Account names
- 🔑 PINs
- 🏦 Account types
- 💰 Balances
- 📊 Account changes

 ### Current Storage

 | Storage Method | Status |
| --- | --- |
| Memory | ✅ Used |
| Text files | ❌ Not implemented |
| Binary files | ❌ Not implemented |
| Database | ❌ Not implemented |
| Cloud storage | ❌ Not implemented |

> \[!IMPORTANT\]\
>  Restarting the application starts with an empty account list.

---

 # 🔒 Security

 This project should **not** be considered secure banking software.

 It is designed only as an educational C++ project.

 ## Current Security Limitations

 - 🔴 PINs are stored directly in memory
- 🔴 PINs are not hashed
- 🔴 PINs are not encrypted
- 🔴 Administrator credentials are hard-coded
- 🔴 Administrator setup PIN is hard-coded
- 🔴 No login attempt limit
- 🔴 No account lockout
- 🔴 No encryption
- 🔴 No secure persistent storage
- 🔴 No audit logging
- 🔴 No transaction history
- 🔴 No secure session management

 > \[!CAUTION\]\
>  **Never use a real banking PIN, password, account number, or financial information with this application.**

---

 # 🧪 Input Validation

 The current implementation performs basic input validation.

 ## Validated Input

 - ✅ Menu selections
- ✅ Account numbers
- ✅ Duplicate account numbers
- ✅ Account names
- ✅ PIN length
- ✅ Positive monetary amounts
- ✅ Account balances
- ✅ Transaction limits
- ✅ Destination accounts
- ✅ Same-account transfers
- ✅ PIN verification
- ✅ Invalid numeric input

 The application also contains a basic input-recovery function for invalid numeric input.

 > \[!NOTE\]\
>  Input validation is functional but remains relatively basic and can be improved in future releases.

---

 # ⚠️ Known Limitations

 ## 💾 No Persistent Storage

 Accounts are deleted from memory when the program exits.

 ## 🔢 Integer Account Numbers

 Account numbers use `int`, so leading zeros cannot be preserved.

 ## 🔑 Integer PINs

 PINs use `int`, so leading zeros cannot be preserved.

 ## 💵 Integer Currency

 Money values use `int`.

 The application therefore does not support decimal values such as:

```
$25.50
```

 ## 🧪 No Automated Tests

 Testing is currently performed manually.

 ## 🔐 Basic Authentication

 The authentication system is intentionally simple.

 ## 🧾 No Transaction History

 The application does not store previous transactions.

 ## 🌐 No Banking Integration

 The simulator does not connect to real banks or financial services.

 ## 🗃️ Global Account Array

 Accounts are stored using a global fixed-size array:

```
accounts account[1000];
```

 ## 🏗️ Procedural Architecture

 Most functionality is implemented using standalone functions rather than dedicated classes.

---

 # 🧪 Testing

 Automated tests have not yet been implemented.

 Testing is currently performed manually through the console.

 ## ✅ Recommended Test Cases

 ### Account Creation

 - [ ] Create a standard account
- [ ] Create a business account
- [ ] Create duplicate account number
- [ ] Enter a short account number
- [ ] Enter a long account number
- [ ] Enter a negative account number
- [ ] Enter an empty account name
- [ ] Enter an invalid PIN
- [ ] Create an account successfully

 ### Authentication

 - [ ] Login with valid credentials
- [ ] Login with incorrect account number
- [ ] Login with incorrect PIN
- [ ] Attempt login while already logged in
- [ ] Logout successfully

 ### Account Management

 - [ ] Change PIN
- [ ] Change account name
- [ ] Delete current account
- [ ] Cancel account deletion

 ### Banking

 - [ ] Check balance
- [ ] Deposit money
- [ ] Deposit zero
- [ ] Deposit negative amount
- [ ] Exceed deposit limit
- [ ] Withdraw money
- [ ] Withdraw more than balance
- [ ] Withdraw zero
- [ ] Withdraw negative amount
- [ ] Exceed withdrawal limit
- [ ] Transfer money
- [ ] Transfer to invalid account
- [ ] Transfer to same account
- [ ] Transfer more than balance
- [ ] Exceed transfer limit
- [ ] Cancel transfer
- [ ] Enter incorrect PIN

 ### Administrator

 - [ ] Create administrator account
- [ ] Enter incorrect administrator setup PIN
- [ ] Attempt to create second administrator
- [ ] Login as administrator
- [ ] View accounts
- [ ] Delete an account

---

 # 🚀 Future Improvements

 ## 💾 Storage

 - [ ] Add persistent file storage
- [ ] Add database support
- [ ] Add account serialization
- [ ] Add automatic data loading
- [ ] Add automatic data saving

 ## 🔐 Security

 - [ ] Hash PINs
- [ ] Remove hard-coded administrator credentials
- [ ] Add secure authentication
- [ ] Add login attempt limits
- [ ] Add account lockout
- [ ] Add secure session management
- [ ] Add audit logs

 ## 🏗️ Architecture

 - [ ] Introduce an `Account` class
- [ ] Introduce an `ATM` class
- [ ] Introduce a `Bank` class
- [ ] Remove global account storage
- [ ] Improve separation of responsibilities
- [ ] Improve error handling

 ## 💳 Banking

 - [ ] Add transaction history
- [ ] Add transaction timestamps
- [ ] Add transaction IDs
- [ ] Add decimal currency support
- [ ] Add daily transaction limits
- [ ] Add account-specific limits
- [ ] Add account statements

 ## 🧪 Testing

 - [ ] Add unit tests
- [ ] Add integration tests
- [ ] Add automated test builds
- [ ] Add code coverage
- [ ] Add CI/CD

 ## 🎨 User Experience

 - [ ] Improve console interface
- [ ] Add better error messages
- [ ] Improve menu navigation
- [ ] Add colored terminal output
- [ ] Add clearer prompts
- [ ] Improve documentation

---

 # 🤝 Contributing

 Contributions, suggestions, and bug reports are welcome.

 ## 🐛 Reporting Bugs

 Please include:

 - Description of the issue
- Steps to reproduce
- Expected behavior
- Actual behavior
- Compiler
- Operating system
- Error messages

 ### Example

```
### Bug Description

The application does not correctly handle invalid input during a transfer.

### Steps to Reproduce

1. Login
2. Open the banking menu
3. Select transfer
4. Enter invalid input

### Expected Behavior

The application should reject the input and continue running.

### Actual Behavior

The application exits unexpectedly.
```

---

 # 📜 Development Guidelines

 When contributing:

 - Keep the code compatible with C++17.
- Avoid unnecessary global state where possible.
- Validate user input.
- Keep functions focused on one responsibility.
- Update the README when functionality changes.
- Test new features before submitting changes.
- Do not add real banking credentials or sensitive information.

---

 # ⚖️ Disclaimer

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

 # 📄 License

 > \[!NOTE\]\
>  No license has currently been specified for this project.

---

 # 🏷️ Version

 ## `v1.0.0 — Complete`

 The first version of **ATM Simulator** provides the core:

 - 🏦 Account management
- 🔐 Authentication
- 👤 User accounts
- 💼 Business accounts
- 👑 Administrator accounts
- 💰 Deposits
- 💸 Withdrawals
- 🔄 Transfers
- 🗑️ Account deletion
- 📋 Account management

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
