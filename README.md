# OOP Bank System

A console-based banking management system built in **C++** to practice object-oriented programming and turn core programming concepts into a complete, menu-driven application.

> **Status:** Educational project
>
> All included records are fictional. This application is not intended for real financial use.

## Overview

The system models a small bank environment with separate classes for people, users, bank clients, screens, validation, and file-based persistence.

The project was built independently as a practical OOP project, with an emphasis on reusable classes and separating responsibilities across the application.

## Features

- User authentication and login auditing
- User management
- Client management
- Add, list, find, update, and delete clients
- Add, list, find, update, and delete users
- Deposit and withdrawal operations
- Balance and total-balance reporting
- Permission-based operations
- Input validation
- File-based persistence
- Reusable date, string, and utility classes

## Project Structure

```text
OOP-Bank-System/
│
├── src/
│   ├── main.cpp
│   └── clsFindUserScreen.cpp
│
├── Global.h
├── clsPerson.h
├── clsUser.h
├── clsBankClient.h
├── clsScreen.h
├── clsLoginScreen.h
├── clsMainScreen.h
├── cls*Screen.h
├── clsDate.h
├── clsString.h
├── clsInputValidate.h
├── clsUtil.h
│
├── Clients.txt
├── Users.txt
├── LoginRegister.txt
│
├── OOP-Bank-System.sln
├── OOP-Bank-System.vcxproj
├── OOP-Bank-System.vcxproj.filters
└── README.md
```

The current layout keeps the header-based classes at the project root because the application was originally designed around reusable header classes. The executable entry points and implementation files are separated under `src/`.

## Architecture

```text
                    ┌─────────────────┐
                    │   main.cpp      │
                    └────────┬────────┘
                             │
                             ▼
                    ┌─────────────────┐
                    │  Login Screen   │
                    └────────┬────────┘
                             │
                             ▼
                    ┌─────────────────┐
                    │  Main Screen    │
                    └───────┬─────────┘
                            / \
                           /   \
                          ▼     ▼
                User Management  Client Management
                       │               │
                       ▼               ▼
                   Users.txt       Clients.txt

                       Transactions
                            │
                            ▼
                       Client balance
```

## OOP Concepts Practiced

- **Encapsulation** — keeping data and related operations together inside classes.
- **Inheritance** — deriving specialized classes such as `clsUser` and `clsBankClient` from `clsPerson`.
- **Abstraction** — exposing high-level operations while keeping implementation details inside classes.
- **Composition and reuse** — building screens and application workflows from reusable components.

## Main Components

| Component | Responsibility |
| --- | --- |
| `clsPerson` | Common personal information |
| `clsUser` | Users, permissions, authentication data, and persistence |
| `clsBankClient` | Client information, account balance, and transactions |
| `clsScreen` | Shared screen functionality |
| `clsLoginScreen` | Authentication workflow |
| `clsMainScreen` | Main application navigation |
| `cls*Screen` | Individual application operations |
| `clsInputValidate` | Input and range validation |
| `clsDate` | Date-related operations |
| `clsString` | String helpers |
| `clsUtil` | General reusable utilities |

## Technologies

- C++
- Object-Oriented Programming
- Standard C++ Library
- File I/O
- Console UI
- Visual Studio

## Running the Project

### Requirements

- Windows
- Visual Studio with the C++ development workload

### Steps

1. Clone the repository.
2. Open `OOP-Bank-System.sln` in Visual Studio.
3. Build the solution.
4. Run the application from the project directory so the relative data files can be located.
5. Use the fictional demo credentials included in `Users.txt` for local testing.

## Learning Goals

This project was created to strengthen practical understanding of:

- Designing classes around clear responsibilities
- Encapsulation and inheritance
- Reusable components
- CRUD workflows
- File-based persistence
- Permission and authentication workflows
- Input validation
- Building a larger application from smaller components

## Limitations and Security Notes

This is an educational project. It uses local text files instead of a database and does not implement production-grade authentication, password hashing, encryption, concurrency control, or financial security.

The repository contains fictional demo credentials for local testing. They must not be reused in real systems. A production implementation should never store plaintext passwords and should keep runtime data outside version control.

## Author

**Raed Basim Hillel**  
[GitHub](https://github.com/Raed885)
