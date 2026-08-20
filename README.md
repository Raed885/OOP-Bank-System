# OOP Bank System

A console-based banking management system built in **C++** to practice object-oriented programming and turn core programming concepts into a complete, menu-driven application.

> **Status:** Educational project
>
> All data included in this repository is fictional. This application is not intended for real financial use.

## Overview

The system models a small bank environment with separate classes for people, users, bank clients, screens, validation, and file-based persistence.

The project was built independently as a practical OOP project, with an emphasis on separating responsibilities instead of keeping the entire application inside procedural functions.

## Features

- User authentication and login auditing
- User management
- Client management
- Add, list, find, update, and delete clients
- Add, list, find, update, and delete users
- Deposit and withdrawal operations
- Client balance and total-balance reporting
- Permission-based user operations
- Input validation
- File-based data persistence
- Reusable date, string, and utility classes

## Architecture

```text
OOP-Bank-System/
│
├── Domain
│   ├── clsPerson.h
│   ├── clsUser.h
│   └── clsBankClient.h
│
├── Screens
│   ├── clsLoginScreen.h
│   ├── clsMainScreen.h
│   ├── clsManageUsersScreen.h
│   ├── clsClientListScreen.h
│   ├── clsAddNewClientScreen.h
│   ├── clsUpdateClientScreen.h
│   ├── clsDeleteClientScreen.h
│   ├── clsDepositScreen.h
│   ├── clsWithdrawScreen.h
│   └── ...
│
├── Utilities
│   ├── clsDate.h
│   ├── clsString.h
│   ├── clsInputValidate.h
│   └── clsUtil.h
│
├── Data
│   ├── Users.txt
│   ├── Clients.txt
│   └── LoginRegister.txt
│
└── README.md
```

The current repository keeps these files at the project root for compatibility with the existing Visual Studio project. The structure above represents the intended logical organization of the code.

## OOP Concepts Practiced

- **Encapsulation** — keeping data and related operations together inside classes.
- **Inheritance** — deriving specialized classes such as users and bank clients from common person functionality.
- **Abstraction** — exposing high-level operations while hiding implementation details.
- **Composition and reuse** — building screens and utilities from reusable components.

## Data Flow

```text
User
  ↓
Login Screen
  ↓
Main Screen
  ├── User Management ──→ Users.txt
  ├── Client Management ─→ Clients.txt
  └── Transactions ──────→ Client balances
```

The application uses text files for persistence. Records are loaded into objects, modified through the application, and written back to the corresponding files.

## Technologies

- C++
- Object-Oriented Programming
- Standard C++ library
- File I/O
- Console UI
- Visual Studio

## Project Structure and Responsibility

| Component | Responsibility |
| --- | --- |
| `clsPerson` | Common person information and behavior |
| `clsUser` | System users, permissions, and authentication data |
| `clsBankClient` | Bank-client information and account operations |
| `clsScreen` | Shared screen functionality |
| `clsLoginScreen` | Authentication workflow |
| `clsMainScreen` | Main application navigation |
| `cls*Screen` classes | Individual application operations |
| `clsInputValidate` | Input and range validation |
| `clsDate` | Date-related operations |
| `clsString` | String-related helpers |
| `clsUtil` | General reusable utilities |

## Running the Project

### Requirements

- Windows
- Visual Studio with C++ development tools

### Steps

1. Clone the repository.
2. Open the Visual Studio solution in the repository.
3. Build the solution.
4. Run the application from the project directory so the relative data files can be located.
5. Use the fictional demo records included with the project if prompted for credentials.

## Learning Goals

This project was created to strengthen practical understanding of:

- Designing classes around responsibilities
- Reusing common functionality
- Managing application state
- CRUD workflows
- File-based persistence
- Validation and error handling
- Building a larger console application from smaller components

## Limitations and Security Notes

This is an educational project. It intentionally uses local text files instead of a database and does not implement production-grade authentication, password hashing, encryption, concurrency control, or financial security.

The repository currently contains demo credentials for local testing. These are fictional and must not be reused in real systems. A production implementation should never store plaintext passwords and should keep runtime data outside version control.

## Author

**Raed Basim Hillel**  
[GitHub](https://github.com/Raed885)
