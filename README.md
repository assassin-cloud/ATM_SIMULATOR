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
