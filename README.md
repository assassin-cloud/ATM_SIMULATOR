README.md

# 🏧 ATM Simulator

 \<p align="center"\> \<strong\>A console-based ATM simulator written in C++\</strong\> \<br\> Built for learning, experimentation, and practicing software development. \</p\> \<p align="center"\> \<img src="https://img.shields.io/badge/C%2B%2B-17%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++17+"\> \<img src="https://img.shields.io/badge/Status-Pre--Release-orange?style=for-the-badge" alt="Pre-release"\> \<img src="https://img.shields.io/badge/Platform-Cross--Platform-2ea44f?style=for-the-badge" alt="Cross-platform"\> \</p\> > \[!WARNING\]\
>  **Pre-release software:** This project is actively being developed. Bugs may exist and breaking changes are possible.

---

 ## ✨ Features

 | Feature | Status |
| --- | --- |
| 👤 Account registration | ✅ |
| 🔢 Unique account numbers | ✅ |
| 🔐 PIN authentication | ✅ |
| 🔑 Login / Logout | ✅ |
| 📋 Account information | ✅ |
| 🔄 Change PIN | ✅ |
| 👥 View accounts | ✅ |
| 🗑️ Delete accounts | ✅ |
| 💰 Balance checking | ✅ |
| 💵 Deposits | ✅ |
| 💸 Withdrawals | ✅ |
| 🔁 Transfers | 🚧 |
| 💾 Persistent storage | 🚧 |
| 🧪 Automated testing | 🚧 |

---

 ## 📂 Project Structure

```
assassin-cloud-atm_simulator/
├── README.md
└── atm-simulator/
    ├── main.cpp
    ├── function.cpp
    └── function.h
```

 | File | Purpose |
| --- | --- |
| `main.cpp` | Main program loop and menu handling |
| `function.cpp` | ATM and account functionality |
| `function.h` | Function declarations and interfaces |

---

 ## ⚙️ Requirements

 - **C++17** or newer
- GCC, Clang, or MSVC

---

 ## 🚀 Installation

 ### Clone

```
git clone <repository-url>
cd assassin-cloud-atm_simulator/atm-simulator
```

 ### Build

 **Standard build**

```
g++ main.cpp function.cpp -std=c++17 -o atm-simulator
```

 **Debug build**

```
g++ main.cpp function.cpp \
    -std=c++17 \
    -Wall \
    -Wextra \
    -Wpedantic \
    -g \
    -o atm-simulator
```

 **Sanitizer build**

```
g++ main.cpp function.cpp \
    -std=c++17 \
    -Wall \
    -Wextra \
    -Wpedantic \
    -g \
    -fsanitize=address,undefined \
    -o atm-simulator
```

---

 ## ▶️ Run

 ### Linux / macOS

```
./atm-simulator
```

 ### Windows

```
.\atm-simulator.exe
```

---

 ## 🖥️ Main Menu

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

---

 ## 💳 Account Management

 ### Register

 Create an account using:

 - Account number
- Name
- PIN

 New accounts currently start with a balance of **$7000**.

 ### Login

 Authenticate using your:

 - Account number
- PIN

 ### Account Information

 Once logged in:

```
===================
   ACCOUNT INFO
===================

Account Number: ...
Account Name: ...

1. Change Pin
2. Log out
3. Exit
```

 ### Account Management

 The application currently supports:

 - Viewing registered accounts
- Deleting accounts
- Changing PINs
- Logging in and out

---

 ## 💰 Transactions

 Logged-in users can access:

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

 ### Implemented

 - Balance checking
- Deposits
- Withdrawals

 ### Coming Soon

 - Transfers
- Transaction history
- Improved transaction validation

---

 ## ⚠️ Limitations

 | Limitation | Current State |
| --- | --- |
| Maximum accounts | **5** |
| Persistent storage | ❌ |
| Database | ❌ |
| Transfers | ❌ |
| Transaction history | ❌ |
| Automated tests | ❌ |
| PIN hashing | ❌ |
| Encryption | ❌ |

Account data currently exists **only in memory** and is lost when the application exits.

---

 ## 🔐 Security

 This is an **educational project**, not a real banking application.

 PINs are currently stored directly in memory and are **not hashed or encrypted**.

 The project does not implement production-grade:

 - Authentication security
- PIN hashing
- Encryption
- Account locking
- Transaction security
- Audit logging

 > **Never use real banking credentials, PINs, passwords, or financial information with this application.**

---

 ## 🧪 Testing

 Automated testing is currently being planned.

 Development builds can use compiler warnings and sanitizers:

```
g++ main.cpp function.cpp \
    -std=c++17 \
    -Wall \
    -Wextra \
    -Wpedantic \
    -g \
    -fsanitize=address,undefined \
    -o atm-simulator
```

 Planned testing:

 - [ ] Unit tests
- [ ] Integration tests
- [ ] Automated input tests
- [ ] Regression tests
- [ ] Memory-safety testing
- [ ] CI testing

---

 ## 🛣️ Roadmap

 ### Account Management

 - [x] Account registration
- [x] Unique account numbers
- [x] Login / Logout
- [x] Account information
- [x] Change PIN
- [x] Account deletion
- [ ] Refactor account management

 ### Transactions

 - [x] Balance checking
- [x] Deposits
- [x] Withdrawals
- [ ] Transfers
- [ ] Transaction history

 ### Storage

 - [ ] File-based persistence
- [ ] Save / load accounts
- [ ] Database support

 ### Security

 - [ ] PIN hashing
- [ ] Secure authentication
- [ ] Failed-login limits
- [ ] Improved input validation

 ### Testing & Quality

 - [ ] Unit testing
- [ ] Integration testing
- [ ] Regression testing
- [ ] CI pipeline
- [ ] Improve error handling
- [ ] Reduce duplicated code
- [ ] Improve project architecture

---

 ## 🧠 Learning Goals

 This project is being developed to practice:

 - C++ fundamentals
- Functions
- Arrays and data structures
- Header/source organization
- Input validation
- Error handling
- Debugging
- Memory safety
- Testing
- Software development workflows

---

 ## 🤝 Contributing

 Contributions, suggestions, and bug reports are welcome.

 For bug reports, include:

 - Description
- Steps to reproduce
- Expected behavior
- Actual behavior
- Operating system
- Compiler and version
- Relevant error messages

---

 ## 📜 Disclaimer

 This project is an **educational ATM simulator**.

 It does not connect to real banking systems, process real money, or perform real financial transactions.

 **Do not use real financial information with this application.**

---

 ## 📄 License

 No license has currently been specified.

---

 \<p align="center"\> \<strong\>🏧 ATM Simulator\</strong\> \<br\> \<sub\>Pre-release · Active Development · Educational Project · Not Production Ready\</sub\> \</p\>
